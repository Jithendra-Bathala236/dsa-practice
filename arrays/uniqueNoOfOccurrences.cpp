#include <iostream>
using namespace std;

int uniqueOccurrences(int *arr, int size)
{
    int tracker[] = {};
    sort(arr[0], arr[size - 1]);
    cout << arr[0] << " " << arr[size - 1];
}

int main()
{
    int arr[5] = {4, 2, 5, 1, 2};
    uniqueOccurrences(arr, 5);
    return 0;
}