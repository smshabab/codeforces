#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int n=0;
    cin>>n;
    for(int i=0; i<n; i+=1){
        string str = "";
        cin >> str;
        if(str.length()>10){
            printf("%c%d%c\n",str[0],str.length()-2,str[str.length()-1]);
        }else{
            cout << str << "\n";
        }
    }
    return 0;
}