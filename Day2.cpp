#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={0,1,3,1,5,6,2,3,1,5,7,8,6,3,4,9,6,3,0,2};
    sort(arr.begin(),arr.end());

    int k;
    cout<<"Enter Number to Find no. of occurences : ";
    cin>>k;

    int count=0;
    for(int i : arr){
        if(i>k){
            break;
        }else if(i==k){
            count++;
        }
    }
    cout<<"Number of occurences of "<<k<<" : "<<count<<endl;

    return 0;
}
