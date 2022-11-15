#include<stdio.h>
void main()
{
     int arr[10][10],i,j;
      
     for(i=0; i<10; i++)
        {  
            for(j=0; j<10; j++)
                 {
                    printf("\n arr[%d][%d]=",i,j);
                    scanf("%d", &arr[i][j]);    
                    
                 }
         }
}
