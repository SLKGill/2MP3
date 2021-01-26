#include <stdio.h>

int main(){
    
    /*Write a C program which reads data  from file and print the output
    as one character on newline*/
    
    FILE *a = fopen("a.txt", "w"); //creating the file with the text
    fprintf(a, "PROGRAMMING.");
    fclose(a);
    
    a = fopen("a.txt", "r"); //opening file in read
    char ch;
    while (fscanf(a, "%c", &ch) != EOF){
        printf("%c\n", ch); //printing each char on a new line
    }
    fclose(a);
    
    return 0;
}

