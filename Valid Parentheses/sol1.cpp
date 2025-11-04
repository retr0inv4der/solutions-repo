#include <string>
class Solution {
public:
    void searchAndDelete(std::string &stack ){
        if(stack.size() <= 1 ) return ; 
        for(int i = 0 ; i<stack.size(); i++ ){
            if(stack[i] == '(' && stack[i+1] ==')'){
                stack.erase(i,2);
                return ;
            }
            if(stack[i] == '[' && stack[i+1] ==']'){
                stack.erase(i,2);
                return ;
            }
            if(stack[i] == '{' && stack[i+1] =='}'){
                stack.erase(i,2);
                return ;
            }
        }
    }
    bool isValid(std::string s) {
        std::string stack ;
        for(int i = 0 ; i<s.size() ; i++){
            stack += s[i];
            searchAndDelete(stack);
        }
        if(stack.size() != 0) return false; 
        return true;
    } 

};