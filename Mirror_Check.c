/** Palindrome Checkers for plain strings **/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input1[100], input[100], rev[100];
	system("cls");
	printf("Enter the word:");
	gets(input1);
	strlwr(input1);
	strcpy(input, input1);
	strcpy(rev, input);
	strrev(rev);
	if(strcmp(rev, input)==0)
	{
		printf("%s is a Palindrome.", input);
	}
	else
	{
		printf("%s is not a Palindrome.", input);
	}

	return 0;
}
