#include <stdio.h>

int main()
{
    int n,m,i,j,a[60],b[70],c=0,k=0;
    scanf("%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(i=i+1;j<n;j++)
        {
            if((a[i]==a[j])&&(a[i]!='$'))
            {
                b[k]=a[i];
                k++;
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
    else
    {
    printf("%d",b[0]);
    }
    
  
