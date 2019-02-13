#include<stdio.h>
#include<math.h>
void main()
{
int i,j,a[25],b[25]={0},d[25]={0},n,r=1,h,x=0,r1,r2,k=0,count=0,c=1,y,q,z;
printf("enter length:");
scanf("%d",&n);
printf("enter bit string:");
for(i=0;i<n;i++)
{ scanf("%d",&a[i]); }
do{
r1=pow(2,r);
if (r1 >= n+r+1)
{ printf("No of redundant bits = %d\n",r);break; }
else
{ r++; }
}while(r>=0);
h=n+r;
for(j=0;j<r;j++)
{
r2=pow(2,j);
b[r2]=5;
}
for(i=h;i>=1;i--)
{
if (b[i]==5)
{ b[i]=4; }
else
{ b[i]=a[k];k++; }
}
while(x<r)
{
count=0;
y=pow(2,x);
for(j=y;j<=h;j=j+(y*2))
{
q=j;
while(c<=y)
{
 if (b[q]==1)
  { 
  count++;
  q++;
  if (q==h+1){c=y;}
  }
 else 
 { 
 q++;if (q==h+1){c=y;}
 }
 c++;
}
c=1;
}
if (count%2==0)
{b[y]=0;count=0;}
else
{b[y]=1;count=0;}
x++;
}
printf("bit string with redundant-bits = ");
for(i=h;i>=1;i--)
{ printf("%d",b[i]);}
printf("\n");

printf("enter bit string for error detection : ");
for(i=h;i>=1;i--)
{ scanf("%d",&d[i]); }
 x=0;
 c=1;
while(x<r)
{
count=0;
y=pow(2,x);
for(j=y;j<=h;j=j+(y*2))
{
q=j;
while(c<=y)
{
 if (d[q]==1)
  { 
  count++;
  q++;
  if (q==h+1){c=y;}
  }
 else 
 { q++;
   if (q==h+1) {c=y;}
 }
 c++;
}
c=1;
}
if (count%2==0)
{z=z+0*y;}
else
{z=z+1*y;}
x++;
}
if (z==0)
{
printf("congrats no error in bit string :)\n");
}
else{
printf("you have error in bit no = %d\n",z);}
}


