### [pow](https://leetcode.com/problems/powx-n/description/)

#### 思路：
很明显应该用的是快速乘幂，但应该注意pow(x,INT_MIN)的情况，因为-INT_MIN是会溢出的(这个坑踩了好多次)，解决方法有两种:
1. 使用递归方法，每次求出pow(x,n/2),这样就可以避免这个问题
2. 使用非递归方法，用unsigned int变量装载-n,因为unsigned int表示的整数范围更大。