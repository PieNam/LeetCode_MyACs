//
//  main.cpp
//  349IntersectionOfTwoArrays
//
//  Created by 许滨楠 on 2018/9/15.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> s(nums1.begin(), nums1.end());
    vector<int> res;
    for (auto i = nums2.begin(); i != nums2.end(); ++i) {
        if (s.erase(*i)) res.push_back(*i);
    }
    return res;
}

int main(int argc, const char * argv[]) {
    vector<int> test1 = {1,2,2,1}, test2 = {2,2}, test3 = {4,9,5}, test4 = {9,4,9,8,4};
    vector<int> res1 = intersection(test1, test2), res2 = intersection(test3, test4);
    for (auto i = res1.begin(); i != res1.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    for (auto i = res2.begin(); i != res2.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
