struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}                  // default constructor
    ListNode(int x) : val(x), next(nullptr) {}             // value only
    ListNode(int x, ListNode *next) : val(x), next(next) {} // value + pointer
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;               
        ListNode* tail = &dummy;      
        
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;   
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        //attach the remaining
        tail->next = (list1 ? list1 : list2);

        return dummy.next;            // merged list head
    }
};