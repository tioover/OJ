class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool is = false;
        int start = 0;
        for (char c: s) {
            bool seached = false;
            for (int i=start; i<t.size(); ++i) {
                if (t[i] == c) {
                    start = i+1;
                    seached = true;
                    break;
                }
            }
            if (!seached) { return false; }
        }
        return true;
    }
};
