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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp =head;
        vector <int> arr;
        int count=0;
        while(temp){
            arr.emplace_back(temp->val);
            count++;
            temp=temp->next;
        }
        temp=head;
        while(temp){
            temp->val=arr[count-1];
            count--;
            temp=temp->next;
        }
        return head;
    }
};