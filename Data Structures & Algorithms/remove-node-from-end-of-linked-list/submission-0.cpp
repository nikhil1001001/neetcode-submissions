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
        ListNode* temp = head;

        int cnt1 = 0;
        while(temp){
            temp = temp->next;
            cnt1++;
        }
        int cnt2 = cnt1 - n + 1;
        int cnt3 = 1;
        ListNode dummy(0, head);
        ListNode* curr = &dummy;
        while(curr){
            if(cnt3 == cnt2){
                curr->next = curr->next->next;
            }
            curr= curr->next;
            cnt3++;
        }
        return dummy.next;

    }
};
