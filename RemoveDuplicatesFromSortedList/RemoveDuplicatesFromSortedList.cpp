/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    if (head == NULL)
      return NULL;
    ListNode *preNode = head->next;
    ListNode *folNode = head;
    
    while (preNode != NULL) {
      while (preNode != NULL && preNode->val == folNode->val) {
	ListNode *tmp = preNode;
	preNode = preNode->next;
	delete tmp;
      }
      folNode->next = preNode;
      folNode = preNode;
      if (preNode != NULL)
	preNode = preNode->next;
    }
    return head;
  }
};
