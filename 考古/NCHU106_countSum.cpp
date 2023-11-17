#include <iostream>
using namespace std;

//NCHU106
//Use list to calculate the sum of the chart:
//            Mon Tue Wed Thu 
//beef        13   9   7  15
//chicken     8    7   4  6
//vegetable   6    4   0  3
//price(beef:3, chicken 4, vegetable:2)

int count(int table [3][4], int price[3])
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum = sum + table[i][j] * price[i];
		}
	}
	cout << sum << endl;
	return 0;
}
int main(void) {
	int table[3][4] = {{13, 9, 7, 15}, { 8, 7, 4, 6}, {6, 4, 0, 3}};
	int price[3] = {3, 4, 2};
	count(table, price);
}
