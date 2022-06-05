#include <iostream>
using namespace std;
string cities[3]; //global variable
// function to accept city name
void initializeDate(){
    for( int i=0;i<3;i++){
        cout << "Enter city name : ";
        getline(cin,cities[i]);
    }
} 

void showData(){
    cout << "_____Your Cities_____" << endl;
    for(int i=0;i<3;i++){
        cout << cities[i] << endl; 
    }
}

int main(){
    initializeDate();
    showData();
    return 0;
}