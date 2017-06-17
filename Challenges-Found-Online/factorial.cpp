#include <iostream>
using namespace std;


int Factorial(int num) {
    //Zero and negative integers return 1
    if(num<=1){
        return 1;
    }
    else{
        return num*Factorial(num-1);
    }
    return num;
    
}


int main() {
    int toFactorialize=0;
    
    // Request an int to factorialize
    cout << "Please enter an integer to factorialize (non-integers will be read as 0): ";
    cin >> toFactorialize;
    
    cout << "The factorial of " << toFactorialize << " is " << Factorial(toFactorialize) <<endl;
    
    return 0;
    
}
