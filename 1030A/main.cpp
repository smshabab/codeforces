#include <iostream>
 
using namespace std;
 
int main() {
    bool ans = true;
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        if(num==1){
            ans = false;
        }
    }
    if(ans){
        cout << "EASY" << endl;
    }else{
        cout << "HARD" << endl;
    }
    return 0;
}