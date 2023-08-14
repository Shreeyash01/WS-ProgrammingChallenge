#include<iostream>
using namespace std;

int main()
{
    string s="asdfghjkl";
    int l=s.length();
    int k=4;
    cout<<"No. of possible substrings of length k : "<<l-k+1<<endl;

    return 0;
}
