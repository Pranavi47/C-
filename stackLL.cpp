#include <iostream>
#include <list>
using namespace std;


class Stack{
public:
    list<int> ll;

    void push(int val){//O(1)
        ll.push_front(val);
    }

    void pop(){//O(1)
        ll.pop_front();
    }

    int top(){//O(1)
        return ll.front();
    }

    bool empty(){
       return ll.size() == 0; 
    }

};

int main(){
    Stack s;

    s.push(20);
    s.push(40);
    s.push(10);

    
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl; //10 40 20

    return 0;
}