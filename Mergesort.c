#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

void merge(int *arr,int *L,int leftsize,int *R,int rightsize)
{
    int nl=leftsize;
    int nr=rightsize;
    int i=0,j=0,k=0;
    while(i<nl&&j<nr)
    {
        if(L[i]<R[j])
        {
            arr[k]=L[i];					
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<nl)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

        while(j<nr)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}


void mergesort(int *arr,int n)
{
    int i,j,mid,*L,*R;
    mid=n/2;
    if(n<2)
    {
    return;    
    }
    L = (int*)malloc(mid*sizeof(int));             	//left sub array     
	R = (int*)malloc((n -mid)*sizeof(int)); 	//rightsubarray
    for(i=0;i<mid;i++)
    {
        L[i]=arr[i];
    }
    for(j=mid;j<n;j++)
    {
        R[j-mid]=arr[j];
    } //MergeSort
    mergesort(L,mid);
    mergesort(R,n-mid);					
    merge(arr,L,mid,R,n-mid);				//merge left and right subarrays
     free(L);
        free(R);    
}


int main()
{
    int arr[10]; 			//array initialisation
    int n1,i;
    printf("enter size of original array");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
    scanf("%d",&arr[i]);  		 //array inputs
    }
    mergesort(arr,n1);   		//dividing array into parts
for(i=0;i<n1;i++)
    {
    printf("%d",arr[i]);  		//array after sorting
    }

    return 0;
}
