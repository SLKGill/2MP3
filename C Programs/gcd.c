#include <stdio.h>

int main(){
    //function without arguments and without return type to find greatest common divisor 2 numbers
    void gcd(); //creating function, no arguments or return
    gcd();
}

void gcd(){
    
    int num1, num2;
    int gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2); //getting input in function
    
    for(int i=1; i<=num1 && i<=num2; ++i){
        if(num1%i==0 && num2%i==0){  // Checks if i is factor of both integers
            gcd = i;
        }
    }
    printf("Greatest Common Divisor: %d\n", gcd);
    
}
