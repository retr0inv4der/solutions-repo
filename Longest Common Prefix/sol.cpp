#include <string>
#include <vector>
class Solution {
public:
std::string commonPrefix(const std::string& a, const std::string& b) {
    int i = 0;
    while (i < a.size() && i < b.size() && a[i] == b[i])
        i++;
    return a.substr(0, i);
}
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string res = "" ; 

        for(int i = 0 ; i<strs.size() ; i++){
            if(i ==0){
                res = strs[0];
            }else{
                res = commonPrefix(res , strs[i]);
                if(res == "") return "" ;  
            }

        }
        return res;
    }
};