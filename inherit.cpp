#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
    //parameterised
    Person(string name, int age){
        this->name = name;
        this->age = age;

    }
   /** Person(){
        cout << "parent construtor\n";
    }
    ~Person(){
        cout<<"parent destructor\n";
    }*/
};
class Student : public Person{
public:
    int rollno;

    void getinfo(){
        cout<< "name:" << name <<endl;
        cout<< "age:" << age <<endl;
        cout<< "rollno:" << rollno <<endl;
    }
    //parameterized constr
    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
    }
    /*Student(){
        cout<<"child constructor\n";
    }
    ~Student(){
        cout << "child destructor\n";
    }*/
};
int main(){
    Student s1("Pranavi", 21, 1234); //shortcut
    /*s1.name = "Pranavi";
    s1.age = 21;
    s1.rollno = 1234;*/

    s1.getinfo();
    return 0;
}