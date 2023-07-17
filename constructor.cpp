# include <iostream>
using namespace std ;






/*
Constructors are special class members which are called by
the compiler every time an object of that class is instantiated. 
Constructors have the same name as the class and may be defined inside or
outside the class definition
 


There are 3 types of constructors:

1)Default Constructors
2)Parameterized Constructors
3)Copy Constructors :A Copy Constructor creates a new object, which is an exact copy of the existing object.
 The compiler provides a default Copy Constructor to all the classes.
*/



/*
Destructors: 
    Destructor is another special member function that 
    is called by the compiler when the scope of the object ends.

    the destructor deallocate the data of the entire object so that we can avoid memory leak

    there are two types of the desturcotrs: 
    1) defualt : by the compiler
    2) define by the user



*/


class person{
    string name ; 
    int age ; 

    public: 

    // if you don't want to define default constructor
    // so in every time you create an boject of the class 
    // you should defint the attributes of the constructor

    person() //default constructor
    {
        name = "NULL" ;
        age = 0  ; 
    }

    
    // we don't need this copy construcor as it's the defualt one 
    // but to understand the main concept of it. 

    // person(person & p) //copy constructor 
    // {
    //     // define the name of the object as the name of the anohter object
    //     this->name = p.name ;
    //     // define the age of the object as the age of the anohter object
    //     this->age = p.age ;
    // }

    person(string name , int age):name(name), age(age){} // Parameterized Constructors

    ~person() // destructor
    {
        /*
            note : I think you wonderd why we need to define a construcotor however there are 
            a dfualt one

            to answer this proplem we should be aware of pointers!

            when we define pointers it's allocated in the heap memory and to deallocate it 
            we need to do it manauly, so in this case we need to define the destrcutor
        */
        cout << "the object is deallocated successfully!\n" ; 
    }
    

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



} ;


int main()
{
    person p1 ; // default constructor
    p1.print() ;
    cout << "-------------------------------" << endl  ;
    p1.setAge(19) ; 
    p1.setName("ahmed") ; 


   { 
        person p2(p1) ; // here we used the defualt copy constructor
        p2.print();
   } // the end of the p2 ; 

    cout << "-------------------------------"  << endl ;

    person p3("Hatem" , 20 ) ;
    p3.print() ;

}