#include <unordered_map>
#include <vector>
class Solution{
    public:
    std::vector<int> twoSum(std::vector<int> & nums , int target){
        std::unordered_map<int, int> hashmap ; 
        for(int i = 0 ; i < nums.size() ; i++ ) {
            hashmap[nums[i]] = i ; 
        }

        for(int i = 0 ; i < nums.size() ; i++){
            int compliment = target - nums[i]; 
            if( hashmap.find(compliment) != hashmap.end() && hashmap[compliment] != i) {
                return {i , hashmap[compliment]};
            }
        }
        return {} ;
    }

};