#include <iostream>
using namespace std;
int main(){
    
    int sum1 , sum2 , sum3 ;
    int avg1 , avg2 , avg3 ;
    int count;
    cout << "Weather Information : ";
    cin >> count;

    int weather[count+2][4];
    for(int i=0;i<count;i++){
        cout << "Enter number of months : " << i+1 << endl;
        for(int j=0;j<4;j++){
            if(j==0){
                weather[i][j] = i+1;
            }else if(j==1){
                cout << "Enter Rain : ";
                cin >> weather[i][j];
                sum1+=weather[i][1];
                avg1=sum1/count;
            }else if(j==2){
                cout << "Enter Wind : ";
                cin >> weather[i][j];
                sum2+=weather[i][2];
                avg2=sum2/count;
            }else{
                cout << "Enter Temperature : ";
                cin >> weather[i][j];
                sum3+=weather[i][3];
                avg3=sum3/count;
            }
        }
    }


    //Output
    cout << "\nNumber of Months : " << count << endl;
    cout << "\nMonth \tRain \tWind \tTemp" << endl;
    for(int i=0;i<count;i++){
        for(int j=0;j<4;j++){
            cout << weather[i][j] << "\t";
        }
        cout << endl;
    } 
    
    cout << "Total" << "\t" << sum1 <<"\t" << sum2 <<"\t"<< sum3 ;

    cout << endl;

    cout << "Averge"  << "\t" << avg1 <<"\t" << avg2 <<"\t"<< avg3 ;


    return 0;
}