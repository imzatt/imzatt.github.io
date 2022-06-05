#include <iostream>
using namespace std;
void checkEvenOdd(int num){
    if(num%2){
        cout << num << " is Odd" << endl;
    }else{
        cout << num << " is Even" << endl ;
    }
}

int main(){
    int num1=235 , num2=456 , num3=34 ;
    checkEvenOdd(num1);
    checkEvenOdd(num2);
    checkEvenOdd(num3);

    return 0;
}