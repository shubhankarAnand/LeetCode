class Solution {
public:
    bool isPalindrome(int x) {
          if(x<0 ||(x % 10  == 0 && x!=0))
       {
           return false;
       }
        int revnum=0;
        while(x>revnum)
        {
            revnum = (revnum * 10) + (x % 10 );
            x = x/10;
        }
        return x== revnum || x==revnum /10;
    }
};