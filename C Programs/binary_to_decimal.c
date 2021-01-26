#include <stdio.h>
#include <math.h> //including math library for power operator

int main(){
    //convert binary number to decimal using function with arguments and return type
    int num, dec;
    printf("Enter a single binary number and I'll convert it to decimal: ");
    //binary number should be 8digits without spaces: xxxxxxxx
    scanf("%d",&num);
    
    int binaryToDecimal(); //declaring function
    dec = binaryToDecimal(num); //variable to store the return value in
    //passing num to function as argument
    printf("Decimal value: %d\n", dec);
    
    return 0;

}

int binaryToDecimal(int bin){
    int dec=0;
    int i=0, remainder;
    while (bin!=0){ //calculating decimal value of binary number
        remainder=bin%10;
        bin=bin/10;
        dec+=remainder*pow(2,i);
        ++i;
    }
    return dec; //return decimal value to main
}
