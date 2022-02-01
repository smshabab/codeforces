#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
 
using namespace std;
 
int main()
{
    int n, a, b, ans = 0, temp = 0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%d",&a,&b);
        if(i==0){
            ans = temp = b;
        }else{
            temp = temp - a + b;
            if(temp>ans){
                ans = temp;
            }
        }
    }
    printf("%d",ans);
    return 0;
}