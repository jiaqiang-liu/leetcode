// Author:JiaQiang Liu
// Date: 2018/5/2

#include<iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode * deleteDuplicates(ListNode* head) {
		if (head == NULL || head->next == NULL)
			return head;

		ListNode* ret = head;
		ListNode* pre = head;
		head = head->next;
		while (head) {
			if (head->val == pre->val) {
				pre->next = head->next;
			}
			else {
				pre = head;
			}
			head = head->next;
		}
		return ret;
	}
};

int main()
{
    return 0;
}

