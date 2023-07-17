# include<iostream>
using namespace std ;

/*
    IN this part we are going to explain: 
    1] what is classess
    2] what is objects

*/ 

/*
    Let's go to explain what is classess. 

    1)A Class is a user-defined data type that has data members and member functions.

    2)Data members are the data variables and member functions are the functions used to manipulate these variables together
     these data members and member functions define the properties and behavior of the objects in a Class.
*/

// here is an example of a classess

class Person{
    string name; 
    int age ;

    public: 
    void setName(string name)
    {
        this->name = name ;
    }
    void setAge(int age)
    {
        this->age = age ;
    }
    void print()
    {
        cout << "User Name Is ==> " << name ; 
        cout << endl << "User Age Is ==> " << age << endl ; 
    }



}; 

int main()
{
    /*
        An Object is an identifiable entity with some characteristics and behavior. 
        An Object is an instance of a Class. When a class is defined,
        no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
    */

   Person p1; //  the object is allocated

   p1.setName("ahmed") ;
   p1.setAge(20); 
   p1.print() ;


}