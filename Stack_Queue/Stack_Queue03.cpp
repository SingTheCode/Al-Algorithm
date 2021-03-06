#include <string>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> task;
    int number=progresses.size();
    
    for(int i=0;i<number;i++){
        task.push(ceil((100-(double)progresses[i])/speeds[i]));     // 일들이 각각 며칠씩 걸리는지 계산후 삽입
    }

    int count=0;
    
    while(count!=number){
        int ans=1;
        int target=task.front();
        task.pop();
        count++;
        while(count!=number&&task.front()<=target){
            task.pop();
            ans++;
            count++;
        }
        answer.push_back(ans);
    }
    return answer;
}