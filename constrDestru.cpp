#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    //constructor
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    //destructor
    ~Student(){
        cout << "Hi, I delete everything!\n" ;
        delete cgpaPtr;//if we dont delete dynamic memory: memory leak //waste

    }
    void getinfo(){
        cout << "name:" << name <<endl;
        cout << "cgpa:" << *cgpaPtr << endl;
    }

};
int main(){
    Student s1("Pranavi", 8.9);
    s1.getinfo();
    return 0;
} 