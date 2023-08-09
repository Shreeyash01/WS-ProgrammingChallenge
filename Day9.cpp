#include<iostream>
using namespace std;

string n="";
int i=0;
void recursive_reverse(string &s){
    if(i==s.size()){
        return;
    }
    char c=s[i];
    i++;
    recursive_reverse(s);
    n+=c;
    return;
};

int main()
{
    string s="hello";
    recursive_reverse(s);
    cout<<n<<endl;

    return 0;
}
