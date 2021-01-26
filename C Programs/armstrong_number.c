#include <stdio.h>

int main(){
    
    //find armstrong number of a given number using for loop

    int input=0, num, armsum=0, digit;
    
    printf("Enter a number and I'll find the armstrong number\n");
    scanf("%d", &input);
    
    num = input;
    
    for(; input>0; input/=10){
        digit = input%10;
        
        armsum += (digit*digit*digit);
    }
    printf("The armstrong number is %d\n", armsum);
    
    return 0;
}
