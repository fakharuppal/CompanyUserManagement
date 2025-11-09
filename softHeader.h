#include <iostream>
#include <cstring>
using namespace std;

const string companyName= "TechMart Pvt.LTD"; 

class Empl_str{
    char* empName;
    int *empId;
    double *salary;
    static int empCount;

public:
    Empl_str();
    //constructor intialization and deep copy constructor  
    Empl_str(const char* empName,int empId, double salary);
    Empl_str(const Empl_str&);
    //setters
    void setSalary(double newSalary);
    void swapSalary(Empl_str&);
    //Name Data and comapny name printing
    void show () const; 
    void twoObj(Empl_str &);
    static void companyNamePrint();
    static int totalEmp();
    //destroctor
    ~Empl_str();
};
Empl_str* empleeCreat(int&);
void screenClear();
void resetingValue(Empl_str*);
