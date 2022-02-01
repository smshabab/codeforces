#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    char hello[] = {'h', 'e', 'l', 'l', 'o'};
    int helloCharArrIndex = 0;
    string fetchedStr = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]==hello[helloCharArrIndex]){
            fetchedStr += str[i];
            helloCharArrIndex++;
        }
    }
    if(fetchedStr == "hello"){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}