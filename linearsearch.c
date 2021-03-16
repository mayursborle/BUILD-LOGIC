#include<stdio.h>
void linear_search(int a[100],int n);
void main()
{
	int n,i,a[100];
	printf("\n*****linear search*****");
	printf("\nhow many element you want");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	linear_search(a,n);
}
void linear_search(int a[100],int n)
{
	int i,j,temp;
	printf("\n enter the element to be searching:");
	scanf("%d",&temp);
	for(i=0;i<n;i++)
	{
		if(a[i]==temp)
		{
			j=temp;
			break;
		}
	}
	if(i<n)
	{
		printf("\nsearch successful \n the element present present at %d position\n",i+1);
	}
	else
	{
		printf("\nsearching unsuccessful");
	}
}
	


