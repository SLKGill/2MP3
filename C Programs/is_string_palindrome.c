#include<stdio.h>
#include<string.h>

int main(){
    //determine whether a given string is a palindrome
     char inputString[25];
     int i, len;
     int palindrome = 1;
    
     printf("Enter a string (without spaces) and I'll tell you if it's a palindrome\n");
     scanf("%s", inputString); //scan terminates with space
    
     len = strlen(inputString);
    
     for(i=0;i<len;i++){
     if(inputString[i] != inputString[len-i-1]){ //comparing string forward to backward
     palindrome = 0; //if not equal not true therefore sets palindrome to false
     break;
     }
     }
    
     if (palindrome){
     printf("Your input is a palindrome\n");
     }
     else{
     printf("Your input is not a palindrome\n");
     }

}
