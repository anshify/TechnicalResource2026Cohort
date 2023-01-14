#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    //write your code here
    for(int i = low; i<=high ; i++){
        bool isPrime = true;
        for(int n = 2; n <= sqrt(i); n++){
            if(i%n == 0){
                isPrime = false;
                break;
            }
        }   if(isPrime) cout<<i<<"\n";
    }
    
    return 0;

}
