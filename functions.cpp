#include "softHeader.h"

int Empl_str::empCount=0;
//--------------------------------------------------------------------------------
Empl_str::Empl_str(){
    empName=nullptr;
    empId=nullptr;
    salary=nullptr;
}
// constrator Intialization
Empl_str::Empl_str(const char* empName,int empId, double salary){
        this->empName = new char[strlen(empName)+1];
        strcpy(this->empName, empName);
        this->empId=new int(empId);
        this->salary= new double(salary);
        empCount++;
    }
//Copy Constructor (Deep Copy) 
Empl_str::Empl_str(const Empl_str& old){
        this->empName = new char[strlen(old.empName)+1];
        strcpy(this->empName, old.empName);
        this->empId=new int(*old.empId);
        this->salary= new double(*old.salary);
        empCount++;
}
//--------------------------------------------------------------------------------
//setters
void Empl_str::setSalary(double newSalary) {*salary = newSalary;}
//salary swap
void Empl_str::swapSalary(Empl_str &n){
    double temp;
    temp = *n.salary;
    *n.salary= *salary;
    *salary = temp;
}
//--------------------------------------------------------------------------------
//Employ showing
void Empl_str::show() const{
        cout<<"Name: "<<empName<<"\tID: FSD"<<*empId<<"\tSalary: "<<*salary<<endl;
    }
void Empl_str::companyNamePrint(){
        screenClear();
        cout<<"------  \033[31m"<<companyName<<"\033[0m  ------"<<endl;
    }
int Empl_str::totalEmp(){
    return empCount;
}
void Empl_str::twoObj(Empl_str &n){
    cout<<"Copy->   \t";
    n.show();
    cout<<"Orignal->\t";
    show();
}
//-------------------------------------------------------------------------------
//Destroctor
Empl_str::~Empl_str(){
    delete [] empName;
    delete empId;
    delete salary;
}
//------------------------------------------------------------------------------
//Empee Account Creating
Empl_str *empleeCreat(int &empNum){
    cout<<"\n  New Emplyee Account creating"<<endl;
    string name; int id; double salary;
    cout<<"\n\033[33mHow many account would you like to create:\033[0m ";
    cin>>empNum;

    Empl_str* empleeCreat=new Empl_str[empNum];
    
    for(int i=0; i<empNum;i++){
        cout<<"\033[35mEmployee#"<<i+1<<"\033[0m"<<endl;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter ID: FSD";
        cin>>id;
        cout<<"Salary: ";
        cin>>salary;
        cout<<"\n";
        new (&empleeCreat[i]) Empl_str(name.c_str(),id,salary);
    }
    return empleeCreat;
}
//----------------------------------------------------------------------------
//Screen clearing
void screenClear(){
    system("clear"); //for linux 
    system("cls"); // for window 
}