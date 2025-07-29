#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin>>n;
    int num_solvable_problems=0;
    for(int i=0; i<n; i++){

        std::vector<int> problem;
        for(int i=0; i<3; i++){
            int element;
            std::cin>>element;
            problem.push_back(element);
        }

       int solution=0;
       for (int sureness : problem){
            solution+=sureness;
        }

        if(solution>1){
            num_solvable_problems++;
        }
    }
    std::cout<<num_solvable_problems;

    return 0;
}