#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 0, 0, 0, 0, 0};
    int n = nums.size();
    int k = 4; // window size
    int neg;
    bool flag = false;
    for (int i = 0; i < n - k + 1; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            if (nums[j] < 0)
            {
                neg = nums[j];
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << neg << " ";
            flag = false;
        }
    }
    return 0;
}
