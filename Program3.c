/* CS261- HW1 - Program3.c*/
/* Name: Aviral Sinha
 * Date: 6 April 2016
 * Solution description: Takes the values for 10 students, allocates, generates, outputs, and then calls back. This helps show the min, max, and avg of the 10 students.
 */
 
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct student{
	char initials[2];
	int score;
};

struct student* allocate(){
     /*Allocate memory for ten students*/
    struct student* students = malloc(10*(sizeof(struct student)));
     /*return the pointer*/
	return students;
}

void generate(struct student* students){
     /*Generate random initials and scores for ten students.
	The two initial letters must be capital and must be between A and Z. 
	The scores must be between 0 and 100*/
     int i;
     char c1, c2;
	
     for(i=0; i<10; i++){
	c1 = rand()%26 + 'A';
	c2 = rand()%26 + 'A';
students[i].initials[0] = c1;
	students[i].initials[1] = c2;
	students[i].score = (rand()%100 +1);
}
}

void output(struct student* students){
     /*Output information about the ten students in the format:
              1. Initials  Score
              2. Initials  Score
              ...
              10. Initials Score*/
		int i;
		for(i=0; i<10; i++){
			printf("Initials: %s Score: %d \n", students[i].initials, students[i].score);
		}
}

void summary(struct student* students){
     /*Compute and print the minimum, maximum and average scores of the ten students*/
     int i;
	int sum =0;
	int avg = 0;
	int min = 100; 
	int max = 0;  

	for(i=0; i<10; i++){
	if(students[i].score>max){
		max = students[i].score;
	}
}
	for(i=0; i<10; i++){
	if(students[i].score<min){ 
		min = students[i].score;
	}
}
	for(i=0; i<10; i++){
		sum = sum +students[i].score;
	}
	avg = sum/10;
	
	printf("Min: %d \n" ,min);
	printf("Max: %d \n" ,max);
	printf("Avg: %d \n" ,avg);
}


void deallocate(struct student* stud){
     /*Deallocate memory from stud*/
	if(stud != NULL){
	free(stud);
	}
}

int main(){
    struct student* stud = NULL;
    
    /*call allocate*/
    stud = allocate();

    /*call generate*/
    generate(stud);

    /*call output*/
    output(stud);
    
    /*call summary*/
    summary(stud);
    
    /*call deallocate*/
       deallocate(stud);
    return 0;
}
