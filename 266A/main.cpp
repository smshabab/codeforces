#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
    int n, ans = 0;
    scanf("%d",&n);
    char charArr[n];
    scanf("%s",charArr);
    char temp = charArr[0];
    for(int i=0; i<sizeof(charArr); i++){
        if(temp == charArr[i+1]){
            ans++;
        }else{
            temp = charArr[i+1];
        }
    }
    printf("%d",ans);
    return 0;
}