// Accept number from user check its perfect number or not //

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo1)
{
  int  iCnt = 0;
  int  iSum = 0;
   
    if(iNo1<0)  
    {
        iNo1 = -iNo1;    
    }  
    for(iCnt = 1 ;iCnt<=(iNo1/2) ; iCnt++ )        
     {
        if((iNo1 % iCnt) == 0)
         {
            iSum = iSum + iCnt;
         }
    }
    if(iSum == iNo1)
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

   bRet = CheckPerfect(iValue);
   if(bRet == true)
   { 
    printf("%d is Perfect number : \n",iValue);
   }
   else
   {
    printf("%d is not Perfect number : \n",iValue);
   }

  return 0;
}