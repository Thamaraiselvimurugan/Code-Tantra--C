#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	if(a==3||a==6||a==11||a==14||a==19||a==22||a==27||a==30||a==35||a==38||a==43||a==46||a==51||a==54||a==59||a==62||a==67||a==70)
	{
		printf("Upper\n");
	}
	else if(a==2||a==5||a==10||a==13||a==18||a==21||a==26||a==29||a==34||a==37||a==42||a==45||a==50||a==53||a==58||a==61||a==66||a==69)
	{
		printf("Middle\n");
	}
	else if(a==1||a==4||a==9||a==12||a==17||a==20||a==25||a==28||a==33||a==36||a==41||a==44||a==49||a==52||a==57||a==60||a==65||a==68)
	{
		printf("Lower\n");
	}
	else if(a==8||a==16||a==24||a==32||a==40||a==48||a==56||a==64||a==72)
	{
		printf("Side Upper\n");
	}
	else if(a==7||a==15||a==23||a==31||a==39||a==47||a==55||a==63||a==71)
	{
		printf("Side Lower\n");
	}
	else
	{
		printf("Invalid number\n");
	}
}