#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int m, int n){
    if(m<n){
        swap(m,n);
    }
    while(m%n!=0){
        int rem=m%n;
        m=n;
        n=rem;
    }
    return n;
}
int main()
{
    cout<<gcd(101,2);

    return 0;
}
