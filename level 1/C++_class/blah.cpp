#include <iostream>
using namespace std;
int rno;
string name;
string course;
class Student{
    private:
        int rno;
        string name;
        string course;
    public:
        Student(){
        }
        Student(int rno,string name,string course){
            this->rno=rno;
            this->name=name;
            this->course=course;
        }
        void display(){
            cout<<"\nRoll No : "<<rno<<"\tName : "<< name<<"\tCourse : "<< course << endl;
        }
        void getData(){
            cout<<"\nRoll No : "<<rno<<"\tName : "<< name<<"\tCourse : "<< course << endl;
        }
};

int main(){
    Student stu[5];

        for(int i=0;i<5;i++){
        cout<<"Enter Student : "<<i+1<<" Information: "<<endl;
        cout<<"Enter Roll No: ";
        cin>>rno;
        cin.ignore();
        cout<<"Enter Name : ";
        getline(cin,name);
        cout<<"Enter Course : ";
        getline(cin,course);
        stu[i]=Student(rno,name,course);
        }

        for(int i=0;i<5;i++){
            stu[i].display();
        }

        int num;
        cout<<"Enter Roll No: ";
        cin>>num;
        for(int i=0;i<1;i++){
            stu[i].getData();
        }

    return 0;
}