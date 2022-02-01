#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main()
{
    int xsum = 0, ysum = 0, zsum = 0;
    int n;
    scanf("%d",&n);
    while(n--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        xsum += x;
        ysum += y;
        zsum += y;
    }
    ((xsum == 0) && (ysum == 0) && (zsum == 0)) ? printf("YES") : printf("NO");
    return 0;
}