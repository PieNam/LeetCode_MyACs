//
//  main.cpp
//  887ProjectionAreaOf3DShapes
//
//  Created by 许滨楠 on 2018/8/9.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int projectionArea(vector<vector<int>>& grid) {
    int res = 0;
    for (int i = 0; i != grid.size(); ++i) {
        int maxJ = 0;
        for (int j = 0; j != grid[i].size(); ++j) {
            if (grid[i][j]) ++res;
            if (grid[i][j] > maxJ) maxJ = grid[i][j];
            if (!i){
                int maxJI = 0;
                for (int ji = 0; ji < grid.size(); ++ji) {
                    if (grid[ji][j] > maxJI) maxJI = grid[ji][j];
                }
                res += maxJI;
            }
        }
        res += maxJ;
    }
    return res;
}

int main(){
    vector<vector<int>> test[5] = {
        {{2}}, {{1,2},{3,4}}, {{1,0},{0,2}},
        {{1,1,1},{1,0,1},{1,1,1,}}, {{2,2,2},{2,1,2},{2,2,2}}
    };
    for (int i = 0; i < 5; ++i) {
        cout << projectionArea(test[i]) << endl;
    }
    return 0;
}
