#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
 
int main()
{
    int m=0,n=0;
    scanf("%d %d",&m,&n);
    int ans = floor((m*n)/2);
    printf("%d",ans);
    return 0;
}