#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    int capitalCount = 0, smallCount = 0;
    for(int i=0; i<str.length(); i++){
        if(((int)str[i]>=65) && ((int)str[i]<=90)){
            capitalCount++;
        }else{
            smallCount++;
        }
    }
    for(int i=0; i<str.length(); i++){
        if(capitalCount==smallCount){
            if(((int)str[i]>=65) && ((int)str[i]<=90)){
                str[i] = (char)((int)str[i]+32);
            }
        }else if(capitalCount<smallCount){
            if(((int)str[i]>=65) && ((int)str[i]<=90)){
                str[i] = (char)((int)str[i]+32);
            }
        }else{
            if(((int)str[i]>=97) && ((int)str[i]<=122)){
                str[i] = (char)((int)str[i]-32);
            }
        }
    }
    cout << str << endl;
    return 0;
}