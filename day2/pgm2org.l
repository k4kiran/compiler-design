identifier [a-zA-Z][a-zA-Z0-9]*
%{
    #include<stdio.h>
    int i , j=0 , flag;
    char id[20][20];
%}
%%
[;?\*.()+-/%<>=] |
#.* |
int |
float |
char |
double |
while |
for |
struct |
typedef |
do |
if |
break |
continue |
void |
switch |
return |
else |
goto |
"{" |
"}" |
[0-9]+
{identifier}(\[[0-9]*\])? {    flag=0;
                for(i=0 ; i<20 ; i++)
                {
                    if(!strcmp(id[i] , yytext))
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    printf("\tIDENTIFIER : %s",yytext);
                    strcpy(id[j] , yytext);
                                        j += 1;
                }
                }

%%
int main()
{
char filename[25];
FILE *file;
printf("\nFilename :");
scanf("%s", filename);
file = fopen(filename,"r");
if(!file)
{
printf("could not open %s \n",filename);
exit(0);
}
yyin = file;
printf("The identifiers are :\n");
yylex();
return 0;
}
int yywrap()
{
return 1;

}
