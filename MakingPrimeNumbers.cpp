#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n == 2) return true;
    else if(n%2 == 0) return false;
    
    for(int i=2;i*i <= n; ++i){
        if(n%i == 0) return false;
    }
    
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int n = nums.size();
    if(n == 3){
        int temp = nums[0]+nums[1]+nums[2];
        if(isPrime(temp)){
            return 1;
        }
        else return 0;
    }
    
    int sum = 0;
    
    for(int i=0; i < n-2; ++i){
        sum += nums[i];
        for(int j=i+1; j < n-1; ++j){
            sum += nums[j];
            for(int k=j+1; k < n; ++k){
                sum += nums[k];
                if(isPrime(sum)) answer++;
                sum -= nums[k];
            }
            sum -= nums[j];
            
        }
        sum = 0;
    }

    return answer;
}
