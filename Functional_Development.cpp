#include <string>
#include <vector>

using namespace std;
typedef vector<int> vi;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vi vt;    
    int cnt = 0;
    int m = -1;
    int n = speeds.size();
    
    for(int i=0; i < n; ++i){
        int r = 100-progresses[i];
        int t = r/speeds[i] + (r%speeds[i] > 0 ? 1:0);
        vt.push_back(t);
    }
    m = vt[0];
    cnt = 1;
    for(int i=1; i < n; ++i){
        if(m >= vt[i]) ++cnt;
        else{
            answer.push_back(cnt);
            cnt = 1;
            m = vt[i];
        }
    }
    answer.push_back(cnt);
    
    return answer;
}
