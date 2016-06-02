/* CS261- HW1- Program2.c*/
/*Name: Aviral Sinha
 *Date: April 5, 2016
 *Solution Description: Increments a and b in relation to c, then declares 3 integers from 0 to 10, passes through parameters and then prints the values. 
*/

#include <stdio.h>
#include <stdlib.h>

int foo(int* a, int* b, int c){
/*Increment a */
*a =(*a) +1;

/*Decrement b*/
*b = (*b) - 1;

/*Assign a-b to c */
c = *a - *b;

/*Return c*/
return c;

}

int main(){
/*Declare 3 integers x, y, and z and initialize them randomly to values in [0,10] */
int x = rand() % 11;
int y = rand() % 11;
int z = rand() % 11;
/*Print the values of x, y, z*/
printf("Value of x: %d \n", x);
printf("Value of y: %d \n", y);
printf("Value of z: %d \n", z);

/*Call foo() appropriately, passing x,y,z as parameters */
int FooVal = foo(&x,&y,z);

/*Print the values of x, y, z*/
printf("Value of x after: %d \n", x);
printf("Value of y after: %d \n", y);
printf("Value of z after: %d \n", z);

/*Print the value returned by foo*/
printf("value of foo: %d \n", FooVal);


/*Is the return value different than the value of z? Why?*/
/*Yes, because c is not a pointer to int z and z remains unchanged after the function foo is called */



return 0;

}
