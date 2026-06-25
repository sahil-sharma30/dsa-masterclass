#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    int p1 = m - 1;
    int p2 = n - 1;
    int index = m + n - 1;

    while (p1 >= 0 && p2 >= 0)
    {
        if (arr1[p1] >= arr2[p2])
        {
            arr1[index] = arr1[p1];
            index--;
            p1--;
        }
        else
        {
            arr1[index] = arr2[p2];
            index--;
            p2--;
        }
    }

    while (p2 >= 0)
    {
        arr1[index] = arr2[p2];
        index--;
        p2--;
    }
}

void printArray(vector<int> &arr1)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    mergeArrays(arr1, arr2, m, n);
    printArray(arr1);

    return 0;
}
