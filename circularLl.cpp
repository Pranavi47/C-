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
class circularLl{
    Node* head;
    Node* tail;
public:
    circularLl(){
        head = tail = NULL; 
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);

        if(tail == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;//newNode
        }
    }
    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(tail == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void deleteAtHead(){
        if(head == NULL)return;
        else if(head == tail){//single node
            delete tail;
            head = tail = NULL;
        }else{
        Node* temp = head;
        head = head->next;
        tail->next = head;

        temp->next = NULL;
        delete temp;
        }
    }
    
    void deleteAtTail(){
         if(head == NULL)return;
        else if(head == tail){//single node
            delete tail;
            head = tail = NULL;
        }else{
        Node* temp = tail;
        Node* prev = head;
        while(prev->next != tail){
            prev = prev->next;
        }
        tail = prev;
        tail->next = head;
        temp->next = NULL;
        delete temp;
        }
    }

    void print(){
        if(head == NULL) return;

        cout << head->data << " -> ";
        Node* temp = head->next;

        while(temp != head){ //to avoid infinite loop
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << head->data << endl;//to show end of list as it is circular
    }

};
int main(){
    circularLl cll;

    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.print();

    cll.insertAtTail(4);
    cll.insertAtTail(8);
    cll.print();

    cll.deleteAtHead();
    cll.print();
    
    cll.deleteAtTail();
    cll.print();

    return 0;
}