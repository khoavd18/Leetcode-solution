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
 ListNode* makenode(int data){
    ListNode* tmp = new ListNode();
    tmp->val = data;
    tmp->next = nullptr;
    return tmp;
}
 void addend(ListNode* &a,int data){
    ListNode* tmp = makenode(data);
    if(a==nullptr) a = tmp;
    else {
        ListNode* p = a;
        while(p->next!=nullptr){
            p = p->next;
        }
        p->next = tmp;
    }
}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = nullptr;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            addend(l3, sum % 10);
        }
        return l3;
    }
};
