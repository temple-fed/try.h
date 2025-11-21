#include <stdio.h>
#include <try.h>

int Risky1(void){
   return 0;
}

int SubRiksy2(void){
   return 1;
}

int Risky2(void){
   int Result;
   
   tryretv(Result, SubRisky2());
   return 0;
}

int main(void){
   int Error;
   
   try {
      trycall(Error, Risky1());
      trycall(Error, Risky1());
   }
   catch(Error){
      printf("failed with error %d\n", Error);
      return Error;
   }
   
   /*...*/
   
   return 0;
}
