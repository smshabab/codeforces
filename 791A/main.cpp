#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main()
{
    int limakAge, bobAge, ans = 0;
    scanf("%d%d",&limakAge, &bobAge);
    while(limakAge<=bobAge){
        limakAge *= 3;
        bobAge *= 2;
        ans++;
    }
    printf("%d",ans);
    return 0;
}