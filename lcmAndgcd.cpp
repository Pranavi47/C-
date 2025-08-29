#include<iostream>
using namespace std;

//using iteration
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a==0){return b;}
    return a;
}
//using recursion
int gcdRec(int a, int b){
    if(b==0){return a;}
    else{
        return gcdRec(b, a%b);
    }
}
//lcm. ==== a*b/gcd(a,b).  formula
int lcm(int a, int b){
    return (a * b)/gcdRec(a, b);
}

//main function
int main(){
cout << gcdRec(20, 28) << endl;
cout << lcm(0, 28) << endl;
return 0;
}