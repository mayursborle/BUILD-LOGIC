#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main(){
    
    int A[20];
    int n;
    printf("######### SELECTION SORT ##########\n");
    printf("how many elements you want \n");
    scanf("%d",&n);
    printf("enter the elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}