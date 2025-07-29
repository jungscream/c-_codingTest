#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    istringstream ss(s);
    string stringBuffer;
    vector<string> v;
    v.clear();
    vector<int> ans;
    
    while(getline(ss, stringBuffer, ' ')){
        v.push_back(stringBuffer);
    }
    
    
    for(int i=0; i<v.size(); i++)
        ans.push_back(stoi(v[i]));
    
    sort(ans.begin(), ans.end());
    answer += to_string(ans.front());
    answer += " ";
    answer += to_string(ans.back()); 

    return answer;
}