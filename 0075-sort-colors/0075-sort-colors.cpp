class Solution {
public:
    void swap(int& x,int& y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    void sortColors(vector<int>& nums) {
    
        for(int i=0;i<nums.size();i++)
        {
            int temp=i;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[temp]>nums[j])
                    temp=j;
            }
            swap(nums[i],nums[temp]);
        }
          
    }
};