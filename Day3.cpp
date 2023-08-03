#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 7, 3, 9, 2, 4, 6, 8, 12, 4, 7, 0, 4, 2, 1, 4, 7, 9};
    int target = 6;
    bool found = false;

    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            if (sum > target)
            {
                break;
            }
            else
            {
                sum = sum + arr[j];
                if (sum == target)
                {
                    for (int k = i; k <= j; k++)
                    {
                        cout << arr[k] << " ";
                    }
                    found = true;
                    break;
                }
            }
        }
        if (found)
        {
            break;
        }
    }

    return 0;
}
