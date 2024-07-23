class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        // Di chuyển con trỏ fast đi trước n bước
        for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }

        // Nếu fast là null, điều này có nghĩa cần xóa nút đầu tiên
        if (!fast) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Di chuyển cả hai con trỏ fast và slow đến khi fast đến cuối danh sách
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }

        // Xóa nút thứ n từ cuối danh sách
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        delete nodeToDelete;

        return head;
    }
};

