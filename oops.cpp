#include <iostream>
#include <string>
using namespace std;

class Teacher{// for class default access modifier is private
public: 


//non-parameterised
Teacher(){ //constructor  if we dont create one compiler creates one by default
    cout<<"Hi, i am a constructor"<<endl;
    dept = "computer science";   //initialisation
    //for all objs dept value is same
} //constructor gets printed twice if there are two objs and more if there are more objs.


//parameterised
Teacher(string n, string d, string sub, string sal){
    name = n;
    dept = d;
    subject = sub;
    salary = sal;
}  


//properties //attributes
    string name;
    string dept;
    string subj;

    //methods //member functions
    void changDept(string newDept){
        dept = newDept;
    }
    //accessing private members
    //setter function
    void setSalary(double s){
        salary = s;
    }
    //getter function
    double getSalary(){
        return salary;
    } 
private:
    double salary;
};

int main(){
//creating object
Teacher t1;   
Teacher t2; //can initialize any number of teachers


t1.name = "Pranavi"; //giving input
//t1.dept = "Aids";
t1.subj = "C++";
//t1.salary = 25000;   //when public 

t1.setSalary(25000);


//for parameterised constructor
 Teacher t1("Pranavi", "aids", "C++", 25000);

cout << t1.getSalary() <<endl;
cout << t1.name << endl;
cout<< t1.dept << endl;
return 0;
}