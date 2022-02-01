#include <iostream>
 
using namespace std;
 
int main() {
    string str;
    cin >> str;
    bool checkString = false;
    for(int i=0; i<str.length(); i++){
        if((str[i]=='H')||(str[i]=='Q')||(str[i]=='9')){
            checkString = true;
        }
    }
    (checkString) ? cout << "YES" << endl : cout << "NO" << endl;
}