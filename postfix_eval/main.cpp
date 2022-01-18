#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int top=-1,stack[50];

int eval(char oper)
{
int power(int n,int p),result;

if(oper=='^')
result=power(stack[top-1],stack[top]);
else if(oper=='*')
result=stack[top-1]*stack[top];
else if(oper=='/')
result=stack[top-1]/stack[top];
else if(oper=='+')
result=stack[top-1]+stack[top];
else if(oper=='-')
result=stack[top-1]-stack[top];

return result;

}

int power(int n,int p)
{
int i,q=1;
for(i=1;i<=p;i++)
q=q*n;

return(q);
}

int main()
{
int i,j=0,temp=0,aa=0;
//char a[]={'(',' ','2',' ','3',' ','+',' ','4',' ','*',' ','5',' ','/',' ',')',' ','\0'};
char a[50];
system("cls");

//strcpy(a,"( 2 3 + 15 * )");
cout<<"\nEnter the postfix expression :";
gets(a);

cout<<"\nThe postfix expression : "<<a;

do
{
if(a[j]==' ')
j++;

if(a[j]==')')
break;

if(a[j]!='^' && a[j]!='*' && a[j]!='/' && a[j]!='+' && a[j]!='-')
{
	aa=0;
	do
	{
		aa=(aa*10)+(a[j]-48);
	}
	while(a[++j]!=' ');

	stack[++top]=aa;
}


else
{
	temp=eval(a[j]);
	stack[top-1]=temp;
	stack[top--]=0;
}
j++;

for(i=1;i<=top;i++)
cout<<" "<<stack[i]<<" ";
cout<<"\n";
}
while(a[j]!=')');
cout<<"\n\nEvaluated expression : "<<stack[top];

getch();

return 0;
}
