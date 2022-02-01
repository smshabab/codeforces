#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    float n,h,ans=0;
    cin >> n >> h;
    while(n--){
        float num;
        cin >> num;
        if(num>h){
            ans+=ceil(num/h);
        }else{
            ans+=1;
        }
    }
    cout << ans;
}