#ifndef __TRY_H__
#define __TRY_H__

/*  try.h | temple-fed
*   
*   Emulates try catch behaviour using the preprocessor.
*   Does not 'throw' using something like longjump, it simply just does result checking.
*/

#ifndef __TRY_SUCCESS__
#   define __TRY_SUCCESS__   (0)
#endif

#define try                      do
#define tryfailed(error)         (error != __TRY_SUCCESS__)
#define tryret(error, result)    error = (result); if (tryfailed(error)) return
#define trycall(error, result)   error = (result); if (tryfailed(error)) break
#define catch(error)             while (0);        if (tryfailed(error))

/*  Example usage:
*   
*   #include <try.h>
*   
*   int main(void){
*      enum error_t error;
*      
*      try {
*         // Try calling some functions.
*         trycall(error, func1());
*         trycall(error, func1());
*      } catch (error){
*         // Handle the error.
*      }
*      
*      return 0;
*   }
*   
*/

#endif /*   __TRY_H__ EOF   */
