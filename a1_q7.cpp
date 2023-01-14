#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n,m;
    cin >> n;

    int counter = 1;
    int ans = 0 ;
    while(n!=0){
        m = n % 10;
        n=n/10;
        ans = ans + counter * pow(10 , m-1);
        counter++;
    }
    cout<<ans<<endl;
    return 0;
}
