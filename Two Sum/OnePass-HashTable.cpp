#include <unordered_map>
#include <vector>
class Solution{
    public:
    std::vector<int> twoSum(std::vector<int> & nums , int target){
        std::unordered_map<int, int> hashmap ; 
        for(int i = 0 ; i < nums.size() ; i++){
            int compliment = target - nums[i];
            if(hashmap.find(compliment) != hashmap.end()){
                return {i, hashmap[compliment]};
            }else{
                hashmap[nums[i]] = i ; 
            }

        }
        return {} ;
    }

};