#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
 
using namespace std;
 
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    string str;
    cin >> str;
    while(t--){
        for(int i=1; i<n; i++){
            if(str[i]=='G' && str[i-1]=='B'){
                char temp = str[i];
                str[i] = str[i-1];
                str[i-1] = temp;
                i++;
            }
        }
    }
    cout << str << endl;
    return 0;
}