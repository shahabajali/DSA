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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

       ListNode* l3 =  new ListNode(0);
        ListNode* head =  l3;
        int curry = 0;
        while( l1!= nullptr && l2 != nullptr){
            int sum  =l1->val +l2->val+ curry;
            curry =  sum/10;
            l3->next  = new ListNode(sum%10);
            l3 =  l3->next;
            l1 =  l1->next;
            l2= l2->next;
        }
        while( l1 != nullptr){
            int sum =  l1->val + curry;
             curry =  sum/10;
               l3->next  = new ListNode(sum%10);
                  l3 =  l3->next;
            l1 =  l1->next;
        }
         while( l2 != nullptr){
            int sum =  l2->val + curry;
             curry =  sum/10;
               l3->next  = new ListNode(sum%10);
                  l3 =  l3->next;
            l2 =  l2->next;
        }
        if( curry != 0){
             l3->next  = new ListNode(curry);
        }
        return head->next;
    }
};