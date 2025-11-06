#include <string>
class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if(needle.size() == 0) return 0;

        int index = 0;
        int temp = 0;

        for(int i = 0; i < haystack.size(); i++) {
            if(haystack[i] == needle[index]) {
                if(index == 0)
                    temp = i;

                if(index + 1 == needle.size())
                    return temp;

                index++;
            } else {
                if(index > 0) {
                    i = temp;  
                }
                index = 0;
            }
        }
        return -1;
    }
};