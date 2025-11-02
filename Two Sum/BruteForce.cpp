#include <vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> res ;
        int times = 1 ;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j =times ; j < nums.size() ; j++){
                if(nums[i] +nums[j] == target){
                   res.push_back(i);
                   res.push_back(j) ;
                   return res;
                } 
            }
            times++;
        }
        return res;
    }
};