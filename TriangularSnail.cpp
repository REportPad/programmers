#include <iostream>
#include <vector>

using namespace std;

int arr[1000][1000];
int dx[] = {1,0,-1};
int dy[] = {0,1,-1};
vector<int> solution(int n) {
    
    int x = -1, y = 0;
    int num = 1;
    int direction = 0;
    int n_copied = n;
    while(n>0){
        for(int i=0; i<n; i++){
            x += dx[direction%3];
            y += dy[direction%3];
            arr[x][y] = num++;
        }
        n--;
        direction++;
    }
    
    vector<int> answer;
    for(int i=0; i<n_copied; i++){
        for(int j=0; j<i+1; j++){
            answer.push_back(arr[i][j]);
        }
    }
    return answer;
}
