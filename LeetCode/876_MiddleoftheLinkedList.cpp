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
    ListNode* middleNode(ListNode* head) {
        ListNode *s = head;
        ListNode *s1 = head;
        while (s1 != NULL && s1->next != NULL) {
            s1 = s1->next->next;
            s = s->next;
        }
        return s;
    }
};
