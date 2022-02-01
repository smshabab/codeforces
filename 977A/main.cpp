#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
 
using namespace std;
 
int main()
{
    int n, k;
    scanf("%d%d",&n, &k);
    while(k!=0){
        string numStr = to_string(n);
        ((numStr[numStr.length()-1]))=='0' ? n/=10 : n-=1;
        k--;
    }
    printf("%d",n);
    return 0;
}