#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,0};
    int s = arr.size();
    int n;
    cout<<"Number of Rotations : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int first=arr[0];
        for(int j=0; j<s-1; j++){
            arr[j]=arr[j+1];
        }
        arr[s-1]=first;
    }

    for(int k=0; k<s; k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}
