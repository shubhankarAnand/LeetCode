class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        
        vector<int>ans(num_people,0);
        int k=0;
        while(candies)
        {
            ans[k%num_people]+=min(k+1,candies);
                candies-=min(k+1,candies);
            k++;
        }
        return ans;
        
    }
};