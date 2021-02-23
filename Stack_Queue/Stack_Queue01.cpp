#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0,sum = 0;
    queue <int>q;
    do{
        if(q.size()==bridge_length){
            sum-=q.front();
            q.pop();
        }
        if(!truck_weights.empty()){
            int target=truck_weights.front();
            if(weight<(sum+target)){
                q.push(0);
            }else{
                q.push(target);
                sum+=target;
                truck_weights.erase(truck_weights.begin());
            }
        }else{
            q.push(-1);
        }
        answer++;
    }while(q.front()!=-1);
    
    return answer;
}