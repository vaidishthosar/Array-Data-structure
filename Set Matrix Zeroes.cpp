/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
*/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row1 = 1;
        int col1 = 1;

        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0 ; i < n ; i++){
            if(matrix[0][i] == 0)
            row1 = 0;
        }

        for(int i = 0 ; i < m ; i++){
            if(matrix[i][0] == 0)
            col1 = 0;
        }

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for(int i = 1 ; i < m ; i++){
            if(matrix[i][0] == 0){
                for(int j = 1 ; j < n ; j++){
                    matrix[i][j] = 0;
                }
            }
        }   

        for(int j = 1 ; j < n ; j++){
            if(matrix[0][j] == 0){
                for(int i = 1 ; i < m ; i++){
                    matrix[i][j] = 0;
                }
            }
        }     

        if(row1 == 0){
            for(int i = 0 ; i < n ; i++){
                matrix[0][i] = 0;
            }
        }

        if(col1 == 0){
            for(int i = 0 ; i < m ; i++){
                matrix[i][0] = 0;
            }
        }

    }
};