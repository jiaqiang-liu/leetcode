// Author:JiaQiang Liu
// Date:2018/4/29

#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p != NULL && q != NULL) {
			if (p->val == q->val) {
				return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
			}
			else {
				return false;
			}
		}
		return p==NULL&&q==NULL;
	}
};

int main()
{
    return 0;
}

