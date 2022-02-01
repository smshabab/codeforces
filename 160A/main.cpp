#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
 
using namespace std;
 
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int totalCash = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        totalCash+=arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int total = arr[0];
    int countCoinNumber = 1;
    for(int i=1; i<n; i++){
        if(total>(totalCash-total)){
            i=n;
        }else{
            total+=arr[i];
            countCoinNumber++;
        }
    }
    printf("%d",countCoinNumber);
    return 0;
}