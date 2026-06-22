#include <iostream>
#include <cmath>

int main(){
    int distance;
    std::cin>>distance;
    int steps;

    while(distance>0){
        if(distance-5>=0){
            distance-=5;
            steps+=1;
            continue;
        }
        else if(distance-4>=0){
            distance-=4;
            steps+=1;
            continue;
        }
        else if(distance-3>=0){
            distance-=3;
            steps+=1;
            continue;
        }
        else if(distance-2>=0){
            distance-=2;
            steps+=1;
            continue;
        }
        else if(distance-1>=0){
            distance-=1;
            steps+=1;
            continue;
        }
        if(distance==0) break;
    }

    std::cout<<steps-1;
    return 0;
}