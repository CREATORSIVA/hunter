#include <stdio.h>

int main()
{
    int n,m,i,j,a[60],b[70],c=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
    }
    
    if(c==m)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    
    

    return 0;
}
