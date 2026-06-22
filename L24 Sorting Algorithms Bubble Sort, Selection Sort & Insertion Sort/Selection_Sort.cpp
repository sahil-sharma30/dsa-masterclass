#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n-1; i++)
    {
        int minIndex =i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(vector<int> &arr){
    int n= arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {7, 2, 9, 1, 5};

    selectionSort(arr);
    printArray(arr);

    return 0;
}
