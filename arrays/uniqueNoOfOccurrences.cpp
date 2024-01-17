#include <iostream>
#include <vector>

using namespace std;

// input:
// 6
// 1 2 2 1 1 3
// output: true
// the value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Time Complexity: O(n)
// Space Complexity: O(n)

bool uniqueOccurrences(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int size = arr.size();
    vector<int> counts;
    int counter = 1;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            counter++;
        }
        else
        {
            counts.push_back(counter);
            counter = 1;
        }

        if (i + 1 == size - 1)
        {
            counts.push_back(counter);
        }
    }

    sort(counts.begin(), counts.end());
    for (int i = 0; i < counts.size() - 1; i++)
    {
        if (counts[i] == counts[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }

    cout << uniqueOccurrences(arr);
    return 0;
}