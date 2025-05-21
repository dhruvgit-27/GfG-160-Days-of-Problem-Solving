


class Solution {
  public:
    int minChar(string& s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        string concat = s + "$" + rev;
        
        int n = concat.length();
        vector<int> lps(n, 0);
        
        for (int i = 1; i <n ; i++) {
            int len =lps[i -1];
            while (len > 0 && concat[i] != concat[len]) {
                len = lps[len - 1];
            }
            if (concat[i] == concat[len]) {
                len++;
            }
            lps[i] = len;
        }
        
        return s.length() - lps[n -1];
    }
};