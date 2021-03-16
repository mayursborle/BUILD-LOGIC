#include<stdio.h>
void insertionsort(int a[10],int n);
void main()
{
        int n,i,a[100];
        printf("\n########## INSERTION SORT ############");
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
         insertionsort(a,n);
}
void insertionsort(int a[10],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>=temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("\n the sorted list is:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

