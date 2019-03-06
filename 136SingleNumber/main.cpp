//
//  main.cpp
//  136SingleNumber
//
//  Created by 许滨楠 on 2018/9/6.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    for (int i = 1; i < nums.size(); ++i)
        nums[0] ^= nums[i];
    return nums[0];
}

int main(int argc, const char * argv[]) {
    vector<int> test1 = {2,2,1};
    vector<int> test2 = {4,1,2,1,2};
    cout << singleNumber(test1) << " " << singleNumber(test2) << " " << endl;
    return 0;
}
