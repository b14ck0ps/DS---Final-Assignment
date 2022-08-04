#include <iostream>
using namespace std;
// binary search
int binary_search(int a[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 10;
    int index = binary_search(a, n, key);
    if (index == -1)
        cout << "key not found" << endl;
    else
        cout << "key found at index " << index << endl;
    return 0;
}