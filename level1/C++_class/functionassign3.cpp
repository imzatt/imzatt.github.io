#include <iostream>
using namespace std;
string itemList[5][3];

void initItem(){
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if(j==0){
                cout << "\nEnter BarCode : ";
                cin >> itemList[i][j];
            }else if(j==1){
                cout << "Enter Item : ";
                cin >> itemList[i][j];
            }else {
                cout << "Enter Price : ";
                cin >> itemList[i][j];
            }
        }
    }
    cout << endl;
}

void showAllitem(){
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout << itemList[i][j] << "\t" << "\t";
        }
        cout << endl;
    }
}

void finditem(){
    string barcode;
    cout << "\nEnter Barcode : ";
    cin >> barcode;

    cout << "\nBarcode \tItem \t\tPrice" << endl;
    if(barcode==itemList[0][0]){
        cout << itemList[0][0] << "\t\t" << itemList[0][1] << "\t\t" << itemList[0][2] << endl;
    }else if(barcode==itemList[1][0]){
        cout << itemList[1][1] << "\t\t" << itemList[1][1] << "\t\t" << itemList[1][2] << endl;
    }else if(barcode==itemList[2][0]){
        cout << itemList[2][0] << "\t\t" << itemList[2][1] << "\t\t" <<  itemList[2][2] << endl;
    }else {
        cout << itemList[3][0] << "\t\t" << itemList[3][1] << "\t\t" <<  itemList[3][2] << endl;
    }
}



int main(){
    initItem();
    cout << "\nBarcode \tItem \t\tPrice" << endl;
    showAllitem();
    finditem();
    return 0;
}