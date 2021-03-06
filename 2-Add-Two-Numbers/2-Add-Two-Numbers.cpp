// Author: JiaQiang-Liu
// Date: 2018/4/23

#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *res = NULL;
		ListNode *temp=NULL;
		ListNode *next = NULL;
		int pa1, pa2, sum,carry=0;
		while (true) {
			if (l1 == NULL && l2 == NULL)
				break;
			pa1 = l1 == NULL ? 0 : l1->val;
			pa2 = l2 == NULL ? 0 : l2->val;
			sum = (pa1 + pa2+carry) % 10;
			carry = (pa1 + pa2 + carry) / 10;
			if (res == NULL) {
				res = new ListNode(sum);
				next = res;
			}
			else {
				temp = new ListNode(sum);
				next->next = temp;
				next = temp;
			}
			l1 = l1!=NULL?l1->next:NULL;
			l2 = l2!=NULL?l2->next:NULL;
		}
		if (carry != 0) {
			temp = new ListNode(carry);
			next->next = temp;
			next = temp;
			next->next = NULL;
		}
		else {
			next->next = NULL;
		}
		return res;
	}
};

int main()
{
    return 0;
}

