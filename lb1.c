// Check Student pass or Fail //
 

#include<stdio.h>
#include<stdbool.h>

int DisplayResult(float fNo1)
{
   if((fNo1<0.0f) || (fNo1>100.0f))   
    {
      return 1; 
    }
   if((fNo1>=0.0f) && (fNo1<35.0f))
    {
        return 2;
    } 
    else
      {
         return 3;
      }

}

int main()
{
   
   float fMarks = 0.0f;
   int iRet = 0;

   printf("Enter your Marks : \n");
   scanf("%f",&fMarks);

   iRet = DisplayResult(fMarks);
   if(iRet == 1)
    {
        printf("Invalid Input\n");
    }
    else if(iRet == 2)
      {
        printf("Fail\n");
      }
    else if(iRet == 3)
      {
        printf("Pass\n");
      }
      
    return 0;  

}