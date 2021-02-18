#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string,int> allClothes;
    pair<string,int> cloth;
    
    for(int i=0,j=clothes.size();i<j;i++){
        if(allClothes.count(clothes[i][1])){
            auto it=allClothes.find(clothes[i][1]);
            int number=it->second+1;
            allClothes.erase(clothes[i][1]);
            cloth={clothes[i][1],number};
            allClothes.insert(cloth);
        }else{
            cloth={clothes[i][1],1};
            allClothes.insert(cloth);
        }
    }
    for(auto it=allClothes.begin();it!=allClothes.end();it++){
        answer*=(it->second+1);
    }
    answer-=1;
    return answer;
}