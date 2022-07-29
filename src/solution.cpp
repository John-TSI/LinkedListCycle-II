#include"../inc/solution.hpp"

// solution implements Floyd's cycle finding algorithm:
// https://en.wikipedia.org/wiki/Cycle_detection#Floyd's_tortoise_and_hare

ListNode* Solution::detectCycle(ListNode* head)
{
    if(!head || !head->next){ return nullptr; }  // handle empty list / single node without cycle cases
    ListNode* fast{head}, * slow{head};

    do{fast = fast->next->next; slow = slow->next; }  // fast pointer traverses the list at twice the speed of slow
    while(fast && fast != slow);  // pointers coincide at some node within the cycle
    // at this stage: steps required to return to node at start of cycle from current node = steps required to reach start of cycle from head
    while(head != slow){ head = head->next; slow = slow->next; }  // slow traverse until head and slow coincide, guaranteed to be start of cycle
    return head;
}