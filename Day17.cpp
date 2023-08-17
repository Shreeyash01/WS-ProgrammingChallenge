#include<iostream>
using namespace std;

bool is_fibonacci(int n){
    int a = 0, b = 1, c = 0;
    while(c < n){
        c = a + b;
        a = b;
        b = c;
    }
    if(c == n){
        return true;
    }
    return false;
}

int main()
{
    cout<<is_fibonacci(6)<<endl;
    cout<<is_fibonacci(5)<<endl;
    cout<<is_fibonacci(13)<<endl;
    cout<<is_fibonacci(14)<<endl;

    return 0;
}
