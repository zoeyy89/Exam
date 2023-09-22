#include <iostream>
using namespace std;

void merge(int data[], int l, int mid, int r) 
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int L[n1], R[n2]; // 創建臨時陣列來保存兩個子陣列的數據

    for (int i = 0; i < n1; i++) 
        L[i] = data[l + i];
	
    for (int i = 0; i < n2; i++) 
        R[i] = data[mid + 1 + i];

    int i = 0, j = 0, k = l; // 初始化兩個子陣列的指針

    // 合併兩個子陣列為一個已排序的陣列
    while (i < n1 && j < n2)
	{
        if (L[i] <= R[j])
            data[k++] = L[i++];
        else 
            data[k++] = R[j++];
    }

    // 將任何剩餘的元素複製回原始陣列 why? 因為有一方排完的話，另一方的剩下放進list
    while (i < n1) 
        data[k++] = L[i++];
    while (j < n2) 
        data[k++] = R[j++];
}

void mergeSort(int data[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeSort(data, l, mid); // 遞迴排序左半和右半
        mergeSort(data, mid + 1, r);       
        merge(data, l, mid, r);// 合併兩個已排序的list
    }
}

int main() {
    int data[] = {26, 5, 37, 1, 61, 11, 59, 15, 48, 19};
    int n = sizeof(data) / sizeof(data[0]);
    mergeSort(data, 0, n - 1);
        cout << "排序結果: ";
    for (int i = 0; i < n; i++) 
        cout << data[i] << " ";
    return 0;
}