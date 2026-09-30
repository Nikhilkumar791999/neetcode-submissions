class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_set<int>seet;

        for(int num : nums){

            if(seet.count(num)){
                return true;
            }

            seet.insert(num);

        }

        return false;
    }
};