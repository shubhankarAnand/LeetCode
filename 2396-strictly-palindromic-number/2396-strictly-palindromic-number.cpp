class Solution {
public:
    bool isPalindrome(string s){
        int l = 0, r = s.length()-1;
        while(l <= r){
            if(s[l] != s[r])
                return false;
            ++l, --r;
        }
        return true;
    }
    bool checker(int n, int a){
        string str = "";
        while(n != 0){
            str += to_string(n%a);
            n /= a;
        }
        return isPalindrome(str);
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<=n-2; i++){
            int temp = n;
            if(!checker(temp, i))
                return false;
        }
        return true;
    }
};