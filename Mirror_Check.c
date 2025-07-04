/** Palindrome Checkers for plain strings **/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void strlwr(char *str) 
{
    for (int i = 0; str[i]; i++) 
    {
        str[i] = tolower(str[i]);
    }
}

void strrev(char *str) 
{
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

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
