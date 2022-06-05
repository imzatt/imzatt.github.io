#include <iostream>
using namespace std;

void findSmall(){
    int num1,num2,num3;
    cout << "\nEnter First Number : ";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;
    cout << "Enter Third Number : ";
    cin >> num3;

    if(num1<num2 && num1<num3){
        cout << "\nSmallest Number is : " << num1 << endl;
    }else if(num2<num1 && num2<num3){
        cout << "\nSmallest Number is : " << num2 << endl;
    }else {
        cout << "\nSmallest Number is : " << num3 << endl;
    }
    cout << endl;
    return findSmall();
}

int main(){
    findSmall();
    return 0;
}