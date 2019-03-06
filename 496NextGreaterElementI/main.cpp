//
//  main.cpp
//  496NextGreaterElementI
//
//  Created by 许滨楠 on 2018/9/5.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
    vector<int> res;
    for (auto i = findNums.begin(); i != findNums.end(); ++i) {
        auto index = find(nums.begin(), nums.end(), *i);
        if (index == nums.end() - 1) {
            res.push_back(-1);
        }
        else {
            bool flag = false;
            while (index != nums.end() - 1) {
                ++index;
                if (*index > *i) {
                    flag = true;
                    break;
                }
            }
            if (flag) res.push_back(*index);
            else res.push_back(-1);
        }
    }
    return res;
}

int main(int argc, const char * argv[]) {
    vector<int> anum1 = {4,1,2};
    vector<int> anum2 = {1,3,4,2};
    vector<int> bnum1 = {2,4};
    vector<int> bnum2 = {1,2,3,4};
    vector<int> atest = nextGreaterElement(anum1, anum2);
    vector<int> btest = nextGreaterElement(bnum1, bnum2);
    for (auto i = atest.begin(); i != atest.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    for (auto i = btest.begin(); i != btest.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    vector<int> cnum1 = {2,1,3};
    vector<int> cnum2 = {2,3,1};
    vector<int> ctest = nextGreaterElement(cnum1, cnum2);
    for (auto i = ctest.begin(); i != ctest.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
