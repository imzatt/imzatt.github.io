#include <iostream>
using namespace std;
// pass by reference call by reference
void changeValue(int *ip){
    cout << "Address in function : " << ip << endl;
    *ip = *ip + 20;
    cout << "\n Value inside function : " << *ip << endl;
}

int main(){
    int num=10;
    cout << "Address of num : " << &num << endl;
    cout  << "Before function call : " << num << endl;
    changeValue(&num);
    cout << "After function call : " << num << endl;
    
    return 0;
}