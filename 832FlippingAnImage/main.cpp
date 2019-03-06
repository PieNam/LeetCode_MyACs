//
//  main.cpp
//  832FlippingAnImage
//
//  Created by 许滨楠 on 2018/8/1.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    vector<vector<int>> res;
    vector<vector<int>>::iterator i;
    for (i = A.begin(); i != A.end(); i++) {
        vector<int> t;
        vector<int>::iterator ii;
        for (ii = i->end() - 1; ii != i->begin() - 1; ii--) {
            if (*ii == 1) t.push_back(0);
            else t.push_back(1);
        }
        res.push_back(t);
    }
    return res;
}

int main() {
    vector<vector<int>> a = {{1,0,0},{1,0,1},{0,0,0}};
    vector<vector<int>> b = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
    vector<vector<int>> ar = flipAndInvertImage(a);
    vector<vector<int>> br = flipAndInvertImage(b);
    vector<vector<int>>::iterator i;
    vector<int>::iterator ii;
    for (i = ar.begin(); i != ar.end(); i++) {
        for (ii = (*i).begin(); ii != (*i).end(); ii++) {
            cout << *ii << " ";
        }
        cout << endl;
    }
    for (i = br.begin(); i != br.end(); i++) {
        for (ii = i->begin(); ii != i->end(); ii++) {
            cout << *ii << " ";
        }
        cout << endl;
    }
    return 0;
}
