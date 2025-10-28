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
   
   tryret(Result, SubRisky2());
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