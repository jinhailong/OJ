/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *l3 = new ListNode(0);
        ListNode *ret = l3;
        int sign = 0;
        while (l1 != NULL || l2 != NULL || sign)
        {
            int sum = (l1 == NULL ? 0 : l1->val) + (l2 == NULL ? 0 : l2->val) + sign;
            sign = sum / 10;
            int l3Value = sum % 10;
            ListNode *tmp = new ListNode(l3Value);
            l3->next = tmp;
            l3 = l3->next;
            l1 = l1 == NULL ? l1 : l1->next;
            l2 = l2 == NULL ? l2 : l2->next;
        }
        return ret->next;
    }
};