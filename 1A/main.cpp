#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
 
int main()
{
    double n=0,m=0,a=0;
    scanf("%lf %lf %lf",&n,&m,&a);
    printf("%lld",(long long)(ceil(n/a)*ceil(m/a)));
    return 0;
}