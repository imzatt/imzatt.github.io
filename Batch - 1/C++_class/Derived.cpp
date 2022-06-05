#include <iostream>
using namespace std;
class Base{
    private:
        int x;
        int y;
    public:
        Base(){
            cout<<"This is base without parameters!"<<endl;
        }
        Base(int x,int y){
            cout<<"\nThis is base with parameters!"<<endl;
            this->x=x;
            this->y=y;
        }
};

class Derived: public Base{
    private:
        int z;
    public:
        Derived(){
            cout<<"This is derived without parameters!"<<endl;
        }
        Derived(int i,int j,int k):Base(i,j){
            cout<<"this is derived with parameters!"<<endl;
            // Base(i,j);
            this->z=k;
        }
};

int main(){
    // Derived d1;
    Derived d2=Derived(1,2,3);

    return 0;
}