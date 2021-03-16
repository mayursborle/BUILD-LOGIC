#include<stdio.h>
void bubblesort(int a[10],int n);
void main()
{
	int n,i,a[100];
	printf("\n########## BUBBLE SORT ############");
	printf("\n how many elements you want:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nlist if eleemts is:");
	 for(i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }
	 bubblesort(a,n);
}
void bubblesort(int a[10],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n the sorted list of elements is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}


