#include <stdio.h>

//structure to store student number, name, age(16 to 21), address of students.
//Store data of 8 students, take values of variables from user during run time

struct student{
    int studentNumber;
    char name[30];
    int age;
    char address[50];
}s[8]; //structure array

//function to print name, student number of students with age between 17 to 19
void ageCheck(){
    printf("Students with ages between 17-19:\n");
    for (int k=0; k<8; k++){
        if (s[k].age>=17 && s[k].age<=19){
            printf("%s %d\n", s[k].name, s[k].studentNumber);
        }
    }
}

//function to print the names of students with odd student number
void oddStudentNum(){
    printf("Student with odd student numbers:\n");
    for (int j=0; j<8; j++){
        if ((s[j].studentNumber%2) != 0) {
            printf("%s\n", s[j].name);
        }
    }
}

int main(){
    //assuming user enters data correctly in format specified
    printf("Enter name, student number, age(between 16-21), and address of 8 students.\nUse underscores for the spaces. Press Enter  once to start, then enter after each input):\n");
    for (int i=0; i<8; i++){
        scanf(" %s[^\n] %d %d %s[^\n]", &s[i].name, &s[i].studentNumber, &s[i].age, &s[i].address);
    }
    ageCheck(); //function for part a
    oddStudentNum();//function for part b
    return 0;
}
