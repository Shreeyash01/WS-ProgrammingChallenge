#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1; 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]); 
        }
    }
    swap(arr[i + 1], arr[high]); 
    return i + 1;
}
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}
int main() {
    vector<int> arr = {-5, -10, -2, -20, -1, -15};
    int n = arr.size();

    quicksort(arr, 0, n - 1);

    cout << "Smallest : "<<arr[0]<<endl;
    cout << "Largest : "<<arr[n-1]<<endl;

    return 0;
}
