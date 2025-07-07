#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int first;
    while(!section.empty()){
        answer++;
        first = section.front();
        for(int i=first; i<first+m; i++){
            if(section.empty()) return answer;
            if(section.front() <= i) {
                section.erase(section.begin());
            }
        }
    }
    return answer;
}