#include"../inc/solution.hpp"


ListNode* Solution::detectCycle(ListNode* head)
{
    if(!head || !head->next){ return nullptr; }
    ListNode* leader{head->next}, * follower{head};
    while(follower == leader-1)
    {
        leader = leader->next;
        if(!leader){ return nullptr; }
        follower = follower->next;
    }
    return leader;
}