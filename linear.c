// A VERY SIMPLE LINEAR SEARCH IN C (LOOK FOR TYPO)
#include <stdio.h>
int linear (int key, int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        if(key==a[i]) return i;
    }
    return-1;
    
}
void main() {
   int n,key,a[20],i,pos;
   printf("enter the value n\n");
   scanf("%d",&n);
   
   printf("enter the vlause\n");
   for(i=0;i<n;i++)
   scanf("%d", &a[i]);
   
   printf("Enter item to search\n");
   scanf("%d",&key);
   
   pos = linear(key,a,n);
   
   if(pos==-1)
     printf("not found \n");
   else
     printf("ITEM found\n");
}
