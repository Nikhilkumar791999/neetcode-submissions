class Solution {
public:

    string encode(vector<string>& strs) {

        string eString;

        for (auto str : strs) {
            eString += to_string(str.length()) + "#" + str;
        }

        return eString;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

        while( i < s.length()){

            int j = i;

            while(s[j]!='#'){
                j++;
            }

            int length = stoi(s.substr(i, j - i));

            j++;

            string str = s.substr( j , length);

            ans.push_back(str);

            i = j+length;

            
        }

        return ans;
    }
};
