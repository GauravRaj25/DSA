class Solution {
public:

    int firstOccurrence(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int guess = (low + high) / 2;

            if (nums[guess] < target) {
                low = guess + 1;
            }
            else if (nums[guess] > target) {
                high = guess - 1;
            }
            else {
                ans = guess;
                high = guess - 1;
            }
        }

        return ans;
    }

    int lastOccurrence(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int guess = (low + high) / 2;

            if (nums[guess] < target) {
                low = guess + 1;
            }
            else if (nums[guess] > target) {
                high = guess - 1;
            }
            else {
                ans = guess;
                low = guess + 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOccurrence(nums, target),
                lastOccurrence(nums, target)};
    }
};