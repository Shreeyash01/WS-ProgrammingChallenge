#include<iostream>
using namespace std;

void reverse_wordbyword(string s){
    s=" "+s;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]==' '){
            cout<<s.substr(i+1,s.length()-i-1)<<" ";
            s=s.substr(0,i);
        }
    }
}

int main()
{
    string s="I Love Coding";
    reverse_wordbyword(s);

    return 0;
}
