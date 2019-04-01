#include<stdio.h>
int main()
{
    int n,i,j,len=0,c=0,a[60],t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n<=10000)
    {
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
        len=a[0];
        for(i=0;i<n;i++)
        {
           if(len==a[i])
           {
               c++;
           }
               
        }
        if(n==c)
        {
            printf("%d",len);
        }
        else
        {
            for(i=n-1;i>=0;i--)
            {
                printf("%d",a[i]);
            }
        }
    }
    return 0;
}
