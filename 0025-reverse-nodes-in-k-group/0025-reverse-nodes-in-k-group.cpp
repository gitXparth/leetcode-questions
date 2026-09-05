class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        // Check whether k nodes are available
        ListNode* temp = head;

        for (int i = 0; i < k; i++) {
            if (temp == nullptr)
                return head;

            temp = temp->next;
        }

        // Reverse first k nodes
        ListNode* prev = nullptr;
        ListNode* curr = head;

        for (int i = 0; i < k; i++) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // head is now the last node of reversed group
        head->next = reverseKGroup(curr, k);

        // prev is the new head
        return prev;
    }
};