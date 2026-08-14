class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // 1. Brute Approach
        vector<int> even;
        vector<int> odd;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }

        for(int x : even){
            ans.push_back(x);
        }

        for(int y : odd){
            ans.push_back(y);
        }

        return ans;

        // 2. Optimal Approach
        
    }
};