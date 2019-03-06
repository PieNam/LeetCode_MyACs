//
//  main.cpp
//  872Leaf-SimiliarTrees
//
//  Created by 许滨楠 on 2018/8/14.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void getLeafValueSequence(TreeNode* root, vector<int> &s) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) {
        s.push_back(root->val);
        return;
    }
    getLeafValueSequence(root->left, s);
    getLeafValueSequence(root->right, s);
    return;
}

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> a,b;
    getLeafValueSequence(root1, a);
    getLeafValueSequence(root2, b);
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    TreeNode r1(3), a1(5), b1(1), c1(6), d1(2), e1(9), f1(8), g1(7), h1(4);
    TreeNode r2(5), a2(1), b2(3), c2(6), d2(4), e2(9), f2(8), g2(6), h2(7);
    r1.left = &a1;
    r1.right = &b1;
    a1.left = &c1;
    a1.right = &d1;
    b1.left = &e1;
    b1.right = &f1;
    d1.left = &g1;
    d1.right = &h1;
    r2.left = &a2;
    r2.right = &b2;
    a2.left = &c2;
    a2.right = &d2;
    b2.left = &e2;
    b2.right = &f2;
    c2.left = &g2;
    c2.right = &h2;
    cout << leafSimilar(&r1, &r2) << endl;
    return 0;
}
