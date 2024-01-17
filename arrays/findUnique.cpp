#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int uniqueElement = 0;
    for (int i = 0; i < size; i++)
    {
        uniqueElement ^= arr[i];
    }

    return uniqueElement;
}

int main()
{

    int arr[7] = {2, 3, 1, 6, 3, 6, 2};

    cout << findUnique(arr, 7);

    return 0;
}
