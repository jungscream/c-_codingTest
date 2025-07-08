#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int s_length = s.length();
    int index = 0;
    int norm = 0;
    
    while(s_length--){
        if(s[index] == ' '){
            norm = 0;
            index++;            
        }
        else{
            if(norm%2==0)
                s[index] = toupper(s[index]);
            else
                s[index] = tolower(s[index]);
            norm++;
            index++;
        }
    }
    return s;
}