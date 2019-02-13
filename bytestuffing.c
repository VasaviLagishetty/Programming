#include<stdio.h>
#include<string.h>
void main()
{
int i,j,k;
char a[20],b[100];
printf("enter string: ");
scanf("%s",&a[0]);
for(i=0;a[i]!='\0';i++)
{
if (a[i]=='e' || a[i]=='f')
{
b[j]='e';
j++;
}
b[j]=a[i];
j++;
}
for(k=0;b[k]!='\0';k++)
{
printf("%c",b[k]);
}
}
