#include <iostream>
using namespace std;

// NCHU107
// 單一迴圈計算5*5矩陣對角線的元素之和
// 中間多加一次

// [0][0], [1][1], [2][2], [3][3], [4][4]
// [4][0], [3][1], [2][2], [1][3], [0][4]

int main()
{
    int sum = 0;
    int table[5][5] = { 1, 2, 3, 4, 5, 
                        6, 7, 8, 9, 10, 
                        11, 12, 13, 14, 15, 
                        16, 17, 18, 19, 20, 
                        21, 22, 23, 24, 25};
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (i == j)
                sum += table[i][j] + table[4-j][i];
    sum -= table[2][2];
    cout << sum << endl;
}