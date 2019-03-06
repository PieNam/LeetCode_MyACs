//
//  main.cpp
//  MiddleOfTheLinkedList
//
//  Created by 许滨楠 on 2018/7/31.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* middleNode(ListNode* head) {
    int count = 1;
    ListNode* res = head;
    ListNode* c = head;
    while (c->next) {
        count++;
        c = c->next;
    }
    for (int i = 1; i < (count / 2 + 1); i++)
        res = res->next;
    return res;
}

int main() {
    ListNode x(1), a(2), b(3), c(4), d(5);
    ListNode e(6);
    x.next = &a;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    cout << middleNode(&x)->val << endl;
    return 0;
}
