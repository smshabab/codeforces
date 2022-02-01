#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    char strArr[str.length()+1];
    strcpy(strArr, str.c_str());
    if((int)strArr[0] >= 97 && (int)strArr[0]<=122){
        strArr[0] = (char)((int)strArr[0]-32);
    }
    cout << strArr << endl;
    return 0;
}