#include<stdio.h>
void main()
{
	int a[20],i;
	int n;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements in reverse order : ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}

