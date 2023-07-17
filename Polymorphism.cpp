# include <iostream>
using namespace std ; 



/*
    there are two type of Polymorphism
    1) compile time Polymorphism: 
    1.1) function overloading
    1.2) operator overloading

    2) run time Polymorphism
    2.1) virtual functions(operator overrding)

*/

class test{

    public: 

    // function overloading example 

    // in this example we have three functions with the same name 
    // but each function has differnet tasks to be done 
    // the specific function is defined while compile time

    void fun(int x) 
    {
        cout << "the value of x is " << x << endl ;
    }

    void fun(int x , int y ) 
    {
        cout << "The value of x and y are, " << x << " " << y << endl ; 
    }

    void fun(string name)
    {
        cout << "Object name is " << name << endl ; 
    }


} ;

class testOperatorOveloading{

    private : 
        int x,y ; 
    public: 
    testOperatorOveloading()
    {
        x = y = 0 ; 
    }

    testOperatorOveloading(int x , int y)
    {   
        this->x = x ;
        this->y = y ; 
    }

    testOperatorOveloading operator += (testOperatorOveloading const &obj)
    {
        this->x = obj.x ;
        this->y = obj.y ; 
        return *this; 
    }

    void print()
    {
        cout << "x value is " << x << endl ; 
        cout << "y value is " << y << endl ; 
        
    }
};


// test operartor overrding 


class Animal{
    private : 
    string name ; 

    public: 
    virtual void eat()  = 0 ;
    virtual void sleep() = 0 ;

    // final refer to that you can't overrding this function 
    // as we know all animals drink water 
    // so in the derived class(type of animal like cat,dog etc..) 
    // all of them drink water so we don't need to overrding it
    virtual void drink() final{
        cout << "The animlas drink water!\n" ; 
    }

    void sound(){
        cout << "None\n" ;
    } 


};

class Cat : public Animal{

    public: 
    void eat() override
    {
        cout << "Cat eats Fish\n" ; 
    }

    void sleep() override
    {
        cout << "cat sleep 15 hours in a day\n";
    }

    void sound() 
    {
        cout << "Cat sound is meaoooooooooo!\n" ;
    }


}; 



int main()
{
// test function overloading

    // test t1; 
    // t1.fun(3) ; 
    // t1.fun(3,5) ;
    // t1.fun("ahmed") ;
////////////////////////////////////
// test operator overloading

    // testOperatorOveloading p1(5,10) ;
    // testOperatorOveloading p2 ; 
    // p2 += p1 ; 
    // p2.print() ;
/////////////////////////////////////
// test function overriding

    Animal *a1 = new Cat() ;
    a1->eat() ;

    a1->sleep() ;

    // the function sound is not a virtual function in the base class so that 
    // it doesn't overridden 
    a1->sound() ;   // ouput is (None) 

    a1->drink() ; 

    // note that virtual functions must be defined in child class 
    // if a class has virtual function we don't use it at all 
    // we use child classess pased on super class


}