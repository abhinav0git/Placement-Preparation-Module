class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        reverse(matrix.begin(), matrix.end());
        for (int i = 0; i < matrix.size(); ++i) 
        {
        for (int j = i + 1; j < matrix[i].size(); ++j)
            swap(matrix[i][j], matrix[j][i]);
    }
    }
};
//general method to rotate an image by 90deg anti clock wise would be
//1) flip the 2d matrix upside down 
//2) swap the elements symetrically [swap according to the dig from topleft to bottomright]

//general method to rotate the 2d matrix by 90deg clockwise
//1) flip the matrix left to right (left side goes to  right side)
//2) swap the elements symetrically [swap according to the dig from topleft to bottomright]
