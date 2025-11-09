#include "softHeader.h"

int main(){
    //Company Name
    Empl_str::companyNamePrint();
    
    // Creating Employee 
    int empNum=0;
    Empl_str *emplee=nullptr;
    emplee = empleeCreat(empNum);

    // showing Emploee Data
    cout<<"--------------------------------------"<<endl;
    cout<<"New "<<empNum<<" Accounts created"<<endl;
    cout<<"--------------------------------------"<<endl;
    for(int i=0; i<empNum;i++){
        emplee[i].show();
    }
    cout<<"--------------------------------------"<<endl;

    //using Deep copy constructor
    cout<<"\033[36mNew Employee created by deep copy constuctor:\033[0m"<<endl;
    Empl_str DeepCopyEmp=emplee[0];
    DeepCopyEmp.show();
    cout<<"--------------------------------------"<<endl;
    cout<<"\033[36mNo effect on orignal object\033[0m\nAfter Change\n"<<endl;
    DeepCopyEmp.setSalary(1200.3);
    emplee[0].twoObj(DeepCopyEmp);

    cout<<"--------------------------------------"<<endl;
    //Salary swapping by passing obj to function
    cout<<"Swapping salary: "<<endl;
    emplee[0].swapSalary(DeepCopyEmp);
    emplee[0].twoObj(DeepCopyEmp);

    //Totoal Emp
    cout<<"Total Employee Created: "<<Empl_str::totalEmp();
    //deleting dynamic variable
    delete [] emplee;
    return 0;
}
