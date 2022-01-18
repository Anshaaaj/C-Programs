#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int top=-1;char stack[50];

int precedence(char ss)
{
int prec=0;
switch(ss)
{
case '^':
{
prec=3;
break;
}
case '*':
case '/':
{
prec=2;
break;
}
case '+':
case '-':
{
prec=1;
break;
}

}
return(prec);
}

int main()
{
int i=-1,j=0;
//char a[50]={NULL},aa[50];
char a[]={'(', 'A',' ','+',' ','(',' ','B',' ','*',' ','C',' ','-',' ','(',' ','D',' ','/',' ','E',' ','^',' ','F',' ',')',' ','*',' ','G',' ',')',' ','*',' ','H',' ',')','\0'},aa[50];
system("cls");
/*cout<<"\nEnter the infix expression :";
gets(a);*/

cout<<"\nThe infix expression : ";puts(a);
cout<<"\n\n\nPress any key to continue...........";
getch();
cout<<"\n\t Input\t|\tStack\t\t|\tExpression\n";
cout<<"----------------------------------------------------------------";

//stack[++top]='(';
do
{
if(a[j]==' ')
j++;
if(isalpha(a[j]))
	aa[++i]=a[j];
else if(a[j]=='(')
stack[++top]=a[j];
else if(a[j]==')')
{
	do
	{

			aa[++i]=stack[top];
			stack[top--]='\0';
	}
	while(stack[top]!='(');

	if(stack[top]=='(')
		stack[top--]='\0';

}
else
{
	if(precedence(a[j])<precedence(stack[top]))
	{
		aa[++i]=stack[top];
		stack[top]=a[j];
	}
	else
		stack[++top]=a[j];

}
aa[i+1]='\0';
cout<<"\n\t "<<a[j]<<"\t|\t"<<stack<<"\t\t|\t"<<aa;
}
while(a[++j]!='\0');
cout<<"\n----------------------------------------------------------------";
aa[++i]='\0';
cout<<"\n\nThe postfix expression is : "<<aa;


getch();
return 0;
}
