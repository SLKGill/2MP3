#include<stdio.h>

int main(){
    //returns largest number in 4x5 multidimensional array
    
    int matrix[4][5], i, j, biggest;
    for(i=0; i<4; i++){ //getting matrix inputs
        for(j=0;j<5;j++){
        printf("Enter value for matrix at location [%d][%d]:", i, j);
        scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix you entered is: \n");
    for(i=0;i<4;i++){ //outputting the matrix inputted to show the user
        for(j=0;j<5;j++){
        printf("%d\t",matrix[i][j]);
        }
    printf("\n");
    }
     
    biggest = matrix[0][0]; //starting at the first position
     
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(biggest<matrix[i][j]){ //comparing every value in matrix for largest value
            biggest=matrix[i][j];
            }
        }
    }
     
    printf("Largest element in array=%d\n",  biggest);
    return 0;
    
}
