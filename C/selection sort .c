#include<stdio.h>
#define MAXSIZE 50
void selection(int x[], int n)
{
	int i,j,min,pos=0,c=0;
	
	for(i=0;i<n;i++)
	{
	        min = x[i];
		for(j=i+1; j<n; j++)
		{
			c++;
			if(x[j] < min)
			{
				min = x[j];
				pos = j;
			}
		}
		x[pos] = x[i];
		x[i] = min;
		pos++;
	}
	printf("\n Number of comparisons required = %d",c);
}
int main()
{
	int x[MAXSIZE],n,i;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0; i<n; i++)
	{
		scanf("\n%d",&x[i]);
	}
	selection(x,n);
	printf("\n The sorted output:\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",x[i]);
	}
	return 0;
}
