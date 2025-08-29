#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    //double cgpa;//static//stack
    double* cgpaPtr;


    Student(string name, double cgpa){
        this->name = name;
       // this->cgpa = cgpa; //stack
       cgpaPtr = new double; //heap
       *cgpaPtr = cgpa;
    }
    // shallow copy constructor
     //Student(Student &obj){
        //this->name = obj.name;
        //this->cgpa = obj.cgpa;
        //this->cgpaPtr = obj.cgpaPtr;

    //deep copy constructor
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        //this->cgpa = obj.cgpa;
        *cgpaPtr = *obj.cgpaPtr;
    }   
    

     void getinfo(){
        cout << "name :" << name << endl;
        //cout << "cgpa :" << cgpa << endl;
    
        cout << "cgpa :" << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("Pranavi", 8.9);
    Student s2(s1);

   // s2.getinfo();
   s1.getinfo();
   *(s2.cgpaPtr) = 9.2;
   s2.getinfo();
   

    return 0;
}