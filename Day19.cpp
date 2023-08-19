#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a={4,5,2,10};
    int n=a.size();
    int i=0;
    while(i<n-1){
        int j=i+1;
        while(j<n){
            if(a[i]<a[j]){
                cout<<a[j]<<" ";
                break;
            }
            j++;
        }
        i++;
    }
    cout<<-1<<" ";

    return 0;
}
