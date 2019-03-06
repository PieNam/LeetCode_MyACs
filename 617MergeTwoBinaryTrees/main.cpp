//
//  main.cpp
//  617MergeTwoBinaryTrees
//
//  Created by 许滨楠 on 2018/8/2.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/*TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    if (!t1 && !t2) return nullptr;
    else if (!t1) return t2;
    else if (!t2) return t1;
    else {
        TreeNode* c = new TreeNode(t1->val + t2->val);
        c->left = mergeTrees(t1->left, t2->left);
        c->right = mergeTrees(t1->right, t2->right);
        return c;
    }
}*/

TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    if (!t1) return t2;
    if (!t2) return t1;
    t1->val += t2->val;
    t1->left = mergeTrees(t1->left, t2->left);
    t1->right = mergeTrees(t1->right, t2->right);
    return t1;
}

int main(){
    TreeNode r1(1), a(3), b(2), c(5), r2(2), d(1), e(3), f(4), g(7);
    r1.left = &a;
    r1.right = &b;
    a.left = &c;
    r2.left = &d;
    r2.right = &e;
    d.right = &f;
    e.right = &g;
    TreeNode* res = mergeTrees(&r1, &r2);
    cout << res->val << endl;
    return 0;
}
