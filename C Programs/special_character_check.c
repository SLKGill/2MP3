#include <stdio.h>
int main(int argc, char** argv) {

    //find whether output entered is alphabet, digit, special character

    char input; //assuming the input will be of one type, alphabet or digit or special character
    printf("Enter any alphabet, digit, or special character\n");
    scanf("%c", &input);

    if ((input >= 65 && input <= 90 ) || (input >= 97 && input <= 122 )) { //looking for capital and lowercase letters according to ASCII table
        printf("The character you have entered is an alphabet character\n");
    }
    else if(input >+ 47 && input <= 57) { //digits according to ASCII table
        printf("The character you have entered is a numerical digit\n");
    }
    else { //taking anything that is not an alphabetical letter or a numerical digit to be a special character
        printf("The character you have entered is a special character\n");
    }
    return 0;
}
