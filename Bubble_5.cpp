#include <iostream>
using namespace std;
// bubble sort
void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    print_array(a, n);
    bubble_sort(a, n);
    print_array(a, n);
    return 0;
}