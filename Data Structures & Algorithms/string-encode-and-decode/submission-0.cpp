class Solution {
public:

    string encode(vector<string>& strs) {
        string final;
        for (int i = 0; i < strs.size(); i++) {
            string s = to_string(strs[i].size());
            final += s;
            final += '#';
            final += strs[i];
        }

        return final;
    }

    vector<string> decode(string s) {
        vector<string> final;
        int i = 0;

        while(i < s.size()) {
            int l = 0;

            while(s[i] != '#') {
                l = l * 10 + (s[i] - '0');
                i++;
            }
            
            i++;

            string str = s.substr(i, l);

            final.push_back(str);
            i += l;
        }

        return final;
    }
};
