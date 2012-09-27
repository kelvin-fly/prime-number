#include<stdio.h>
#include<math.h>

#define NUM 100
int sum(int *arr,int size);  //Translation of the array!!!

int main()
{
	int array[NUM]={2,3,5},flag=0,i,j,dnumber=3;
	for(i=6;i<NUM;i++)
	{
		for(j=2;j<(i/2);j++)  //cause 5/2==2,so start with 6!!!
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
			else
				flag=1;   //flag is frequently erasuring!!!
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

	sum(array,dnumber);
	return 0;
}

int sum(int *arr, int size)
{
	int i, sum=0;
	for(i=0; i<size; i++)
	{
		sum+=(arr[i]%10);
	}
		printf("Units of prime number's sum:%d\n",sum);
}
