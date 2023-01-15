#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2, m ,n,a;
    cin >> num1 >> num2;

    //write your code here
    n = num1 > num2 ? num1 : num2 ;
    m = num1 < num2 ? num1 : num2 ; 
    
    int r = 0;
    
    while(n % m != 0){
        r = n % m;
        m = r;
        n = m;
    }
    cout<<r<<"\n";
    
    a = num1 > num2 ? num1 : num2;
    while(true){
    if(a % num1 == 0 && a % num2 == 0){
        break;
    }
    a++;
    
  }
    cout<<a;
    
  
    
    return 0;
    
}
