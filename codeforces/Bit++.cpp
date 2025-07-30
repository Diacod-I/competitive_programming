#include <iostream>
#include <string>

int main(){
    int x=0;
    int num_operations; std::cin>>num_operations;
    for(int i=0; i<num_operations; i++){
        std::string operation; std::cin>>operation;
        if(operation[1]=='+'){
            ++x;
        }
        else{
            --x;
        }
    }
    std::cout<<x;
    return 0;
}