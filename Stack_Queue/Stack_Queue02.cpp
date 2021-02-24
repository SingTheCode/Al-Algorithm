#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    int number= prices.size();
    vector<int> answer(number);                         // answer를 number개의 0으로 초기화
    stack<pair<int,int>> st;                            // index, price 형태의 스택구조
    
    for(int i=0;i<number;i++){
        while(!st.empty()&&st.top().second>prices[i]){  // 만약에 이전의 요소에서 price의 현재값보다 낮은게 있다면 없을때까지
            answer[st.top().first]=i-st.top().first;    // 현재 위치에서 인덱스까지의 거리를 answer 인덱스에 넣어준다.
            st.pop();
        }
        st.push(make_pair(i,prices[i]));
    }

    while(!st.empty()){                                 // 나머지 스택에 있던 것들은
        answer[st.top().first]=number-1-st.top().first; // 마지막 인덱스 즉 price.size()-1 까지의 거리를 넣어준다.
        st.pop();
    }
    
    return answer;
}