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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if( head == nullptr||head->next== nullptr ){
            return head;
        }
        ListNode* dumy =  new ListNode(0);
        dumy->next =  head;
        ListNode* prev =  dumy;
        for( int i =1;i<left;i++){
            prev =  prev->next;
        }
        // curret
        ListNode* current = prev->next;

        for(int i =1;i<=right-left;i++){   //  r-l time reverse node
             ListNode* tem =  prev->next;
             prev->next =  current->next;
             current->next =current->next->next;
             prev->next->next = tem;
        }
        return dumy->next;
    }
};