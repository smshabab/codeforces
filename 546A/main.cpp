#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main()
{
    int k, n, w, moneyNeed = 0;
    scanf("%d%d%d",&k,&n,&w);
    for(int i=1; i<=w; i++){
        moneyNeed += (i*k);
    }
    int ans = moneyNeed-n;
    if(ans<0){
        ans = 0;
    }
    printf("%d",ans);
    return 0;
}