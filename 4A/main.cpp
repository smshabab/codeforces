#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int i = 0;
    scanf("%d",&i);
    if((i%2)==0 && i!=2){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}