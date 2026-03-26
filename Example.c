#include <stdio.h>
#include <try.h>

int Risky1(void){
   return 0;
}

int SubRiksy2(void){
   return 1;
}

int Risky2(void){
   int result;
   
   tryretv(result, SubRisky2());
   return 0;
}

int main(void){
   int error;
   
   try {
      trycall(error, Risky1());
      trycall(error, Risky1());
   }
   catch(Error){
      printf("failed with error %d\n", error);
      return error;
   }
   
   /*...*/
   
   return 0;
}
