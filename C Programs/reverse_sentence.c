#include <stdio.h>

int main(){
    // recursion to reverse a sentence
    
    printf("Enter a sentence and I'll reverse it.\n");
    void reverse(); //declare function
    reverse(); //call function
    
}

void reverse(){
   
    char i;
    scanf("%c", &i);
    
    if (i!='\n'){ //including spaces and special characters in a sentence, terminates at enter
        reverse(); //call function, recursive step
        printf("%c", i);
    }
}
