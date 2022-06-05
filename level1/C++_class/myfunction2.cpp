#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
using namespace std;
int main(){

    cout << "\n___Function of cctype Libray_____\n";
    cout << "Is alpha ('9') : " << isalpha('9') << endl ;
    cout << "Is alpha ('A') : " << isalpha('A') << endl ;
    cout << "Is digit ('9') : " << isalpha('A') << endl ;
    cout << "Lower case of 'A' : " << (char)tolower('A') << endl ;

    cout << "\n___Function of cMath Library_____\n";
    cout << "3 power 5 is : " << pow(3,5) << endl;
    cout << "Square root of 36 is : " << sqrt(36) << endl;
    cout << "Value of sin(30) is : " << sin(30) << endl;
    cout << "Value of log(10) : " << log(10) << endl;

    cout << "\n___Function of iomanip Library____\n";
    cout << "Spring" << setw(20) << "Days" << endl;
    cout << "Love" << setw(26) << "Yourself" << endl;

    return 0;
}