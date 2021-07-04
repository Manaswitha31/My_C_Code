#include<stdio.h>
int main()
{
	char a[20];
	int i;
	for(i=0;i<20;i++)
	{
		printf("Enter a character :");
	    scanf("%s",&a[i]);
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
	    {
	    	printf("is vowel\n");
		}
	    else
	    {
	    	printf("is consonant\n");
		}
	    printf("Do you want to try again? \n");
	    scanf("%s",&a[i+1]);
	    if(a[i+1]=='y'||a[i+1]=='Y')
	    continue;
	    else
	    break;
	}
	printf("Thanks!");
}
