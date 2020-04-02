#include<stdio.h>
#include<conio.h>
int bubble(int arr1[],int m)
{
	int i,j,t;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
			if(arr1[j]<arr1[j+1])
			{
				t=arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1]=t;
				
				
			}
		}
	}
}
int main()
{
	int arr[100],n,i;
	printf("\n\n enter total element to be sorted");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\n enter element no.%d=",i+1);
		scanf("%d",&arr[i]);}
		bubble (arr,n);
		printf("sorted array is");
		for(i=0;i<n;i++)
		{
			printf ("%d",arr[i]);
		}
	}

