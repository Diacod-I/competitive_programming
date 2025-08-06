#include <iostream>

int main(){
    int limak, bob, i;
    std::cin>>limak>>bob;
    i=0;
    while(limak<=bob){
        limak+=2*limak;
        bob+=bob;
        i+=1;
    }

    std::cout<<i;

    return 0;
}