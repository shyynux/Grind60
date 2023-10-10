/* Problem link - https://leetcode.com/problems/merge-two-sorted-lists/ */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode(0);
        ListNode *ptr1, *ptr2, *ptr3;

        ptr1 = list1;
        ptr2 = list2;
        ptr3 = list3;

        while (ptr1 != nullptr && ptr2 != nullptr) {
            if (ptr1->val == ptr2->val) {
                ListNode* newNode1 = new ListNode(ptr1->val);
                ptr3->next = newNode1;
                ptr3 = ptr3->next;
                ListNode* newNode2 = new ListNode(ptr2->val);
                ptr3->next = newNode2;
                ptr3 = ptr3->next;
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            } else if (ptr1->val < ptr2->val) {
                ListNode* newNode = new ListNode(ptr1->val);
                ptr3->next = newNode;
                ptr3 = ptr3->next;
                ptr1 = ptr1->next;
            } else {
                ListNode* newNode = new ListNode(ptr2->val);
                ptr3->next = newNode;
                ptr3 = ptr3->next;
                ptr2 = ptr2->next;
            }
        }

        /* adding remaining elements */
        while (ptr1 != nullptr) {
            ListNode* newNode = new ListNode(ptr1->val);
            ptr3->next = newNode;
            ptr3 = ptr3->next;
            ptr1 = ptr1->next;
        }
        
        while (ptr2 != nullptr) {
            ListNode* newNode = new ListNode(ptr2->val);
            ptr3->next = newNode;
            ptr3 = ptr3->next;
            ptr2 = ptr2->next;
        }

        return list3->next;
    }
};
