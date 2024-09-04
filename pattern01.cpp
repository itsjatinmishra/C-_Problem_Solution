// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number for print the value: ";
    cin>>n;
    
    //numeric inverted parymid 
    for(int row = 0; row < n; row = row + 1){
        for (int col = 0; col < n - row; col = col + 1){
            cout<<col+1<<"";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;
    
    //numberic parymid
    for (int row = 0; row < n; row = row + 1){
        for (int col = 0; col < row + 1; col = col + 1){
            cout<< col + 1 << " ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    
    for (int row = 0; row < n; row = row + 1){
        for (int col = 0; col< n- row; col = col + 1){
            cout<< "*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    
    for (int row = 0; row < n; row = row + 1){
        for (int col = 0; col < row + 1; col = col + 1){
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;
    
    for(int row = 0; row < 3; row = row + 1){
        //inner loop
        for (int col = 0; col<5; col = col + 1){
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;
    
    for (int row = 0; row < 4; row = row + 1){
        //inner loop
        for (int col = 0; col < 4; col = col + 1){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;
    
    int ROWS = 10;
    int COLS = 7;
    
    for (int row = 0; row<ROWS; row = row + 1){
        //inner loop
        for(int col = 0; col<COLS; col = col + 1){
            //if zero'th or last row, then print start
            if(row == 0 || row == ROWS - 1){
                cout<<"*";
            }else{
                if(col == 0 || col == COLS-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;
    return 0;
}
