#include <string>
#include <vector>
#include <iostream>

using namespace std;

// first: 1,2,3,4,5 , second: 2,1,2,3,2,4,2,5 , third: 3,3,1,1,2,2,4,4,5,5
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int first[] = {1,2,3,4,5};
    int second[] = {2,1,2,3,2,4,2,5};
    int third[] = {3,3,1,1,2,2,4,4,5,5};
    
    int correct[] = {0,0,0};
    int index = 0;
    
    // first
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == first[index])
            correct[0]++;
        index++;
        if(index == 5) index = 0;
    }
    
    index = 0;
    // second
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == second[index])
            correct[1]++;
        index++;
        if(index == 8) index = 0;
    }
    
    index = 0;
    // third
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == third[index])
            correct[2]++;
        index++;
        if(index == 10) index = 0;
    }

    
    int temp = 0;
    
    for(int i=0; i<3; i++){
        if(temp < correct[i]) 
            temp = correct[i];
    }
    
    for(int i=0; i<3; i++)
        if(temp == correct[i])
            answer.push_back(i+1);
    
    return answer;
}