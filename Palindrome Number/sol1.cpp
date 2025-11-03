#include <cmath>
#include <iostream>
#include <math.h>
#include <vector>

class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0 ) return false; 
        std::vector<int> list ;
        int x_copy = x ;
        int temp ;
        long int num  = 10;
        int digits = 1;
        //find the number of digits
        while(num-1<x){
            digits +=1;

            num*=10;

            std::cout <<num << std::endl ; 
        }
        std::cout << digits << std::endl  <<std::endl ;
        temp = 0;
        while(digits != 0 ){
            num = x ; 
            num =  (int)(num/10) ;
            num = x - num*10; 
            list.push_back(num);
            x = (int)(x/10);
            digits -=1 ;
            temp += 1;
        }
        if(list.front() == 0 ) return false; 
        digits = temp+1 ;

        num = 0 ;
        for(int i = 1 ; i<= list.size() ; i++){
            std::cout<<"list[]" << list[i-1]  <<std::endl;
            num = num + list[i-1] * (pow(10,digits-i-1));
            std::cout << num << std::endl;
         }

        if(num == x_copy){
            return true;
        }else{
            return false ;
        }
    }
};

int main(){
    Solution moz ;
    std::cout << moz.isPalindrome(113) ;
}