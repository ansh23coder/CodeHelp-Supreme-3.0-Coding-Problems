/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == nums[i] || count <= 2) 
                count++;
        }
        // if(count <= 2) 
        return count;
    }
};
*/