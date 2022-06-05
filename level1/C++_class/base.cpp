#include <iostream>
using namespace std;
class Base{
    private:
        int x=9; // only in class
    protected:
        int y=20; // in child
    public:
        int z=22;
};
class publicDerived: public Base{
public:
    void display(){
        cout<<"\n______Public Access Mode______\n";
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
};

class ProtectedDerived: protected Base{
    public:
    void display(){
        cout<<"\n______Protected Access Mode______\n";
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
};

class PrivatedDerived: private Base{
    public:
    void display(){
        cout<<"\n______Private Access Mode______\n";
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
};


int main(){
    publicDerived pd1;
    pd1.display();
    // cout<<pd1.y<<endl;
    cout<<pd1.z<<endl;

    ProtectedDerived pd2;
    // cout<<pd2.z<<endl;

    PrivatedDerived pd3;
    // cout<<pd3.z<<endl;
    

    return 0;
}