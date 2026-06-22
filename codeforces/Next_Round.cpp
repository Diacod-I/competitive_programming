#include <iostream>
#include <vector>

int main(){
    int n,k,advancing_places;
    std::vector<int> places;
    std::cin>>n>>k;
    
    for(int i=0; i<n; i++){
        int temp_val;
        std::cin>>temp_val;
        places.push_back(temp_val);
    }

    for(int it=0; it<n; it++){
        if(places[it]>=places[k-1] && places[it]>0){
            advancing_places++;
        }
    }
    std::cout<<advancing_places-1;
    return 0;
}