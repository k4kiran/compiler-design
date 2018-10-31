//program to simulate lexical analyser

#include<stdio.h>
#include<string.h>
#include<fstream.h>

int main()
{
int state;
char symtab[10][10]={"int","char","float"};
//char exp[10],ch;
FILE *f1;
f1=fopen("symtable.txt",r)
//printf("\nEnter the expression");
//scanf("%s",&exp);
char ch;

while(ch!=EOF)
{
	state=0;
	switch(state)
	{
		case 0:ch=getchar(f1);
			if(ch=='<')
			state=1;

			else if(ch=='>')
			state=4;

			else if(ch=='!')
			state=7;

			else if(isnum(ch))
			state=11;

			else if(isalpha(ch))
			state=9;

			else if(ch=='=')
			printf("\n= is an assignment operator");

			state=0;
		break;

		case 1:ch=getchar(f1)
			if(ch=='=')
				printf("\n<= is relop le");

			else
			{
				print("\n< is relop less than");

				fseek(f1,-1,SEKK_CUR);
			  state=0; }
		break;

		case 4:ch=getchar(f1);
			if(ch=='=')
				printf("\n>= is relop ge");
			else
			{
				printf("\n> is a relop greater than");
				fseek(f1,-1,SEKK_CUR);
			   state=0;
			}
		break;
		case 7:ch=getchar(f1)
			if(ch=='=')
			{	printf("\n != is a relop ne");
				state=0; }
			else
			{
				fseek(f1,-1.SEKK_CUR);
				state=0;
			}
		break;

		case 9:ch=getchar(f1)
			if(isdigit(ch))
				state=9;

			 	  

		
