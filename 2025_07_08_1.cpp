#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> vec;
    
    for(int row=0; row<arr1.size(); row++){
        answer.push_back(vec);
        for(int col=0; col<arr1[row].size(); col++)
            answer[row].push_back(arr1[row][col] + arr2[row][col]);     
    }

    return answer;
}