/*CS261-HW1= Program1.c */
/*Name: Aviral Sinha
 * Date: April 4, 2016
 * Solution Description:declares the integer, prints the address, calls the address and then prints the value. 
 */
 
#include <stdio.h>
#include <stdlib.h> 

void fooA(int* iptr){
	/*Print the value pointed to by iptr*/
	printf("Value pointed to by iptr: %d \n", *iptr);

	/*Print the address pointed to by iptr*/
	printf("Address pointed to by iptr: %p \n", iptr);

	/*Print the address of iptr itself*/
	printf("Address of Iptr: %p \n", &iptr);

}

int main(){
	/*Declare an integer x*/
	int x = 305;
	
	/*Print the address of x*/
	printf("The Address pointed to by x: %p\n", &x);
	
	/*Call fooA() with the address of x*/
	fooA(&x);

	/*Print the value of x*/
	printf("The value of x is: %d\n", x);

return 0;
}


