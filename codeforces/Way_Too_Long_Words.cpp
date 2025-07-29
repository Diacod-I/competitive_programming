#include <iostream>
#include <string>

void abbreviate(std::string str){
    if(str.size()>10){
        std::cout<<str[0]<<str.size()-2<<str[str.size()-1]<<std::endl;
    }
    else{
        std::cout<<str<<std::endl;
    }
}

int main() {
    int num_words;
    std::cin>>num_words;
    for(int i=0; i<num_words; i++){
        std::string str;
        std::cin>>str;
        abbreviate(str);
    }
    return 0;
}
