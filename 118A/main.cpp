#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
 
int main()
{
 
    //"A", "O", "Y", "E", "U", "I",
    string str;
    cin >> str;
    char arr[str.length()];
    strcpy(arr, str.c_str());
    for(int i=0; i<str.length(); i+=1){
        if(arr[i]=='A' || arr[i]=='a' || arr[i]=='O' || arr[i]=='o' || arr[i]=='Y' || arr[i]=='y' || arr[i]=='E' || arr[i]=='e' || arr[i]=='U' || arr[i]=='u' || arr[i]=='I' || arr[i]=='i'){
            printf("");
        }else{
            printf(".");
            if(isupper(arr[i])){
                char temp = arr[i]+32;
                printf("%c",temp);
            }else{
                printf("%c",arr[i]);
            }
        }
    }
    return 0;
}