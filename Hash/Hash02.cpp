#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    string left,right;
    multiset<string> st(phone_book.begin(),phone_book.end());
    for(auto it=st.begin();it!=st.end();it++){
        for(auto it2=st.begin();it2!=st.end();it2++){           // iterator는 초기값을 begin()+1과 같이 설정할 수 없어 begin()부터 설정
            if(it!=it2){                                        // 같은 위치의 값을 방지하여 비교
                left=*it;
                right=*it2;
                if(right.find(left)==0){                        // string의 find함수는 위치를 반환시키므로 접두사 즉 첫 번째 위치일 경우 0을 반환
                    return false;}
            }
        }
    }
    return answer;
}