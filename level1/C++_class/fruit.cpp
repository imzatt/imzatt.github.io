#include <iostream>
using namespace std;
class Fruit
{
    public:
        string name;
        int price;
        void setData(string sa,int price){
            name=sa;
            this->price=price;
        }
        void showData(){
            cout << "\nName : " << name;
            cout << "\nPrice : " << price << endl;
        }
};

int main(){
    Fruit fruit1;
    Fruit fruit2;

    fruit1.setData("Mango",700);
    fruit1.showData();
    fruit1.name="Banana"; // update member data
    fruit1.price=900; // update member data
    fruit1.showData();
    cout << "\nData of Fruit2: ";
    fruit2.name="Papaya";
    fruit2.price=1300;
    fruit2.showData();
    

    return 0;
}