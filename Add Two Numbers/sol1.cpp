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
 struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}                  // default constructor
    ListNode(int x) : val(x), next(nullptr) {}             // value only
    ListNode(int x, ListNode *next) : val(x), next(next) {} // value + pointer
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(); 
        ListNode* current = dummy;       
        
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            int sum = x + y + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10); 
            current = current->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return dummy->next; 
    }
};