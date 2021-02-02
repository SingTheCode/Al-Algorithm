#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int>solution(vector<int>array,vector<vector<int>> commands){
    vector<int> answer;
    
    for(int i=0,j=commands.size();i<j;i++){
        int targetIndex=commands[i][0]-1;
        int toIndex=commands[i][1]-1;
        int answerIndex=commands[i][2]-1;

        vector<int>newArray={};
        do{
            newArray.push_back(array[targetIndex]);
            targetIndex++;
        }while(targetIndex<toIndex+1);
        sort(newArray.begin(),newArray.end());
        answer.push_back(newArray[answerIndex]);
    }

    return answer;
}