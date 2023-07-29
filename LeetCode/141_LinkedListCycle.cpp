class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s = head;
        int flag = 0;

        while (s != NULL) {
            if (s->next == NULL) {
                return false;
            }
            if (flag == 1 && s->next == head) {
                return true;
            }
            flag = 1;
            s = s->next;
        }
        return false;
    }
};
