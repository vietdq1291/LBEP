#include <stdio.h>

float tinhTBC(int A[],int n)
{	
	int i,s=0;
	for(i=0;i<n;i++)
	{
		
			s+=A[i];
		
	}
	return (float)s/n;
}

void main()
{
	
	int n;
	printf("\n nhap so luong phan tu trong mang n= ");
	scanf("%d",&n);
	int A[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("phan tu tai A[%d]",i);
		scanf("%d",&A[i]);
	}
	printf("tong la %f",tinhTBC(A,n)); 
}


