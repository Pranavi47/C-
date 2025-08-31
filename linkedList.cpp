#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){ //Tc:O(1)

        //creating node
        Node* newNode = new Node(val);//dynamic //persists in memory even if the function call ends
        //Node newNode(val);//static : this value gets deleted once we exit the function so prefer new keyword
        
        //when list is empty
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){//TC:O(1) 
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){ //TC:O(1)
        if(head == NULL){
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){//TC:O(n)
        if(head == NULL){
            return;
        }
        Node* temp = head;

        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    
    void insert(int val, int pos){//Tc:O(n)

        if(pos < 0){
            cout<<"invalid position\n";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout<<"invalid position\n";
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printLL(){//Tc:O(n)
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    } 

    int search(int key){ //Tc:O(n)
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main(){

    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.pop_front();
    ll.pop_back();
    ll.insert(4, 1);
    cout<< ll.search(4) <<endl;
    ll.printLL();
    

    return 0;
}