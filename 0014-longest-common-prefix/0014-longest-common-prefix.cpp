class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         sort(strs.begin(), strs.end());
        int size = strs.size();
        string start = strs[0], end = strs[size-1], ans="";
        for(int i=0; i<start.size(); i++){
            if(start[i]==end[i]){
                ans+=start[i];
                
            }
            else break;
        }
        return ans;
        
    }
};