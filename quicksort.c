#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int a[],int low,int high)
{
	int i=(low-1);
	int pivot=a[high];
	for(int j=low;j<=high-1;j++)
	{
		if(a[j]<pivot)
		{
			i++;
		swap(&a[i],&a[j]);
		}
	}
		swap(&a[i+1],&a[high]);
		return (i+1);
	
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
	int pi=partition(a,low,high);
	quicksort(a,low,pi-1);
	  quicksort(a,pi+1,high);
	}
}
void printarray(int a[],int n)
{
        for(int i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }
}

void main()
{
	int a[]={45,34,23,87,54,33};
	int n=6;
	printarray(a,n);
	quicksort(a,0,n-1);
	printf("\n sorted array:\n");
	printarray(a,n);

}
