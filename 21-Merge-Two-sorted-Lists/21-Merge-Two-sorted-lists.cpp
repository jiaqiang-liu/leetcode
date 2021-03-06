// Author:Jiaqiang Liu
// Date: 2018/4/24

#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x): val(x),next(NULL){}
};

class Solution {
public:
	ListNode * mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* ret = new ListNode(0);
		ListNode* index = ret;
		while (l1 != NULL || l2 != NULL) {
			if (l1 != NULL && l2 != NULL) {
				if (l1->val < l2->val) {
					index->next = l1;
					index = l1;
					l1 = l1->next;
				}
				else {
					index->next = l2;
					index = l2;
					l2 = l2->next;
				}
			}
			else if (l1 == NULL && l2 != NULL) {
				index->next = l2;
				index = l2;
				l2 = l2->next;
			}
			else {
				index->next = l1;
				index = l1;
				l1 = l1->next;
			}
		}
		index->next = NULL;
		return ret->next;
	}
};


int main()
{
    return 0;
}

