// Check Student result  //
 /*
    0 to 35    Fail                          (35 is exclusive // Means 35 in pass //)
    35 to 50   Pass                          (50 is exclusive)
    50 to 60   Second class                  (60 is exclusive)
    60 to 75   First class                   (75 is exclusive)
    75 to 100  First class with distinction  (100 is inclusive)
 
 */



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

    else if((fNo1>=35.0f) && (fNo1<50.0f))
    {
        return 3;
    } 

    else if((fNo1>=50.0f) && (fNo1<60.0f))
    {
        return 4;
    } 
    
    else if((fNo1>=60.0f) && (fNo1<75.0f))
    {
        return 5;
    }

    else if((fNo1>=75.0f) && (fNo1<=100.0f))
      {
         return 6;
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
    else if(iRet == 4)
      {
        printf("Second class\n");  
      }
     else if(iRet == 5)
      {
        printf("First class\n");  
      }  
     else if(iRet == 6)
      {
        printf("First class with distinction\n");  
      }

    return 0;  

}