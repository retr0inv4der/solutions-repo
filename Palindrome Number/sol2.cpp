#include <cmath>
#include <iostream>
#include <math.h>
#include <vector>
#include <string>
class Solution {
public:
bool isPalindrome(int x) {
    if(x<0 ) return false;
    if(x==0) return true;
    long long rev=0, n = x; 
    while(x>0){
        rev = (rev*10) + x % 10;
        x/=10;
    }
    if(rev == n){
        return true; 
    }else{
        return false;
    }
}
};
