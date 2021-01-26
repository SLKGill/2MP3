#include<stdio.h>

//a program to add and subtract two complex numbers using structures to function

struct complex{
    int realNumber, imaginaryNumber;
}*ptr,n[2]; //structure array

void add(struct complex *ptr){ //passing location of numbers using pointers
    printf("Addition= %d + i%d\n", (*ptr).realNumber+(*(ptr+1)).realNumber, (*ptr).imaginaryNumber+(*(ptr+1)).imaginaryNumber); //performing arithmetic in print
}

void sub(struct complex *ptr){
    printf("Subtraction= %d + i%d\n", (*ptr).realNumber-(*(ptr+1)).realNumber, (*ptr).imaginaryNumber-(*(ptr+1)).imaginaryNumber);
}

int main(){
    
    ptr=n;
    
    for (int i=0; i<2; i++){ //inputs for complex #1 and #2
        printf("Enter the real number: ");
        scanf("%d", &ptr->realNumber);
        printf("Enter the imaginary number: ");
        scanf("%d", &ptr->imaginaryNumber);
        ptr++;
    }
    
    ptr=n;
    
    add(ptr);
    sub(ptr);
    return 0;
}
