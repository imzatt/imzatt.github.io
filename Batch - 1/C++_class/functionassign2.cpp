#include <iostream>
using namespace std;
void afterPrice(){

    int myPrice,myDis;
    cout << "\nItem price : ";
    cin >> myPrice;
    cout << "Discount value : ";
    cin >> myDis;

    int discount = myPrice * myDis * 0.01;
    int price = myPrice - discount;

    cout << "After discount, price : " << price << endl;
    cout << endl;

}

void forLoan(){
    
    int loan,rate,month;
    cout << "Enter loan amount : ";
    cin >> loan;
    cout << "Enter interest rate : ";
    cin >> rate;
    cout << "Enter number of month : ";
    cin >> month;

    cout << "------------------------------------" << endl;

    int monthy = loan * rate * 0.01;
    int total = monthy * month ; 

    cout << "Monthly interest : " << monthy << endl;
    cout << "Total Interest : " << total << endl;
    cout << endl;

}

int main(){
    afterPrice();
    forLoan();
    return 0;
}