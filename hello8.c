#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,k,a,i,add=0;
scanf("%d",&a);
while(a>0)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<k;i++)
{
add=add+a[i];
}
a--;
}
getch();
}
