class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int len=nums.size(),flag=0;
        vector<int> res;
        
        for(int i=0;i<len;i++)
        {
         for(int j=0;j<len;j++)
         {
             int summ=nums[i]+nums[j];
             if(i!=j && summ==target && flag==0)
             {
                 flag=1;
                 res.push_back(i);
                 res.push_back(j);
                 break;
             }
         }
        }
        return res;
    }
};

//another answer would be with an unordered map
