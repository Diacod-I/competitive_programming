#include <iostream>
#include <string>

int main(){
    std::string team_players; std::cin>>team_players;
    int check=0;
    int team_start=0;
    int i=0;

    while(i<team_players.length()){
        if(team_players[i]==team_players[team_start]){
            ++check;
            ++i;
        }
        else{
            team_start=i;
            check=1;
            ++i;
        }
        if(check>=7){
            std::cout<<"YES";
            return 0;
        }
    }
    std::cout<<"NO";
    return 0;
}