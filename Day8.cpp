#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1 = "rail safety";
    string s2 = "fairy tales";

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1.size() != s2.size()) {
        cout << "Not Anagram" << endl;
    } else {
        bool anagram = true;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                anagram = false;
                break;
            }
        }
        if (anagram) {
            cout << "Anagram" << endl;
        } else {
            cout << "Not Anagram" << endl;
        }
    }

    return 0;
}
