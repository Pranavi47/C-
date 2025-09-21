#include <iostream>
#include <vector>
using namespace std;


class Stack{
public:
    vector<int> v;

    void push(int val){//O(1)
        v.push_back(val);
    }

    void pop(){//O(1)
        v.pop_back();
    }

    int top(){//O(1)
        return v[v.size()-1];
    }

    bool empty(){
       return v.size() == 0; 
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