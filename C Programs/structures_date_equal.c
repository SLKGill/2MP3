#include<stdio.h>

/*Write a program to compare two dates entered by user during run time.
 Make a structure named Date to store the elements day, month and year to
 store the dates. If the dates are equal, display "Dates are equal"
 otherwise display "Dates are not equal". */
struct dates
{
    int year;
    char month;
    int day;
    
} d[2];


int main()
{
    printf("Enter information for 2 dates, and I'll display if they are equal:\n");
    // storing information
    for(int i=0; i<2; ++i)
    {
        printf("Enter year(####): ");
        scanf("%d",&d[i].year);
        printf("Enter month(all lowercase): "); //assuming all lower case input
        scanf("%s",&d[i].month);
        printf("Enter day(#): ");
        scanf("%d",&d[i].day);
    }
    
    if(d[0].year==d[1].year && d[0].month==d[1].month && d[0].day==d[1].day){
        printf("Dates are equal\n");
    }
    else{
        printf("Dates are not equal\n");
    }
    return 0;
}
