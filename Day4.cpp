#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2, -5, 3, -7, -8, 6, -9, 3, 5, 1};
    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < 0 && arr[j - 1] > 0)
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    for(int k=0; k<arr.size(); k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}
