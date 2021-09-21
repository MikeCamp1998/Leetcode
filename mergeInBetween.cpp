//
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* aNode;
        ListNode* bNode;
        ListNode* curr = list1;
        int count = 1;
        
        while (curr != NULL) {
            if (count == a) {
                aNode = curr;
            } else if (count == b + 1) {
                bNode = curr -> next;    
            }
            count++;
            curr = curr -> next;
        }
        
        aNode -> next = list2;
        curr = list2;
        
        while (curr -> next != NULL) {
            curr = curr -> next;
        }
        
        curr -> next = bNode;
        
        return list1;
    }
};