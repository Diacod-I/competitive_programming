#include <iostream>
#include <vector>
#include <cstdlib>

int main(){
    int dx,dy=0;
    int x_value, y_value;
    for (int i=0; i<5; i++){
        std::vector<int> temp_arr;
        for(int j=0; j<5; j++){
            int temp_element;
            std::cin>>temp_element;
            temp_arr.push_back(temp_element);
            if(temp_element){
                dx=i;
                dy=j;
                break;
            }
        }
    }

    x_value=std::abs(dx-2);
    y_value=std::abs(dy-2);

    std::cout<<x_value+y_value;

    return 0;
}