#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    multiset<string> st(participant.begin(),participant.end());
    for(int i=0,j=completion.size();i<j;i++){
        auto it=st.find(completion[i]);
        st.erase(it);
    }
    answer= *st.begin();
    return answer;
}