#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0,sum = 0;                             // sum은 무게의 총합
    queue<int> bridge;
    
    do{
        if(bridge.size()==bridge_length){               // bridge의 끝에 트럭이 도착했을경우
            sum-=bridge.front();
            bridge.pop();
        }
        int target=truck_weights.front();               // 다음 트럭의 무게
        if(weight<(sum+target)){                        // 다음트럭과 무게의 총합이 무게를 초과할 경우
            bridge.push(0);
        }else{                                          // 초과하지 않을경우
            bridge.push(target);                        
            sum+=target;
            truck_weights.erase(truck_weights.begin());
        }
        answer++;
    }while(!truck_weights.empty());

    answer+=bridge_length;                              // 마지막 트럭이 통과하는 시간을 더해준다.

    return answer;
}