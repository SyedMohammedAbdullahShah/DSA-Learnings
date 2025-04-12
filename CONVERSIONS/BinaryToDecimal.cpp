#include<iostream>
using namespace std;
int binToDecimal(int binNum){ //!FUNCTION TO CONVERT BINARY TO DECIMAL
    int ans=0,pow=1;

    while(binNum>0){
        int rem=binNum%10;
        ans+=rem*pow;

        binNum /=10;
        pow*=2;

    }
    return ans; // decimal form
}
int main(){
    cout << binToDecimal(1010)<<endl;
    return 0;
}
