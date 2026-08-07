class Solution {
public:
    string getalphanum(string s){
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        string res = "";
        for (auto  n : s){
            n = tolower(n);
            if(isalnum(n)) res.push_back(n);
        }
        return res;
    }
    bool isPalindrome(string s) {
        bool res = 1;
        s = getalphanum(s);
        int n = s.size();
        for(int i = 0 ; i < n/2 ; i++){
            if(s[i] != s[n - i -1]){
                res = 0;
            }
        }
        return res; 
    }
};