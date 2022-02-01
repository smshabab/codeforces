#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main()
{
    int result = 1;
    string str;
    cin >> str;
    char charArr[str.length()+1];
    strcpy(charArr, str.c_str());
    char tempArr[str.length()+1];
    tempArr[0] = charArr[0];
    for(int i=0; i<str.length(); i++){
        bool checkNotEqual = true;
        for(int j=0; j<result; j++){
            if(charArr[i] == tempArr[j]){
                checkNotEqual = false;
            }
        }
        if(checkNotEqual == true){
            tempArr[result] = charArr[i];
            result++;
        }
    }
    ((result%2)!=0) ? printf("IGNORE HIM!") : printf("CHAT WITH HER!");
    return 0;
}