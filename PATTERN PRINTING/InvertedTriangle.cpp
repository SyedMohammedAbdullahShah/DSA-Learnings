#include <iostream>
using namespace std;//INVERTED TRIANGLE NUMBERS 
int main(){
    int n=4;
    for (int i=0;i<n;i++){
//spaces
        for(int j=0 ;j<i;j++){
            cout <<" ";

        }
        //num
        for(int j=0;j<n-i;j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}
