#include <iostream>
#include <unordered_map>
using namespace std;

void duplicates(string &s)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (m[s[i]] == 1)
        {
            flag=true;
            cout <<  "First Non-repeated Charater : " << s[i] << endl;
            break;
        }
    }
    if(!flag){
        cout<<"No Non-repeated character found"<<endl;
    }
};

int main()
{
    string s = "racecar";
    duplicates(s);

    return 0;
}
