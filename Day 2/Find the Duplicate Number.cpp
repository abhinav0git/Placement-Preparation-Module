class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        vector <int> ans(len, 0);

        for(int i = 0; i<len; i++)
            ans[nums[i]]++;

        for(int j=0; j<len; j++)
        {
        if(ans[j]>=2)
        return j;
        }

        return 0;
    }
};
