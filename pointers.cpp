#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int* p = &a;
    int** q = &p;

    cout<< *p <<endl;//5
    cout<< **q <<endl;//5
    cout<< p <<endl;//&a
    cout<< *q <<endl;//o/p &a
    cout<< &a <<endl;
    return 0;
}

//pass by reference using pointer
#include <iostream>
using namespace std;

void ChangeA(int* ptr){
    *ptr = 20;
}
int main(){
    int a = 10;
    ChangeA(&a);

    cout<< "inside main fun:"<< a <<endl;
    return 0;// o/p: 20
}


//pass by reference using alias
#include <iostream>
using namespace std;

void ChangeA(int &b){
    b = 20;
}
int main(){
    int a = 10;
    ChangeA(a);

    cout<< "inside main fun:"<< a <<endl;
    return 0;// o/p: 20
}


//pass by value
#include <iostream>
using namespace std;

void ChangeA(int a){
    a = 20;
}
int main(){
    int a = 10;
    ChangeA(a);

    cout<< "inside main fun:"<< a <<endl;
    return 0;
}// o/p : 10