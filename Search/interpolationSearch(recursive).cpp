#include <iostream>
#include <algorithm>

using namespace std;

int InterPolationSearch(int F[], int key, int l, int u) {
    if (l <= u) {
        //int i = ((key - F[l]) / (F[u] - F[l])) * (u - l); 筆記
		int i = ((key - F[l]) * (u - l)) / (F[u] - F[l]); //chatgpt認為此法好，較可避免小數被截斷
        if (F[l + i] == key)
            return l + i;
        else if (F[l + i] > key)
            return InterPolationSearch(F, key, l, l + i - 1);
        else
            return InterPolationSearch(F, key, l + i + 1, u);
    }
    return -1; // Not found
}

int main() {
    int array1[5] = {40, 10, 100, 30, 80};
    int size = sizeof(array1) / sizeof(array1[0]);
    sort(array1, array1 + size);
    int key = 30;
    int result = InterPolationSearch(array1, key, 0, size - 1);
    if (result != -1)
        cout << "Element " << key << " found" << endl;
    else
        cout << "Element " << key << " not found" << endl;
    return 0;
}
