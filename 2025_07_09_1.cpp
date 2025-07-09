#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int temp;
    for(int i=0; i<sizes.size(); i++){
        temp = 0;
        if(sizes[i][0] < sizes[i][1]){
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
    temp = 0;
    
    for(int i=0; i<sizes.size(); i++){
        if(temp < sizes[i][0])
            temp = sizes[i][0];
    }
    for(int j=0; j<sizes.size(); j++){
        if(answer < sizes[j][1])
            answer = sizes[j][1];
    }
    return answer*temp;
}