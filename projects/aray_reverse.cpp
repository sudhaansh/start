#include <stdio.h>
int main()
{
        int arr[5];
        int i=0, temp, size=5;

         /*Read array elements*/
        for (i=0; i<5; i++)
        {
          scanf("%d",&arr[i]);
        }
int b[5];
int j=0;
for(i=size-1;i>=0;i--)
{b[j]=arr[i];
 j++;
}
for(i=0;i<5;i++)
{arr[i]=b[i];
}
 for (i=0; i < 5; i++)
        {
          printf ("%d\n",arr[i]);
        }
return (0);
}
