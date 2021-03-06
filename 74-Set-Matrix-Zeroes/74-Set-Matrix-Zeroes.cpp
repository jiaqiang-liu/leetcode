// Author:JiaQiang Liu
// Date:2018/4/28

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void serZeroes(vector<vector<int>>& matrix) {
		int row = matrix.size();
		int col = matrix[0].size();

		int bRow = false;
		int bCol = false;

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (matrix[i][j] == 0) {
					if (i == 0) bRow = true;
					if (j == 0) bCol = true;
					matrix[0][j] = matrix[i][0] = 0;
				}
			}
		}
		for (int r = 1; r < row; r++) {
			for (int c = 1; c < col; c++) {
				if (matrix[r][0] == 0 || matrix[0][c] == 0) {
					matrix[r][c] = 0;
				}
			}
		}

	}
};

int main()
{
    return 0;
}

