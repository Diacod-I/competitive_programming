#include <iostream>
#include <vector>
#include <algorithm> //for sort_array

std::vector<int> create_array(int n){
    std::vector<int> arr;
    for(int i=0; i<n; i++){
        int array_element;
        std::cout<<"Array Element "<<i<<":"<<std::flush;
        std::cin>>array_element;
        std::cout<<std::endl;
        arr.push_back(array_element);
    }
    return arr;
}

void print_array(std::vector<int> arr){
    std::cout<<"Array:"<<std::flush;
    for(auto i: arr){
        std::cout<<i<<" "<<std::flush;
    }
    std::cout<<std::endl;
}

std::vector<int> sort_array(std::vector<int> arr){
    std::sort(arr.begin(), arr.end());
    std::cout<<"Array Sorted!"<<std::flush<<std::endl;
    print_array(arr);
    return arr;
}

int main(){
    int n;
    std::cout<<"Give array size:";
    std::cin>>n;
    std::cout<<std::endl;
    std::vector<int> arr = create_array(n);
    arr = sort_array(arr);
    return 0;
}