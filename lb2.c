// Check Student pass or Fail //

 //    Program  using macro expansion  //

#include<stdio.h>
#include<stdbool.h>

// User Defined macros 
 
#define RET_INVALID 1       
#define RET_FAIL 2
#define RET_PASS 3                                                                     



int DisplayResult(float fNo1)
{
   if((fNo1<0.0f) || (fNo1>100.0f))
    {
      return RET_INVALID; 
    }
   if((fNo1>=0.0f) && (fNo1<35.0f))
    {
        return RET_FAIL;
    } 
    else
      {
         return RET_PASS;
      }

}

int main()
{
   
   float fMarks = 0.0f;
   int iRet = 0;

   printf("Enter your Marks : \n");
   scanf("%f",&fMarks);

   iRet = DisplayResult(fMarks);
   if(iRet == RET_INVALID )
    {
        printf("Invalid Input\n");
    }
    else if(iRet == RET_FAIL)
      {
        printf("Fail\n");
      }
    else if(iRet == RET_PASS)
      {
        printf("Pass\n");
      }
      
    return 0;  

}