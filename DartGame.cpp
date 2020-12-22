#include <string>
#include <cmath>

using namespace std;

int solution(string dart) {
    int answer = 0;
    int n = dart.size();
    int point[3] = {0,};
    int j = -1;
    
    for(int i=0; i < n; ++i){
        if(dart[i] == '1' && dart[i+1] == '0'){//10
            ++j;
            point[j] = 10;
            ++i;
        }
        else if(dart[i] >= '0' && dart[i] <= '9' ){//0~9
            ++j;
            point[j] = dart[i] - '0';
        }
        else if(dart[i] == 'D'){
            point[j] = pow(point[j], 2);
        }
        else if(dart[i] == 'T'){
            point[j] = pow(point[j], 3);
        }
        else if(dart[i] == '*'){
            point[j] *= 2;
            if(j > 0) point[j-1] *= 2;
        }
        else if(dart[i] == '#'){
            point[j] *= (-1);
        }
    }
    
    for(int i=0; i < 3; ++i){
        answer += point[i];
    }
    
    return answer;
}
