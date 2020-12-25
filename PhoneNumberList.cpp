#include <string>
#include <vector>
#include <iostream>

using namespace std;
typedef vector<int> vint;

bool solution(vector<string> phone_book) {
    int n = phone_book.size();
    vint small;
    vint smallIdx;
    small.push_back(21);
    smallIdx.push_back(-1);
    int k=0;
    int cnt = 1;
    
    for(int i=0; i < n; ++i){
        int temp = phone_book[i].size();
        if(small.back() > temp){
            small[0] = temp;
            smallIdx[0] = i;
        }
        else if(small.back() == temp){
            small.push_back(temp);
            smallIdx.push_back(i);
            ++cnt;
        }
    }
    
    
    //
    for(int k=0; k < cnt; ++k){
        for(int i=0; i < n; ++i){
            if(i == smallIdx[k]) continue;
            string p = phone_book[smallIdx[k]];
            string temp = "";
                
            for(int j=0; j < p.size(); ++j){
                temp += phone_book[i][j];
            }
        
            if(temp == p) 
                return false;
        }
    }

    
    return true;
}
