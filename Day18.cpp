#include<iostream>
#include<cmath>
using namespace std;

int nth_root(double n, double m){
    double r= pow(n,1.0/m);
    int round_r =round(r);
    int ceil_r=ceil(r);

    if(r==round_r || r==ceil_r){
        return r;
    }
    else{
        return -1;
    }
}

int main()
{
    double n=100;
    double m=3;
    cout<<nth_root(n,m);

    return 0;
}
