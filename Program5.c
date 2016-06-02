/* CS261- HW1 - Program5.c*/
/* Name:Aviral Sinha
 * Date: 7 April 2016
 * Solution description:Declare the integer n, allocate the memory, then generate random IDs for the scores, print the array, pass the array, then print the contents. 
 */
 
#include <stdio.h>
#include <stdlib.h>

struct student{
	char initials[2];
	int score;
};

void sort(struct student* students, int n){
     /*Sort the n students based on their initials*/  
		int a;
		int b;
		int tempscore;
		int tempid;
		
		for( a = 0; a < (n-1); a++){ /*bubble sort begins*/ 
			for(b=0; b < (n-a-1); b++){
				if(students[b].initials[0] > students[b+1].initials[0]){
					tempscore = students[b].score;
					tempid = students[b].initials[0];
					students[b].score = students[b+1].score;
					students[b].initials[0] = students[b+1].initials[0];
					students[b+1].score = tempscore;
					students[b+1].initials[0] = tempid;
					}
					
				}
			
		}
}

int main(){
    /*Declare an integer n and assign it a value.*/
    int n = 65;
	if( n <= 0){
		printf("\n n needs to be greater than 0!!!!!!!!");
	}
	
    /*Allocate memory for n students using malloc.*/
	struct student* students = malloc(n*(sizeof(struct student)));
    
    /*Generate random IDs and scores for the n students, using rand().*/
    int i;
	char c1, c2;

	
	for(i=0; i<n; i++){
		c1 = rand()%26 + 'A';
		c2 = rand()%26 + 'A';
        students[i].initials[0] = c1;
		students[i].initials[1] = c2;
		students[i].score = (rand()%100 +1);
	}
    /*Print the contents of the array of n students.*/
	 for(i=0; i<n; i++){
         printf("Initials: %s Score: %d \n", students[i].initials, students[i].score);
		 }
    /*Pass this array along with n to the sort() function*/
	 sort(students,n);
    
    /*Print the contents of the array of n students.*/
		for(i=0; i<n; i++){
         printf("Initials After Sort: %s Score: %d \n", students[i].initials, students[i].score);
		 }
    return 0;
}
