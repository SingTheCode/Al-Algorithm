#include <string>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool compare(int, int);
string solution(vector<int> numbers) {
    string answer = "";
    int count=0;
    
    sort(numbers.begin(),numbers.end(),compare);

    for(int i=0,j=numbers.size();i<j;i++){
        if(numbers[i]==0)
            count++;
        answer+=to_string(numbers[i]);
    }
    if(count==numbers.size())
        answer="0";

    return answer;
}
bool compare(int previousNumber,int nextNumber){
    string previousToNext=to_string(previousNumber)+to_string(nextNumber);
    string nextToPrevious=to_string(nextNumber)+to_string(previousNumber);
    if(previousToNext.compare(nextToPrevious)>0){
         return true;
     }else{
         return false;
     }
}