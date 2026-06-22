// Check prime number or not //

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo1)
{
  int  iCnt = 0;
  int  iCount = 0;
   
    if(iNo1<0)  
    {
        iNo1 = -iNo1;    
    }  
    for(iCnt = 2 ;iCnt<=(iNo1/2) ; iCnt++ ) 
     {
        if((iNo1 % iCnt) == 0)
         {
            iCount++;
            break;
         }
    }
    if(iCount == 0)
     {
        return true ;
     }
    else 
    {
        return false;
    } 
}

int main()
{
   int iValue = 0;
   bool bRet = false ;

   printf("Enter a number :\n");
   scanf("%d",&iValue);

   bRet = CheckPrime(iValue);
   if(bRet == true)
   { 
    printf("%d is Prime number : \n",iValue);
   }
   else
   {
    printf("%d is not Prime number : \n",iValue);
   }

  return 0;
}