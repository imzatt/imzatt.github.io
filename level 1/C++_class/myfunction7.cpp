#include <iostream>
using namespace std;
string brands[5];
int myindex = 0;
void addBrand(string brand){
    brands[myindex] = brand;
    myindex++;
}

void showBrand(){
    for (int i=0;i<myindex;i++){
        cout << brands[i] << endl;
    }
}

int main(){
    addBrand("iPhone");
    addBrand("Samsung");
    addBrand("Oppo");
    addBrand("Vivo");
    addBrand("Huwai");
    showBrand();

    
    return 0;
}