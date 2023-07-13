class Solution 
{
public:
    void setZeroes(vector<vector<int> > &matrix) 
    {
        //idea is to set every first element of row and column as zero if that
        //row or column contain as a flag
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
        
        //setting zeros
        for (int i = 0; i < rows; i++) 
        {
        if (matrix[i][0] == 0) 
        col0 = 0;
        for (int j = 1; j < cols; j++)      //traversing from 1th element
            if (matrix[i][j] == 0)
            matrix[i][0] = matrix[0][j] = 0;
        }

        //asssigning every row and column to zero
        for (int i = rows - 1; i >= 0; i--) 
        {
            for (int j = cols - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            matrix[i][j] = 0;
            if (col0 == 0) 
            matrix[i][0] = 0;
        }
    }
};
