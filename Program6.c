/*CS261- HW- Program6.c */
/* Name: Aviral Sinha
 * Date: 7 April 2016
 * Solution description: Lower case or Upper case letters will be converted based on their flags 
 * */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>


/*converts ch to upper case, assuming it is in lower case currently*/
char toUpperCase(char ch){
     return ch-'a'+'A';
}

/*converts ch to lower case, assuming it is in upper case currently*/
char toLowerCase(char ch){
     return ch-'A'+'a';
}

void lowerCase(char* word){
     /* Convert to lower case letters */
	 int i;
	 for(i=0; word[i] !='\0'; i++){ 
		 if(word[i] >= 'A'&&word[i] <='Z'){ 
			 word[i] = toLowerCase(word[i]);
		 }
	 }
	 
}

void upperCase(char* word){
	/* Convert to upper case letters */
	 int i;
	 for(i=0; word[i] !='\0'; i++){ 
		 if(word[i] >= 'a'&&word[i] <='z'){ 
			 word[i] = toUpperCase(word[i]);
		 }
	 }
}

int main(){
    /* Input a word and flag */
    char w[500]; 
	int f;
	printf("Enter word: ");
	scanf("%s", w); 
	printf("1 to convert to upper case and 0 to convert to lower case: ");
	scanf("%d",&f);
	
    /* Print the input word and flag */
	printf("Your word: %s" ,w);
	printf("\nYour flag: %d", f);
	
    /* Based on the value of flag
 *    Call lowerCase()  or   Call upperCase() */
	  if( f== 0){
		  lowerCase(w);
	  }else if( f == 1){
		  upperCase(w);
	  }else{
		  printf("\nFlag entered is out of range.  \n");
	  }
    
    /* Print the new word */
	printf("\nThe Word after changes made: %s \n" ,w);
	
    
    return 0;
}
