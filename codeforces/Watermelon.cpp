#include <iostream>

int main() {
    int w;
    std::cin >> w;

    //Check for w being odd
    if(w%2 || w==2){
        std::cout<<"NO";
        return 0;
    }

    //Split into halves, +1 for one half and -1 for another half and check for odd
    else if(w%2==1 && (((w/2)+1)%2 || ((w/2)-1)%2)) {
        std::cout<<"NO";
        return 0;
    }

    //Otherwise, YES
    else {
        std::cout<<"YES";
    }
    return 0;
}