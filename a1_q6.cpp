#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,m,i;
    cin >> n;

    //write your code here
    while(n!=0){
       m = n % 10;
       n = n/10;
       cout<<m<<"\n";
    }
    return 0;
    
}
