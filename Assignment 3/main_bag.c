#include "listbag.h"
#include <malloc.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Function to get number of milliseconds elapsed since program started execution*/
double getMilliseconds() {
   return 1000.0 * clock() / CLOCKS_PER_SEC;
}

int main(int argc, char* argv[]){
  if(argc==2)
    {
     struct bag* b = (struct bag*)malloc(sizeof(struct bag));/*Create new bag*/

      initBag(b);/*Initialize*/

      char* s=argv[1];

      int n = atoi(s);/*number of elements to add*/

      int i;

      

      for( i = 0 ; i < n; ++i)

        addToBag(b, (TYPE)i);/*Add elements*/

      double t1 = getMilliseconds();/*Time before contains()*/

      int cnt=bagContains(b, (TYPE)10);
	  
	  printf("\n contains 10: %d\n",cnt);

      printf("\n%d\n",b->l->size);

      removeFromBag(b,10);
	 
      cnt=bagContains(b, (TYPE)10);


      printf("\n%d\n",b->l->size);

      double t2 = getMilliseconds();/*Time after contains()*/

      printf("%d %g\n", n, t2-t1);
    }
  else
    printf("Please enter the number of elements to add.\n"); 

  return 0;

}
