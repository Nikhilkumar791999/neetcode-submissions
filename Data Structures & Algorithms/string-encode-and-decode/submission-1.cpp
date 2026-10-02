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

        while (i < s.length()) {

            int j = i;

            // Find delimiter
            while (s[j] != '#') {
                j++;
            }

            // Get length
            int len = stoi(s.substr(i, j - i));

            // Move past '#'
            j++;

            // Get actual string
            string str = s.substr(j, len);

            ans.push_back(str);

            // Move to next encoded string
            i = j + len;
        }

        return ans;
    }
};
