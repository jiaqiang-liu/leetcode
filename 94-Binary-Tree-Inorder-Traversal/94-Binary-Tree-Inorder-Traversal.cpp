// Author:JiaQiang Liu
// Date:2018/4/29

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> res;
		if (root == NULL)
			return res;
		stack<TreeNode*> s;
		while (true) {
			while (root) {
				s.push(root);
				root = root->left;
			}
			if (s.empty())
				break;
			TreeNode* temp = s.top();
			s.pop();
			res.push_back(temp->val);

			root = temp->right;
		}
	}
};

int main()
{
    return 0;
}

