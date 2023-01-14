#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int t,n;
    cin >> t;

    //write your code here
    while(t--){
        cin>>n;
        bool isPrime = true;
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                isPrime = false;
                cout<<"not prime\n";
                break;
            }
        }
        if (isPrime) cout<<"prime\n";
    }
    return 0;
}
