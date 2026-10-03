class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int count = 0, max = 0;

        if (nums.size() >= 1)
            count = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i-1] + 1) {
                count++;
            }
            else if(nums[i] == nums[i-1]) continue;
            else {
                if (count > max) {
                    max = count;
                }
                count = 1;   // reset to 1, not 0
            }
        }

        if (count > max) {
            max = count;
        }

        return max;
    }
};