#include<iostream>
#include<unordered_map>
using namespace std;

bool is_isomorphic(string s1, string s2){
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2){
        return false;
    }
    else{
        unordered_map<char,char> m;
        for(int i=0;i<l1;i++){
            if(m.find(s1[i])==m.end()){
                m[s1[i]]=s2[i];
            }
            else{
                if(m[s1[i]]!=s2[i]){
                    return false;
                }
            }
        }
        return true;
    }
}

int main()
{
    string s1="abdcd";
    string s2="efggh";
    cout<<is_isomorphic(s1,s2);

    return 0;
}
