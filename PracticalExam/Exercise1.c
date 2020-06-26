#include <stdio.h>
#include <stdbool.h>

void main()
{
	int n,i,j;
	printf("Nhap vao so phan tu cua mang:\n");
	scanf("%d",&n);
	int array[n];
	for(i = 0; i < n;i++){
		printf("Phan tu thu %d cua mang:\n",i);
		scanf("%d",&array[i]);
	}
	bool ishaveeven = false;
	for(j = n-1;j>=n;j--){
		if((array[j]%2) == 0){
			printf("So chan cuoi cung trong mang la: %d",array[j]);
			ishaveeven = true;
			break;
		}
	}
	if(!ishaveeven){
		printf("Khong co so chan nao trong mang");
	} 
}
