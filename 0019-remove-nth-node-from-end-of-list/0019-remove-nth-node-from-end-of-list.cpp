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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // creating the dummy variable for easy deletion of the haed.
        ListNode* dummy =  new ListNode(0);
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        // this loop creates the gap of n;
        for(int i =0;i<n;i++){
            fast = fast->next;
        
        }
        // this loop till the end of the linked list.
        while(fast->next != nullptr){
            slow= slow->next;
            fast = fast->next;

        }
        // deletion happening here
        slow->next = slow->next->next;
        return dummy->next;

        
    }
};