#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int input=0, place=0, ans=0;
    scanf("%d %d",&input,&place);
    int arr[input];
    for(int i=0; i<input; i+=1){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<input; i+=1){
        if(arr[i]!=0 && arr[i]>=arr[place-1]){
            ans+=1;
        }
    }
    printf("%d",ans);
    return 0;
}