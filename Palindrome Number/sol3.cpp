//we just have to search the half of the digis

class Solution {
public:
bool isPalindrome(int x) {
    if(x<0 ) return false;
    if(x==0) return true;
    long long rev=0, n = x; 
    while(x>rev){
        rev = (rev*10) + x % 10;
        x/=10;
    }
    return (x == rev || x == rev/10);
}
};
