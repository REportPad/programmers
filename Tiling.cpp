#include <string>
#include <vector>

using namespace std;

#define MOD  1000000007
typedef unsigned long long ull;

int solution(int n) {
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 2;
    }
    
    ull fib[3];
    fib[0] = 1;
    fib[1] = 2;
    for(int i=2; i < n; ++i){
        fib[2] = fib[0]%MOD + fib[1]%MOD;
        fib[0] = fib[1];
        fib[1] = fib[2];
    }
    fib[2] %= MOD;
    return fib[2];
}
