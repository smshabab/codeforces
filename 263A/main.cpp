#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int matrix[5][5];
    int positionOfOne[2];
    for(int i=0; i<5; i+=1){
        for(int j=0; j<5; j+=1){
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1){
                positionOfOne[0] = i;
                positionOfOne[1] = j;
            }
        }
    }
    printf("%d", (abs(2-positionOfOne[0])+abs(2-positionOfOne[1])));
    return 0;
}