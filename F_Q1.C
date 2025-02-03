#include<stdio.h>
#include<conio.h>

/*

Q1. Pelindrome checker
Develop a program that checks whether a given string is a pelindrome or not
without using string functions.

*/

void main()
{
	char a[100];
	int i,j, palin = 1;
	clrscr();
	printf("Enter a word to check if it is pelindrome or not:- ");
	gets(a);
	for(i=0; a[i] != '\0'; i++);
	for(j=0,i=i-1; j<i; j++,i--)
	{
		if(a[i] != a[j])
		{
			palin = 0;
			break;
		}
	}
	if(palin)
	{
		printf("%s is a palindrome word.",a);
	}
	else
	{
		printf("%s is not a palindrome word.",a);
	}
	getch();
}