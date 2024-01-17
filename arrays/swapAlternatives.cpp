#include <iostream>
using namespace std;

// input: [1,2,3,4,5]
// output: [2,1,4,3,5]
// bascially it swaps the alternate values in a given array

void swapAlternatives(int *arr, int size)
{
    int temp = 0;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    swapAlternatives(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
