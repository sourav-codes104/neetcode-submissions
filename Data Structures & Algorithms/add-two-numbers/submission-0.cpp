/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry != 0){

            int digit1 = l1 == nullptr ? 0 : l1->val;
            int digit2 = l2 == nullptr ? 0 : l2->val;

            int sum = digit1+digit2+carry;

            carry = sum/10;

            curr->next = new ListNode(sum%10);
            curr = curr->next;

            l1 = l1!=nullptr ? l1->next : nullptr;
            l2 = l2!=nullptr ? l2->next : nullptr;
        }
        return dummyHead->next;
    }
};
