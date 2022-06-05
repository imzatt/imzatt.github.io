#include <iostream>
using namespace std;

class Employee{
    private:
        int salary;
        string name;
        int total;
    public:
        Employee(){
        }
        Employee(int salary,string name){
            this->salary=salary;
            this->name=name;
            this->total=total;
        }
        void displayInfo(){
            cout<<"\nName: "<<name<<"\tSalary: "<<salary<<endl;
        }
        void salaryIncrease(int amount){
            this->salary +=amount;
        }
        void totalSalary(){
            this->salary=salary;
            int total = total + salary;
        }
        void displayT(){
            int total;
            cout<<"\nTotal Salary : "<<total;
        }
};

int main(){
    // accept employee data from user input
    Employee emp[4]; 
    int salary;
    string name;

    for(int i=0;i<4;i++){
        cout<<"Enter Employee: "<<i+1<<"Information: "<<endl;
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter Salary: ";
        cin>>salary;
        cin.ignore();
        emp[i]=Employee(salary,name);
    }

    // display info
    cout<<"\n_______Employee List Information________\n";
    for(int i=0;i<4;i++){
        emp[i].displayInfo();
    }

    // salary increase
    for(int i=0;i<4;i++){
        emp[i].salaryIncrease(100);
    }

    // display info
    cout<<"\n_______Updated Employee List Information_______\n";
    for(int i=0;i<4;i++){
        emp[i].displayInfo();
    }

    // Total Salary
    for (int i=0;i<4;i++){
        emp[i].totalSalary();
    }

    for (int i=0;i<1;i++){
        emp[i].displayT();
    }

    return 0;
}