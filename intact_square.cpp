#include <cmath>

using namespace std;
typedef long long ll;

ll gcd(int w, int h){
    ll a = min(w,h);
    ll b = max(w, h);
    ll r = b%a;
    
    while(r > 0){
        b = a;
        a = r;
        r = b%a;
    }
    
    return a;
}

long long solution(int w,int h) {
    long long answer = 1;
    ll wh = (ll)w* (ll)h;
    ll x = gcd(w,h);
    answer = wh - x*((w/x) + (h/x) -1);
        
    return answer;
}
