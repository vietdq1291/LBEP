#include <stdio.h>
#include <stdlib.h>


bai1(){
	int n,a;
	printf("Nhap vao so n:");
	scanf("%d",&n);
	while(n > 1){
	a = n-1;
	if(a%2 == 0){
		printf("So chan be hon N la:%d\n",a);
	}
	n = a-1;
	}
}

bai2(){
	char c;
	do{
		printf("Nhap vao 1 ky tu:");
		scanf("\n%c",&c); 
	}while(c != 'y' && c != 'Y' && c != 'n' && c != 'N'); 
}

bai3(){
	int c;
	do{
		printf("Nhap vao 1 ngay trong tuan:");
		scanf("%d",&c); 
	}while(c < 2 || c>7); 
}

bai4(){
	int a; 
	printf("Nhap vao 1 so n:\n");
	scanf("%d",&a);
	long b = 0;
	int i = 1;
    while(i <= a)
    {
        if(a % i == 0)
        {
            printf("%4d", i);
           b = b + i;
        }
            i++;
    }
    printf("\nTong cac uoc cua %d la: %ld", a, b);
}

bai5(){
	float a,b;
    printf("\nNhap so tien : ");
    scanf("%f", &a);
    printf("Nhap so nam:");
    scanf("%f",&b);
	int i;
    for(i = 0;i < b; i++){
 	a = a + ((a * 8)/100);	
	}  
	printf("So tien la: %f",a);
}

bai6(){
		float a,b;
		int c;
    printf("\nNhap so tien : ");
    scanf("%f", &a);
    printf("Nhap so tien mong muon:");
    scanf("%f",&b);
 
	while(a < b){ 
		a = a + ((a * 8)/100);	
		c++;
	}
	printf("So nam can la: %d",c);
}

bai7(){
	int a,b,c;
	do{
		printf("Nhap vao so n:\n");
		scanf("%d",a);
		b+=a;
		c++;
	}while(a <= 1000);
	printf("So lan nhap la\n: %d",c);
	printf("Trung binh cua cac lan nhap:%f",(float)b/c);
}


int timsotheothutu(int n)
{
  if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n > 1)
        return (timsotheothutu(n - 1))+(timsotheothutu(n - 2));
}

bai8(){
 	int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("So Fibonacci thu %d la: %d", n, timsotheothutu(n));
}


int timuocchung(int a, int b){ 
    while (a*b != 0){ 
        if (a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a + b;
}


bailab1(){
	int a,b;
	printf("Nhap vao so a:\n");
	scanf("%d",&a);
	printf("\nNhap vao so b:");
	scanf("%d",&b);
	printf("Uoc chung lon nhat la : %d",timuocchung(a,b));
}

bailab2(){
	int n,f,c;
	printf("Nhap vao so n:\n");
	scanf("%d",&n);
	c = 1;
	for(c = 1;f< n;c++){
	f = timsotheothutu(c);
	if(f > n){
		f = timsotheothutu(c-1);
		break;
	}
	} 
	printf("So fibonaci nho hon va gan n nhat la :%d",f);
}

void main(int argc, char *argv[]) {
	int c;
	printf("Vui long chon bai tap:\n");
	scanf("%d",&c);
	switch(c){
		case 1: bai1();
		break;
		case 2: bai2();
		break;
		case 3: bai3();
		break;
		case 4: bai4();
		break;
		case 5: bai5();
		break;
		case 6: bai6();
		break;
		case 7: bai7();
		break;
		case 8: bai8();
		break;
		case 9: bailab1();
		break;
		case 10: bailab2();
		break;
		default:break;
	}

}
