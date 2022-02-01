#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
 
using namespace std;
 
int main()
{
    string numStr;
    cin >> numStr;
    int countLuckey = 0;
    for(int i=0; i<numStr.length(); i++){
        if(numStr[i]=='4' || numStr[i]=='7'){
            countLuckey++;
        }
    }
    bool cekNum = true;
    string str;
    stringstream ss;
    ss << countLuckey;
    ss >> str;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='4' || str[i]=='7'){
 
        }else{
            cekNum = false;
        }
    }
    (cekNum) ? printf("YES") : printf("NO");
    return 0;
}