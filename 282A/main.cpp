#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int n=0, x=0, temp1=0, temp2=0;
    scanf("%d",&n);
    for(int i=0; i<n; i+=1){
        string str;
        cin >> str;
        if(temp1==1){
            x+=1;
            temp1=0;
        }else if(temp2==1){
            x-=1;
            temp2=0;
        }else{
            //do nothing...
        }
        if(str=="X++" || str=="x++"){
            temp1+=1;
            if(i==n-1){
                x+=1;
            }
        }else if(str=="++X" || str=="++x"){
            x+=1;
        }else if(str=="X--" || str=="x--"){
            temp2+=1;
            if(i==n-1){
                x-=1;
            }
        }else if(str=="--X" || str=="--x"){
            x-=1;
        }else{
            //do nothing...
        }
    }
    printf("%d",x);
    return 0;
}