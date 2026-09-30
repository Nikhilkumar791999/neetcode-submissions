class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>ans;

        for(int n : nums){
            if(ans.count(n)){
                return true;
            }
            ans.insert(n);
        }
        return false;
    }
};