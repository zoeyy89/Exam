//Heap必是complete BT，是priority queue的資結
//有兩種方式建構: top down & bottom up
//time complexity:
//top down  :O(nlogn) 加一個馬上調整
//bottom up :O(n) 先建立，暫時不調整(常用在Heap sort)效率好過top down
//此為bottom up
//step1.以complete BT呈現 
//step2.從最後一個父點，往回推到root，一一調整子樹(父親結束換上一層，由下往上調整)

//Max Heap bottom up
#include <iostream>
using namespace std;

#define MAX 1000 //定義heap最大

//對heap中第 i 個節點進行heap法(bottom up)
void heapify(int arr[], int n, int i)
{
    int parent = (i - 1) / 2; //找父點

    if (arr[parent] > 0) 
    {
        if (arr[i] > arr[parent]) 
        { 
            swap(arr[i], arr[parent]); //如果目前節點>他的父節點，swap
            heapify(arr, n, parent); //recursive heapify
        }
    }
}

void insertNode(int arr[], int& n, int Key)
{
    n = n + 1; // 堆積的大小增加1
    arr[n - 1] = Key; // 插入heap尾端
    heapify(arr, n, n - 1); //n-1為最後一個node
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    // 10
    // / \
    // 5 3
    // / \
    // 2 4
    int arr[MAX] = {10, 5, 3, 2, 4 };
    int n = 5; //n:array大小
    int key = 15; //key:要插入的新值

    insertNode(arr, n, key);
    printArray(arr, n);
    // 最終：
    //    15
    //  /    \
    //  5	 10
    // / \  /
    // 2 4 3
    return 0;
}
