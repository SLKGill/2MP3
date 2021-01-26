#include <stdio.h>

int main(){
   
    //find out where a given number is a palindrome or not using a while loop
    
    int input, backwardNum = 0, mod, num;
    
    printf("Enter a number and I'll check if it is a palindrome or not\n");
    scanf("%d", &input);
    num = input;
    
    while( input!=0 )
    {
        //switching the entered number to be written backwards
        mod = input%10;
        backwardNum = backwardNum*10 + mod;
        input /= 10;
    }
    
    //checking whether the original input is equal to the backward input for palindrome
    if (num == backwardNum)
        printf("The number entered is a palindrome\n");
    else
        printf("The number entered is not a palindrome\n");
    
    return 0;
    
    
}

