//insertion sort
//將第i筆記錄插入到前面(i-1)筆已排序好的紀錄中， 使成為i筆已排好序的串列
// data = 26, 5, 33, 17, 2

#include <iostream>
using namespace std;

void insert(int key, int list[], int i) //key:本次插入值 list:datalist i:已排好序的list[0] to list[i]
{
	while (i >= 0 && key < list[i]) //當key < 排好陣列的最大那位，那我須再往左尋找
    {
        list[i + 1] = list[i];//目前第i個要往右移(因為大於key)
        i = i - 1; //繼續往左比較
    }
	list[i + 1] = key;//key插入最適合的位置(不論key本身不動，或者從while出來插在排好序的隊伍裡)
}
void insertionSort(int data[], int size)
{
    for(int j = 1; j < size; j++)// 索引範圍是從0到size-1
	{
        insert(data[j], data, j - 1); //j-1是因為j=1, j-1=0, 0筆排好
	}
}
int main()
{
	int data[5] = {26, 5, 33, 17, 2};
	int size = sizeof(data)/sizeof(data[0]);
	insertionSort(data, size);
	cout << "排序後的陣列：";
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;	
}