#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
 
using namespace std;
 
int main()
{
    int n, ans = 0, i = 5;
    scanf("%d",&n);
    while(i){
        if((n%i)==0){
            ans+=n/i;
            i = 0;
        }else if(n<i){
            i--;
            continue;
        }else{
            ans+=n/i;
            n = n%i;
        }
    }
    printf("%d",ans);
    return 0;
}