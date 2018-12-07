#include<stdio.h>
void main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
	
		printf("%c is lowercase letter\n",ch);
	
	
	}
	else if(ch>='A' && ch<='Z')
	
	{
		printf("%c is uppercase letter\n",ch);
	
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is neither an uppercase or lowercase letter\n",ch);
	}
	
	
	
	
}
	
	


