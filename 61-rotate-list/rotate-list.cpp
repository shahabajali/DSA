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
     int sizes(ListNode* head){
        int size = 0;
        ListNode* tem =  head;
        while(tem !=nullptr){
            tem =  tem->next;
            size++;
        }
        return size;

     }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head ==nullptr || head->next == nullptr){
            return head;
        }
        int size = sizes(head);

        k = k % size;
        if(k == 0){
            return head;
        }

          ListNode* tail = head;
          while(tail->next !=nullptr){
             tail = tail->next;
          }
          tail->next = head;    // make circulor

          //  new tail 

         ListNode* newTail =  head;
         for( int i =1;i<size-k;i++){
            newTail =  newTail->next;
         }

        ListNode* newHead  =  newTail->next;
        newTail->next = nullptr;
          

          return newHead; 
    }
   

};