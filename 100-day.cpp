class Solution {
public:
    Node* reverse(Node* head) {
        Node* left = head;
        Node* right = head;
        int length = 1;
        while (right->next) {
            right = right->next;
            length++;
        }
        int l = 1, r = length;
        while (l < r) {
            int temp = left->data;
            left->data = right->data;
            right->data = temp;
            left = left->next;
            right = right->prev;

            l++;
            r--;
        }
        return head;
    }
};
