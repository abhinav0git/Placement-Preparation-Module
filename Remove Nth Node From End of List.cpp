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

 //SIMPLE METHOD

//  class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int length = 0;
//         ListNode* ptr = head;   //ptr now have the address of head;

//         while(ptr!=0)
//         {
//             length++;
//             ptr = ptr->next;
//         }

//         if(n == length)
//         return head->next;

//         length = length - n;
//         length--;           //agar y enahi karenge to delete karne wale node pe ptr aajayega jabki hame ptr delete karne wale node ke peeche chahiye tha;

//         ptr = head;
//         while(length--)
//         {
//             ptr = ptr -> next;
//         }
//         ptr -> next = ptr -> next -> next;

//         return head;
//     }
// };

// via fast and slow pointer
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=0; i<n; i++)
        {
            fast = fast -> next;
        }

        if(!fast)
        return head->next;      //edge case where nth node is the very first node

        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;
        return head;
    }
};
