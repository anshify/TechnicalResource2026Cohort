#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    
    //write your code here
    if(marks>90){
     cout<<"excellent\n";
    }
    
    if(80<marks<=90){
     cout<<"good\n";
    }
    
    if(70<marks<=80){
     cout<<"fair\n";
    }
    
    if(60<marks<=70){
     cout<<"meets "<<"expectations\n";
    }
    
    if(marks<=60){
     cout<<"below par\n";
    }
    
    return 0;
}
