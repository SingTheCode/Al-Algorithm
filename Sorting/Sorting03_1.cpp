#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
	int answer = 0;
	sort(citations.begin(), citations.end());
	while (answer<citations.size()) {
		 if (citations.back() == 0) {
		 	break;
		 }
		while (citations.front() <= answer) {
			citations.erase(citations.begin());
            if(citations.empty())
                break;
		}
		answer++;
        if(citations.back()==answer)
            break;
	}
	return answer;
}