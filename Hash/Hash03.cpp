#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string,int> allClothes;               //  key-value 값을 가진 연관 컨테이너 구조로서 정렬이 되지않고 중복값을 허용하지 않는 형태이다.
    pair<string,int> cloth;                             //  pair<string,int>는 string,int 형태의 구조체로서 사용가능
    
    for(int i=0,j=clothes.size();i<j;i++){
        if(allClothes.count(clothes[i][1])){            //  count는 키값의 갯수를 반환하는 함수로 unorderd_map은 중복을 허용하지 않으므로 0또는 1의 형태로 나온다.
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
        answer*=(it->second+1);                         // 입지않는 경우를 포함하여 모든 경우의 수를 곱해주었다.
    }
    answer-=1;                                          // 모두 입지 않은 경우는 뺴주었다.
    return answer;
}
