#include<stdio.h>
void main()
{
	int i,n,a[10],f,c=0;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter an integer value : ");
	scanf("%d",&f);
	for(i=0;i<n;i++)
		 if(a[i]==f)
		 {
		 	c++;
		 }
	printf("Number of times element %d is repeated : %d\n",f,c);
}