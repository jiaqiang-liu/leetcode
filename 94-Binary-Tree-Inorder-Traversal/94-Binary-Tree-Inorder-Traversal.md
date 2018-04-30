### [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/description/)

#### 思路：
树的中序遍历可以归纳为如下步骤：
1. 深入到当前树的最左下方，将沿途的节点加入栈
2. 弹栈，访问栈顶节点
3. 将控制权转到栈顶节点的右子树
4. 重复以上步骤，直至栈为空