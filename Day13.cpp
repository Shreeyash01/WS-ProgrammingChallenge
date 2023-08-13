#include<iostream>
#include<unordered_map>
using namespace std;

void roman_to_decimal(string s){
    unordered_map<char, int> roman_vals;
    roman_vals['I']=1;
    roman_vals['V']=5;
    roman_vals['X']=10;
    roman_vals['L']=50;
    roman_vals['C']=100;
    roman_vals['D']=500;
    roman_vals['M']=1000;
    
    int sum=0;
    int prev=0;

    for(int i=s.length(); i>=0; i--){
        int curr = roman_vals[s[i]];
        if(curr<prev){
            sum-=curr;
        }
        else{
            sum+=curr;    
        }
        prev=curr;
    }
    cout<<sum<<endl;
}

int main()
{
    string s = "MCMXCIV";
    roman_to_decimal(s);

    return 0;
}
