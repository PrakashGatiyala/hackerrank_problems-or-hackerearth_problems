//DEEPANSHU SAXENA(saxenad765)
#include <stdio.h>
int main()
{
    int a[1000],b[1000],c,n,i,j,k,l,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=j+1;i<n;i++)
        {
            if(a[i]>a[j])
            {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
            }
        }
    }
        for(j=0;j<n;j++)
        {
            if(a[j]==a[j+1])
            {
            j=j+1;
            z=z+1;
            continue;
            }
        }
            printf("%d",z);
}

