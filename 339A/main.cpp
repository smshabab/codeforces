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
    int numArrLen = ceil((str.length()+1)/2);
    int numArr[numArrLen];
    for(int i=0; i<sizeof(strArr)-1; i+=2){
        for(int j=0; j<sizeof(strArr)-1; j+=2){
            if((int)strArr[i]<(int)strArr[j]){
                char temp = strArr[i];
                strArr[i] = strArr[j];
                strArr[j] = temp;
            }
        }
    }
    cout << strArr << endl;
    return 0;
}