class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int area=INT_MIN;

        while(l<r)
        {
            area = max((min(height[l],height[r]) * (r-l)), area);
            // cout<<area<<endl;

            if(height[l] < height[r])
            l++;

            else if(height[l]> height[r])
            r--;

            else
            {
                l++;
                r--;
            } 
        }

        return area;
    }
};