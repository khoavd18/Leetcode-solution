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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int n = 1;
        ListNode* tail = head;

        while(tail->next!=NULL){
            n++;
            tail = tail->next;
        }
        ListNode* newList = head;

        for(int i=1;i<n-k%n;i++){
            newList = newList->next;
        }
        tail->next = head;
        head = newList->next;
        newList->next = NULL;
        return head;
    }
};
