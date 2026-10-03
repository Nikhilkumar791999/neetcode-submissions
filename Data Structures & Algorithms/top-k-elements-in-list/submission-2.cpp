class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<vector<int>>bucket(nums.size()+1);
        unordered_map<int,int>mp;

        //iterating to get freq
        for(auto x : nums){
            mp[x]++;
        }

        // bucket
        for(const auto& [key,frequency] : mp){
            bucket[frequency].push_back(key);
        }

        // for (const auto& p : mp) {
        //     bucket[p.second].push_back(p.first);
        // }

       // collect top k from bucket which is now sorted for most freq

       vector<int>reverseFinding;
       for(int i = bucket.size()-1 ; i >=0 && (int)reverseFinding.size() < k ;i--){

        for(auto num : bucket[i]){
            reverseFinding.push_back(num);
            if(reverseFinding.size()== k) break;
        }
       }

        return reverseFinding;
    }
};
