//
//  main.cpp
//  561ArrayPartitionI
//
//  Created by 许滨楠 on 2018/8/7.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//time limitted
/*int arrayPairSum(vector<int>& nums) {
    int res = 0;
    int size = (int) nums.size();
    int* a = new int[size];
    for (auto i = nums.begin(); i != nums.end(); ++i) {
        for (auto j = i + 1; j != nums.end(); ++j) {
            if (*i > *j) {
                int t = *i;
                *i = *j;
                *j = t;
            }
        }
    }
    for (int i = 0; i < size; ++i) {
        a[i] = nums[i];
    }
    for (int i = 0; i < size / 2; ++i) {
        res += a[2 * i];
    }
    delete[] a;
    return res;
}*/

int arrayPairSum(vector<int>& nums) {
    int res = 0;
    int size = (int) nums.size();
    sort(nums.begin(), nums.end());
    for (auto i = 0; i < size / 2; ++i) {
        res += nums[2*i];
    }
    return res;
}

int main(){
    vector<int> test = { 1,4,3,2 };
    cout << arrayPairSum(test) << endl;
    return 0;
}
