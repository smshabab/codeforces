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
    char temp;
    temp = charArr[0];
    for(int i=1; i<str.length(); i++){
        if(temp == charArr[i]){
            result++;
        }else{
            temp = charArr[i];
            if(result<7){
                result = 1;
            }
        }
    }
    (result >= 7) ? printf("YES") : printf("NO");
    return 0;
}