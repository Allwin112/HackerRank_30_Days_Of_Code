#include <iostream>
#include <string>

using namespace std;


int main(){
    string S;
    cin >> S;

    try
        {
        int no;
        no = stoi(S);
        cout << no << endl;
    }
    catch(exception e)
        {
        cout << "Bad String";
    }
    return 0;
}
