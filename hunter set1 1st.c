#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int i,j,len=0,a[80],t=0,c=0;
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]); 
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
          if(a[j]<a[i])
          {
              t=a[j];
              a[j]=a[i];
              a[i]=t;
          }
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if((a[i]==a[j])&&(a[i]!='$'))
           {
               printf("%d",a[i]);
               a[i]='$';
               a[j]='$';
               c++;
           }
       }
   }
   if(c==0)
   {
       printf("unique");
   }
    return 0;
}
