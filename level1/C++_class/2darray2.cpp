#include <iostream>
using namespace std;
int main(){
    int row=2;
    int col=3;
    int number[row][col]; 
    for (int i=0;i<row;i++){ // outer loop for row
        for (int j=0;j<col;j++){ // inner loop for row
        cout << "Enter number : " ;
        cin >> number[i][j]; //numebr [0][0] number[0][1]
        cout << endl;
        } 
    }
    
    cout<<"_______Elements__________\n";
    int total=0;
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << number[i][j]<<"\t";
            total +=number[i][j];
            count++;
        }
        cout<<endl;
    }
    
    // sum of cols in 2D array
    
    float avg = total * 0.1/count;
    cout<<"Total : " << total << endl;
    cout<<"Average : " << avg << endl;
    cout<<"\n Total number : " << count << endl;
    
    for(int j=0;j<col;j++){ // col for outer loop
        int sum=0;
        for(int i=0;i<row;i++){ // rwo for inner loop
            sum += number[i][j];
        }
        cout <<"\n Sum for col " << j+1 << " : " << sum << endl ;
    }
    
// Calculate Max value in 2D array :
        int max_num=number[0][0]; // variable for max number assigned with first elements
        for(int i=0; i<row ; i++){
                int max_num_in_row=number[i][0];
            for(int j=0;j<col;j++){
                if(max_num<number[i][j]){
                    max_num=number[i][j];
                }
                
                if(max_num_in_row<number[i][j]){
                    max_num_in_row=number[i][j];
                }
            }
            cout<<"\nMax number is row : " << i << " is " << max_num_in_row << endl;
        }
        
        cout << "Calculate Max value in 2D array \n";
        cout << "Max value is : " << max_num << endl;
    return 0;
}
