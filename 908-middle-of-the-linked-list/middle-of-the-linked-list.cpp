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
        ListNode * temp=head;
        int count=1;
        while(temp->next){
            count++;
            temp=temp->next;
        }
        int till =count/2;
        cout<<count<<"  "<<till;
        count=1;
        temp=head;
        while(temp){
            if(count==till){
                head=temp->next;
                break;
            }
            count++;
            temp=temp->next;
        }
        return head;


        
    }
};