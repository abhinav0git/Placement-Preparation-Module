class Solution {
public:
    void sortColors(vector<int>& A) 
    {
        int n = A.size();
        int j = 0, k = n - 1;
        for(int i = 0; i <= k; ++i)
        {
            if (A[i] == 0 && i != j)
            swap(A[i--], A[j++]);
            
            else if (A[i] == 2 && i != k)
            swap(A[i--], A[k--]);
        }
    }
};
