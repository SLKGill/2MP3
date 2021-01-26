#include <stdio.h>

int main()
{
    //concatenate two file and write the output in third file
    
    FILE *f1, *f2, *f3;
   
    f1 = fopen("f1.txt", "w"); //writing to the first 2 files initially
    fprintf(f1, "I am a student.");
    fclose(f1);
    
    f2 = fopen("f2.txt", "w");
    fprintf(f2, "I am 19 years old.");
    fclose(f2);
    
    
    char str1[200], str2[200], str3[200];
    f1 = fopen("f1.txt", "r"); //opening the 2 files to read
    f2 = fopen("f2.txt", "r");
    f3 = fopen("f3.txt", "w+"); //adding the third file to write the contents into it
    
    fscanf(f1, "%[^EOF]", str1); //scanning file contents into the char arrays
    fscanf(f2, "%[^EOF]", str2);
    fprintf(f3, "%s %s", str1, str2); //writing to f3
    
    fseek(f3, 0, SEEK_SET); //validation
    fscanf(f3, "%[^EOF]", str3);
    printf("%s\n", str3); //outputting contents of third file
    
    fclose(f1);
    fclose(f2);
    fclose(f3);
    
    return 0;
}
