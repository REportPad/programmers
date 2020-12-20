#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int s;
    priority_queue<int, vector<int>, greater<int> > pq;
    int n = scoville.size();
    for(int i=0; i < n; ++i){
        pq.push(scoville[i]);
    }
    
    while(pq.top() < K){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        s = a + b*2;
        pq.push(s);
        
        if(pq.top() < K && pq.size() == 1) return -1;
        ++answer;
    }
    
    return answer;
}
