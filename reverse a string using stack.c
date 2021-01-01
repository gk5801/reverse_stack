#include <stdio.h>
#include <string.h>
#define MAX 100
int item;
char stack_string[MAX];
void push(char item);
char pop(void);
int isempty(void);
int isfull(void);
int top=-1;
int main() 
{
    char str[MAX];
	printf("Enter the string");
	scanf("%[^\n]s",str);
	for(int i=0;i<strlen(str);i++)
     	push(str[i]);
	for(int i=0;i<strlen(str);i++)
    	str[i]=pop();

	printf("The reversed string is %s",str);
	return 0;
}
int isfull()
{
    if(top==MAX-1)
        return 1;
    else 
        return 0;
}
int isempty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
void push(char item)
{
    if(isfull())
    {
        printf("The stack is full");
        return;
    }
    top++;
    stack_string[top]=item;
}
char pop()
{
    if(isempty())
    {
        printf("stack is empty");
        return 0;
    }
    item=stack_string[top];
    top--;
    return item;
}