//  Time complexity O (N/2)  

// Accept the from user and display only factors of that number //

#include<stdio.h>

void DisplayFactor(int iNo1)
{
   int iCnt = 0;

   printf("Factors of %d are\n",iNo1);

   for(iCnt=1; iCnt<=(iNo1/2); iCnt++)      
   {                                       
    if( (iNo1 % iCnt) == 0)
    {
        printf("%d \n",iCnt);
    } 
   }
}

int main()
{
    int iValue = 0;
    

    printf("enter a number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
    
}
