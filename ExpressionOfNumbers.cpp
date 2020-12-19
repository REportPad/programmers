#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i <= n; ++i){
        int s = (i-1)*i/2;
        int x = (n - s)/i;
        if((n - s)%i == 0 && x > 0) answer++;
    }
    
    return answer;
}
