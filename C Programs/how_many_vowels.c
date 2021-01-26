#include<stdio.h>

int main(){
    //a C program that counts the number of vowels in a string
     int vowels=0, i=0;
     char string[25], line;
     printf("Enter a string (without spaces) and I'll tell you how many vowels are in it\n");
     scanf("%s", string); //only taking strings without spaces, space will terminate scan
     
     for(i=0;string[i];i++){
         if (string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'
             ||string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'){
             //checking through all vowel characters
     vowels += 1;
         }
     }
     
     printf("Number of vowels=%d\n", vowels);
    
    return 0;
    
}
