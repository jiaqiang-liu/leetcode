// Author:JiaQiang Liu
// Date: 2018/4/29

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	bool isValidBST(TreeNode* root) {
		if (root == NULL)
			return true;
		vector<int> v;
		bool flag = true;
		check(root, v, flag);
		return flag;
	}

	void check(TreeNode* root, vector<int> &v, bool &flag) {
		if (root == NULL)
			return;

		check(root->left, v, flag);
		if (v.size() > 0 && v.back() >= root->val) {
			flag = false;
			return;
		}
		else {
			v.push_back(root->val);
		}

		check(root->right, v, flag);
	}

};

int main()
{
    return 0;
}

