class Solution {
public:
    int first_occurence(vector<int> nums,int target)
    {
        int s=0;
        int e=nums.size()-1;
        
      
        
        while(s<=e)
        {
            int mid=(e-s)/2+s;
            
            if(nums[mid]>target)
                e=mid-1;
            
            else if(nums[mid]<target)
                s=mid+1;
            
            else
            {
                
                if(mid==s || nums[mid]!=nums[mid-1])
                {
                    return mid;
                    break;
                }
                else
                    e=mid-1;
            }
                
        }
        return -1;

    }
    
    int second_occurence(vector<int> nums,int target)
    {
        int s=0;
        int e=nums.size()-1;
        
       
        
        while(s<=e)
        {
            int mid=(e-s)/2+s;
            
            
             if (nums[mid]>target)
                e=mid-1;
            
            else if(nums[mid]<target)
                s=mid+1;
            
           else
            {
                
                if(mid==e || nums[mid]!=nums[mid+1])
                    return mid;
                
                else
                    s=mid+1;
           }
                
         }
        return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
         int a=first_occurence(nums,target);
        int b=second_occurence(nums,target);
        
        vector<int> temp;
        
        temp.push_back(a);
        temp.push_back(b);
        
        return temp;
        
    }
};