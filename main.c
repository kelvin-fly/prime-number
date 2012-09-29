/*****   author:kelvin                     ********/
/*****   email:kelvin.fly.lc@gmail.com     *******/
#include<stdio.h>
#include<math.h>

int sum(int *arr,int size);  //Translation of the array!!! the sum of units.

int main()
{
	int array[10000]={2,3,5,7},i,j,dnumber=4, flag;
	for(i=11;i<(11*11);i++)
	{
		for(j=0; j<4; j++)  //cause an unprime number must have least one prime divisor!!!
		{
			flag=1;
			if(i%array[j]==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			array[dnumber]=i;
			dnumber++;
		}
	}
	for(i=121; i<121*121; i++)
	{
		flag=1;
		for(j=0; j<dnumber; j++)
		{
			if(i%array[j]==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			array[dnumber]=i;
			dnumber++;
		}
	}

	for(i=0;i<dnumber;i++)       //print array
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
