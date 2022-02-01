#include <iostream>
 
using namespace std;
 
int main() {
    int n, countGroup = 1, temp;
    cin >> n;
    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        if(i==0){
            temp = input;
        }
        if(temp!=input){
            countGroup++;
            temp = input;
        }
    }
    cout << countGroup << endl;
    return 0;
}