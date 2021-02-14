#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
	int answer = 0;
	sort(citations.begin(), citations.end());
	answer=citations.back();
    
    while(answer!=0){
        int count=0;
        for(int i=citations.size()-1;citations[i]>=answer;i--){
            count++;
        }
        if(count>=answer)
            break;
        answer--;
    }
	return answer;
}