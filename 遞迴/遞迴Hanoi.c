#include <stdio.h>
void Hanoi(int n, char from, char mid, char to) //參考劉逸筆記
{
	if(n == 1)
	{
		printf("從%d到%d\n", from, to);
		return;
	}
	else
	{
		Hanoi(n-1, from, to, mid); //(1)將 2 個較小的盤子從 A 移到 B， C 作為mid
		printf("從%d到%d\n", from, to); //(2)印出移動最大的盤子從 A 移動到 C 的步驟
		Hanoi(n-1, mid, from, to); //(3)將之前移到 B 的 2 個盤子從 B 移動到 C
	}
} 

int main()
{
    int n = 3;
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}
//只有在最大的盤子移動到目標柱的時候，
//我們需要將這個移動步驟印出來，
//以確保我們觀察到整個河內塔問題的遞迴解決過程
 