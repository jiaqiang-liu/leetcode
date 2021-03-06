// Author:JiaQiang Liu
// Date:2018/4/29

#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
	vector<TreeNode*> generateTrees(int n) {
		vector<TreeNode*> res;
		if (n == 0)
			return res;
		res = helper(1, n);
		return res;

	}

	vector<TreeNode*> helper(int lo, int hi) {
		vector<TreeNode*> v;
		if (lo > hi || lo <= 0 || hi <= 0) {
			v.push_back(NULL);
			return v;
		}

		if (lo == hi) {
			TreeNode *n = new TreeNode(lo);
			v.push_back(n);
			return v;
		}

		for (int i = lo; i <= hi; i++) {
			vector<TreeNode*> left = helper(lo, i - 1);
			vector<TreeNode*> right = helper(i + 1, hi);
			for (int l = 0; l < left.size(); l++) {
				for (int r = 0; r < right.size(); r++) {
					TreeNode* root = new TreeNode(i);
					root->left = left[l];
					root->right = right[r];
					v.push_back(root);
				}
			}
		}
		return v;

	}
};

int main()
{
    return 0;
}

