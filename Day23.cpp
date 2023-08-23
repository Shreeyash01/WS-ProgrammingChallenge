#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v ={1,2,3,4,5,6,7,8,9,10};
    int k=5;
    int i=0;
    int j=k-1;

    while(i<j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
