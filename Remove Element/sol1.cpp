#include <vector>
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int> temp ; 
        for(int i  = 0 ; i<nums.size() ; i++){
            if(nums[i] != val) temp.push_back(nums[i]);
        }
        nums = temp ;
        return temp.size() ; 
    }
};