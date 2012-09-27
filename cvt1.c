#include<stdio.h>
#include<math.h>

#define NUM 100

int main()
{
	int array[NUM]={2,3,5},flag=0,i,j,dnumber=3;
	for(i=3;i<NUM;i++)
	{
		for(j=2;j<(i/2);j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
			else
				flag=1;
		}
		if(flag==1)
		{
			array[dnumber]=i;
			dnumber++;
		}
	}

	for(i=0;i<dnumber;i++)
	{
		printf("%d\t",array[i]);
		if(i%10==0)
			printf("\n");
	}
	printf("\n");
	return 0;
}
