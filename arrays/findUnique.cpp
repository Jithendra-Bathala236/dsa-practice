#include <iostream>
using namespace std;

// input: [2, 4, 7, 2, 7]
// output: 4
// bascially it gives the unique element (non repeating element) from the given array
// Time Complexity: O(n)
// Space Complexity: O(1)

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

    int arr[5] = {2, 4, 7, 2, 7};

    cout << findUnique(arr, 5);

    return 0;
}
