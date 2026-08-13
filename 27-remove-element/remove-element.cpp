class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 1.Brute Force 
        // vector<int>ans;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]!=val){
        //         ans.push_back(nums[i]);
        //     }
        // }

        // nums = {};
        // nums = ans;
        // return nums.size();

        // 2. Optimal Approach --> Two pointers
        int k = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;

    }
};