#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
 
using namespace std;
 
int main()
{
    int year;
    cin >> year;
    while(year!=0){
        year++;
        string str;
        stringstream ss;
        ss << year;
        ss >> str;
        int tempCount = 0;
        for(int i=0; i<str.length(); i++){
            for(int j=0; j<str.length(); j++){
                if(str[i]==str[j]){
                    tempCount++;
                }
            }
            if(tempCount>1){
                i = str.length();
            }else{
                tempCount = 0;
            }
        }
        if(tempCount<=1){
            cout << year << endl;
            year = 0;
        }
    }
    return 0;
}