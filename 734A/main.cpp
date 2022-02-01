#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
 
using namespace std;
 
int main()
{
    int n, antonCount = 0, danikCount = 0;
    cin >> n;
    char arr[n];
    for(int i=0; i<n; i++){
        char temp;
        cin >> temp;
        if(temp=='A'){
            antonCount++;
        }else{
            danikCount++;
        }
    }
    if(antonCount>danikCount){
        printf("Anton");
    }else if(danikCount>antonCount){
        printf("Danik");
    }else{
        printf("Friendship");
    }
    return 0;
}