#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main()
{
    string numStr;
    cin >> numStr;
    bool cekNum = false;
    int arr[14] = {4,7,44,77,47,74,444,477,474,744,777,747};
    for(int i=0; i<12; i++){
        if(stoi(numStr)%arr[i]==0){
            cekNum = true;
        }
    }
    (cekNum) ? printf("YES") : printf("NO");
    return 0;
}