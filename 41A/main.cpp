#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
 
using namespace std;
 
int main()
{
    string strOne, strTwo;
    cin >> strOne >> strTwo;
    bool checkCondition = true;
    for(int i=0; i<strOne.length(); i++){
        if(strOne[i]!=strTwo[strOne.length()-1-i]){
            checkCondition = false;
        }
    }
    (checkCondition) ? printf("YES") : printf("NO");
    return 0;
}