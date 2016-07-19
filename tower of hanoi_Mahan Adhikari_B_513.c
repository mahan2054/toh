#include<stdio.h>
void towers(int n,char frompeg,char topeg,char auxpeg);

int main()
{
	int i;
	printf("enter the no of disks");
	scanf("%d",&i);
	towers(i,'A','C','B');
	return 9;
}

void towers(int i,char frompeg,char topeg,char auxpeg)
{
	if(i==1)
	{
		printf("%s%c%s%c","move disk 1 from peg",frompeg,"to peg",topeg);
		return;
	}
	towers(i-1,frompeg,auxpeg,topeg);
	printf("\n%s%d%s%c%s%c","move disk  ",i," from peg",frompeg ,"to peg",topeg);
	towers(i-1,auxpeg,topeg,frompeg);
}
