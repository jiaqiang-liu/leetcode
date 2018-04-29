### [Validare Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/description/)

#### 思路

不能想当然的认为大于左孩子，小于右孩子，递归解决就完事了。因为左子树和右子树必须也是二叉搜索树

**正确的做法是**
中序遍历整棵树，看中序序列是否为有序序列，如果是则为二叉搜索树，否则不是

**另**
还需练习一下树的非递归遍历