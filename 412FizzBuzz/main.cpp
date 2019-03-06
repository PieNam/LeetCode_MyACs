//
//  main.cpp
//  412FizzBuzz
//
//  Created by 许滨楠 on 2018/9/4.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> res;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0)
            res.push_back("FizzBuzz");
        else if (i % 3 == 0)
            res.push_back("Fizz");
        else if (i % 5 == 0)
            res.push_back("Buzz");
        else
            res.push_back(to_string(i));
    }
    return res;
}

int main(int argc, const char * argv[]) {
    vector<string> test = fizzBuzz(30);
    for (auto i = test.begin(); i != test.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
