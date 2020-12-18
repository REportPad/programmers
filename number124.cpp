#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    while(n > 0){
        --n;
        int x = n%3;
        if(x == 0){
            answer += "1";
        }
        else if(x == 1){
            answer += "2";
        }
        else{
            answer += "4";
        }
        n /= 3;
    }
    
    reverse(answer.begin(), answer.end());
    return answer;
}
