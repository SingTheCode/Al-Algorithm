#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int length= citations.size();
    answer=length-1;
    int i=length-1;
    sort(citations.begin(),citations.end());
    while(i>0){
        if(citations[answer]==length-i){
            break;
        }else if(citations[answer]<length-i){
            i++;
            break;
        }else{
            i--;
            answer--;
        } 
    }
    cout<<citations[answer]<<"  "<<length-i<<"  "<<i;
    while(length-i<i){
         
    }
    if(citations[answer]==0){
        i=length;
    }
    return length-i;
}
int main(){

    vector<int> array={0, 0, 2, 5, 60, 70, 90};
    

    return 0;
}