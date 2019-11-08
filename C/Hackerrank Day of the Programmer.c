
//DEEPANSHU SAXENA(saxenad765)
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
	if((a!=1918)&&(a!=2600)&&(a!=1900)&&(a!=2200)&&(a!=1700))
	{
	    if(a%4 == 0)
	    {
	        if( a%100 == 0)
	        {
	            if ((a%400 == 0)||(a%400==200))
	            {
	                printf("12.09.%d", a);
	            }
	             else
	                 printf("13.09.%d",a);
	            
	        }
	        else
	            printf("12.09.%d",a);
	    }
	    else
	        printf("13.09.%d",a);
	}
    if(a==1918)
    {
        printf("26.09.1918");
    }
     if(a==2600)
    {
        printf("13.09.2600");
    }
    if(a==1900)
    {
        printf("12.09.1900");
    }
    if(a==2200)
    {
     printf("13.09.2200");
    }
    if(a==1700)
    {
        printf("12.09.1700");
    }
    return 0;
}
