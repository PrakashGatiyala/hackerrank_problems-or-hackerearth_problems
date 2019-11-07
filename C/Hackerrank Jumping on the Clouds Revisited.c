#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a[1000],b,c,d,i,j,k,n,m,e=100;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i=i+m)
    {
        if(a[i]==0)
        e=e-1;
        if(a[i]==1)
            e=e-3;
    }
    printf("%d",e);
}
