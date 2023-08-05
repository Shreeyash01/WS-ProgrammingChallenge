#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={0,0,0,0,0};
    int target=0;
    int count=0;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;


    return 0;
}
