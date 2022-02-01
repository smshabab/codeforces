#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[n][3];
    int temp=0;
    for(int i=0; i<n; i+=1){
        int temp2 = 0;
        for(int j=0; j<3; j+=1){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                temp2+=1;
            }
        }
        if(temp2>=2){
            temp+=1;
        }
    }
    printf("%d",temp);
    return 0;
}