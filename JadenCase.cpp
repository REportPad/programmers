#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int n = s.size();
    
    if(s[0] >= 'a' && s[0] <= 'z') answer += (s[0]-'a'+'A');
    else answer += s[0];
    
    for(int i=1; i < n; ++i){
        if( (s[i-1] == ' ') && (s[i] >= 'a' && s[i] <= 'z')){
            answer += (s[i]-'a'+'A');
        }
        else if( (s[i-1] == ' ') && (s[i] >= 'A' && s[i] <= 'Z')){
            answer += s[i];
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            answer += (s[i]-'A'+'a');
        }
        else answer += s[i];
    }
    
    return answer;
}
