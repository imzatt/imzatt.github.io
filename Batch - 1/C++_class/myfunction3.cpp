#include <iostream>
using namespace std;

void changeValue(int num){
    num =num + 20;
    cout << "\n Value inside function : " << num << endl;
}

int main(){
    int num=10;
    cout  << "Before function call : " << num << endl;
    changeValue(num);
    cout << "After function call : " << num << endl;
    
    return 0;
}