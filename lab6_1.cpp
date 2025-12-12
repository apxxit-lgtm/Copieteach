#include<iostream>
using namespace std;

int main(){
    int x = 0 , y = 0;
    int i = 1;
    int num;
    while(i<0 || i>0){
    cout << "Enter an integer: ";
    cin >> num;
            if(num==0){
                i = 0;
            }
            if(num%2 == 0 && num > 0){
             x = x+1 ;
        }
        if(num%2 != 0){
            y = y+1;
        }
    }
        cout << "#Even numbers = "<<x<<endl;
        cout << "#Odd numbers = "<<y;
    return 0;
}