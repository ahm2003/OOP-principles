# include<iostream>
using namespace std ; 



/*
    to know more about inheritance visit this site 
    https://www.geeksforgeeks.org/inheritance-in-c/?ref=lbp

*/

// here is a sample example of inheritance


// first we define a class called person 

class person{

    protected: 
        string name ; 
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


// we know that student is a persong right!! 
// so why not to inherite the properites of the class person into a new class called student

class Student : public person{
    int year;
    double GPA ; 
    string course; 

    public: 

    void setYear(int year)
    {
        this->year = year ;
    }

    void setGPA(double GPA)
    {
        this->GPA = GPA ; 
    }

    void setCourse(string course)
    {
        this->course = course ;
    }

    void print()
    {
        // person::print() ; 
        cout << "Student name ==> " << name << endl ; 
        cout << "Student age ==> " << age << endl ; 
        cout << "Student Year ==> " << year << endl ; 
        cout <<"students GPA ==>" << GPA << endl ; 
        cout << "Sutednt course==> "<< course << endl ; 
    }



}; 

int main()
{
    Student st1; 
    st1.setCourse("CS"); 
    st1.setGPA(3.2) ; 
    st1.setYear(2003) ;
    st1.setName("Ahmed Ashraf Zaki"); 
    st1.setAge(20) ;
    st1.print() ; 
}