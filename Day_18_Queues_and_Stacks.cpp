#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    public:
    stack<char> Ss;
    queue<char> Qs;

    void pushCharacter(char p)
        {
        Ss.push(p);
    }

    void enqueueCharacter(char e)
        {
        Qs.push(e);
    }

    char popCharacter()
        {
        char p = Ss.top();
        Ss.pop();
        return p;
    }

    char dequeueCharacter()
        {
        char d = Qs.front();
        Qs.pop();
        return d;
    }

};

int main() {
    string s;
    getline(cin, s);

    Solution obj;

    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
