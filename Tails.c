#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
  int i, random,count =0 ;
  printf("Rolling dice...\n");

  srand(time(NULL));

  for (i = 1; i <= 2; i++) {
    random = rand() % 6 + 1;
    printf("Die %d: %d\n", i, random);
    count += random;
  }
  printf("Total value: %d\n", count);
  
if(count>=7){
    printf("you won!\n");
  }
  else printf("you lose!\n",);
  return 0;
}
