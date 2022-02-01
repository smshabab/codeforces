#include <iostream>
#include <cmath>
#include <string>
 
using namespace std;
 
int main() {
    long double n; long double num;
    cin >> n >> num;
    if(ceil(n/2)>=num){
        cout << stoll(to_string((num*2)-1), nullptr, 10) << endl;
    }else{
        cout << stoll(to_string((num-ceil(n/2))*2), nullptr, 10) << endl;
    }
    return 0;
}