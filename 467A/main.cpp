#include <iostream>
 
using namespace std;
 
int main() {
    int n,p,q,ans=0;
    cin >> n;
    while(n--){
        cin >> p >> q;
        if((q-p)>=2){
            ans+=1;
        }
    }
    cout << ans << endl;
}