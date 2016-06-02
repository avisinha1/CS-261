/* CS261- HW1 - Program4.c*/
/* Name: Aviral Sinha
 * Date: 6 April 2016
 * Solution description: Declares integer, assigns value of 20, then randomly fills array, prints, and passes array and then prints again. 
 */
 
#include <stdio.h>
#include <stdlib.h>

void sort(int* number, int n){
     /*Sort the given array number , of length n*/
		int a;
		int b;
		int c;

		for( a = 0; a < (n-1); a++){
			for(b=0; b < (n-a-1); b++){
				if(number[b] > number[b+1]){
					c = number[b];
					number[b] = number[b+1];
					number[b+1] = c;
				}
			}
	}
   
}

int main(){
    /*Declare an integer n and assign it a value of 20.*/
         int n = 20;
   
    /*Allocate memory for an array of n integers using malloc.*/
	 int *array = malloc(n*sizeof(int));
    
    /*Fill this array with random numbers, using rand().*/
	 int i;
	 for(i=0; i<n; i++){ 
		array[i] = (rand()) + 1; 
	}    
    /*Print the contents of the array.*/
	 for(i=0; i<n; i++){
		printf("contents of array %d \n", array[i]);

    /*Pass this array along with n to the sort() function of part a.*/
 	 sort(array, n);
   
    /*Print the contents of the array.*/    
	 for(i=0; i<n; i++){
	 printf("Contents are sorted: %d \n", array[i]);
}  
    
}
return 0;
}
