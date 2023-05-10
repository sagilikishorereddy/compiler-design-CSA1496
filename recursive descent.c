#include<stdio.h>
int c=0;
char p[20];
void s();
void l();
void lprime();
int main()
{
printf("\nrecursive descent parsing for the following grammar\n");
printf("\nenter the input string:\n");
scanf("%s",p);
s();
if(p[c]='$')
printf("the string is accepted");
else
printf("the string is not accepted");
}
void s()
{
	if(p[c]='a')
	c++;
	else if(p[c]=='(')
	{
	c++;
	l();
	if(p[c]==')')
	c++;
	else
	c--;
	}
	else
	{
	printf("\ninvalid expression");
}
}
void l()
{
	s();
	lprime();
}
void lprime()
{
	if(p[c]==',')
	{
		c++;
		s();
		lprime();
	}
}
