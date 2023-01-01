class Solution {
   public:
    string getHint(string s, string g) {
        int n = s.size();
        int b = 0, c = 0;
        int a[10] = {0};
        for (int i = 0; i < n; i++)
            (s[i] == g[i]) ? b++ : a[s[i] - '0']++;

        for (int i = 0; i < n; i++) {
            if (s[i] != g[i] && a[g[i] - '0'] > 0) {
                a[g[i] - '0']--;
                c++;
            }
        }
        return to_string(b) + 'A' + to_string(c) + 'B';
    }
};