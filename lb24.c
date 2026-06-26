// Check Mnimum/Smallest Element in Array //

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iMini = Arr[0], iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
      if(Arr[iCnt]<iMini)
      {
        iMini = Arr[iCnt];
      }
    }
    return iMini;
}

int main()
{
   int *ptr = NULL;
   int iLength = 0, i = 0, iRet = 0;

   printf("Enter number of Elements : ");
   scanf("%d",&iLength);

   ptr = (int*)calloc(iLength,sizeof(int));

   printf("Enter a elements : \n");
   for(i = 0; i < iLength; i++)
   {
     scanf("%d",&ptr[i]);
   }

   iRet = Minimum(ptr,iLength);
   printf("Minimum element is : %d ",iRet);

   return 0;

}