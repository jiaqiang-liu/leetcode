### [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/description/)

#### 思路

这题还是比较巧妙的，naive的解法可以用O(row+col)的空间复杂度，来记录哪些行和列需要被置零，但是这样还不是最优的解法。

最优的解法为利用第零行和第零列来当作标记，从[1-row][1-col]遍历，如果matrix[r][c]=0,就把matrix[r][0]和matrix[0][c]标记为0，这样下次遍历的时候，就可把相应的行和列置零。此外还需要两个变量来记录第零行和第零列是否需要被置零