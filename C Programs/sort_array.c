#include<stdio.h>

int main(){
    //assort an array of nine integers in ascending order, prints assorted array
    
    int array[9], i, j, move;
     
    printf("Enter 9 integers and I'll sort them in ascending order\n");
    //using bubble sort approach
     
    for (i=0; i<9; i++){
    scanf("%d", &array[i]);
    }
     
    for (i=0; i<8; i++){
        for (j=0; j<8-i; j++){
            if (array[j] > array[j+1]){ //switch spots if greater
            move=array[j];
            array[j]=array[j+1];
            array[j+1]=move;
            }
        }
    }
     
    printf("Sorted List= ");
     
    for (i=0; i<9; i++){
    printf("%d, ", array[i]);
    }
     
    return 0;
    
    
    
    
    
    
}
