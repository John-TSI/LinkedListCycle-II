// https://leetcode.com/problems/linked-list-cycle-ii/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	ListNode n2(2);
	ListNode n4(-4, &n2);
	ListNode n3(0, &n4);
	n2.next = &n3;
	ListNode n1(3, &n2);  // head node of linked list with cycle

	ListNode m2(2);
	ListNode m1(1,&m2);
	m2.next = &m1;

	ListNode p6(6);
	ListNode p5(5,&p6);
	ListNode p4(4,&p5);
	ListNode p3(3,&p4);
	ListNode p2(2,&p3);
	ListNode p1(1,&p2);
	p6.next = &p3;

	Solution sol{};
	std::cout << sol.detectCycle(&n1)->val << '\n';  // 2
	std::cout << sol.detectCycle(&m1)->val << '\n';  // 1
	std::cout << sol.detectCycle(&p1)->val << '\n';  // 3

	return 0;
}

