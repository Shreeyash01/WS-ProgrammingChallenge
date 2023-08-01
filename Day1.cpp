#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<int>& a) {
    int n = a.size();
    if (n <= 1) {
        return;
    } else {
        int pivot = a[n / 2];
        vector<int> left, right;
        for (int i = 0; i < n; i++) {
            if (i != n / 2) {
                if (a[i] < pivot) {
                    left.push_back(a[i]);
                } else {
                    right.push_back(a[i]);
                }
            }
        }
        quicksort(left);
        quicksort(right);
        for (int i = 0; i < left.size(); i++) {
            a[i] = left[i];
        }
        a[left.size()] = pivot;
        for (int i = 0; i < right.size(); i++) {
            a[left.size() + 1 + i] = right[i];
        }
    }
}

int main() {
    vector<int> a = {34, 56, 12, 89, 45, 67, 23, 90, 11, 78};
    quicksort(a);

    cout << "Sorted array: ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    cout<<"K'th largest element in the array : "<<a[a.size()-k]<<endl;

    return 0;
}
