#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

bool areSimilar(const string &str1, const string &str2) {
    return str1 == str2;
}

int main()
{
    string s = "hello world world hello";

    stringstream ss(s);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    stack<string> wordStack;

    for (const string &word : words) {
        if (!wordStack.empty() && areSimilar(word, wordStack.top())) {
            wordStack.pop();
        } else {
            wordStack.push(word);
        }
    }

    cout << wordStack.size() << endl;

    return 0;
}
