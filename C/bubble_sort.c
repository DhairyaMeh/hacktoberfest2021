#include<stdio.h>
#define MAXSIZE 50
void bubble(int x[], int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(x[j] > x[j+1])
			{
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
	}
}
int main()
{
	int x[MAXSIZE],n,i;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&x[i]);
	}
	bubble(x,n);
	printf("\n The sorted output:\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",x[i]);
	}
	return 0;
}
