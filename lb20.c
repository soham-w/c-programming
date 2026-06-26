// Count Even numbers from Array //

 #include<stdio.h>
 #include<stdlib.h>

 int CountEven(int Arr[] ,int iSize)
 {
   int iCount = 0, iCnt = 0;
    
   for(iCnt = 0; i < iSize; i++)
   {
      if((Arr[iCnt] % 2 ) == 0 )
      {
         iCount++;
      }
   }
   return iCount;
 }

 int main()
 {
   int *ptr = NULL;
   int iRet = 0,  i = 0, iLength = 0;
   
   printf("Enter how many elemets you want :\n");
   scanf("%d",&iLength);

   ptr = (int*)calloc(iLength,sizeof(int));

   printf("Enter a array elements : \n");
   for (i = 0; i < iLength; i++)
   {
      scanf("%d",&ptr[i]);
   }

   iRet = CountEven(ptr,iLength);
   printf("Count of even number is : %d",iRet);

   free(ptr);

   return 0;
 }