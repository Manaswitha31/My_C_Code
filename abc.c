#include<stdio.h>
//#include<stdlib.h>
int main(int n, char **x, char **y)
{
	int i;
	//printf("Command line arguments are : %d\n",n);
	for(i=0;y[i]!=NULL;i++)
	{
		//s=s+atoi(x[i]);
		printf("%s",y[i]);
		
	}
	
	return 0;
}
