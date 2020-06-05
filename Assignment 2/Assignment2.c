#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// function tim so lon nhat
void timsolonnhat() {
	int a,b,c;
	printf("\nVui long nhap vao 3 so tu ban phim:");
	printf("\nSo a:");
	scanf("%d",&a);
	printf("So b:");
	scanf("%d",&b);
	printf("So c:");
	scanf("%d",&c);
	if(a > b && a > c) {
		printf("So lon nhat la a:%d",a);
	} else if (b > a && b > c) {
		printf("So lon nhat la b:%d",b);
	} else {
		printf("So lon nhat la c:%d",c);
	}
}

// function tim so nho nhat
void timsonhonhat() {
	int a,b,c;
	printf("\nVui long nhap vao 3 so tu ban phim:");
	printf("\nSo a:");
	scanf("%d",&a);
	printf("So b:");
	scanf("%d",&b);
	printf("So c:");
	scanf("%d",&c);
	if(a < b && a < c) {
		printf("So nho nhat la a:%d",a);
	} else if (b < a && b < c) {
		printf("So nho nhat la b:%d",b);
	} else {
		printf("So nho nhat la c:%d",c);
	}
}
// function giai phuong trinh bac trinh
void giaiphuongtrinhbac2() {
	float a,b,c;
	printf("\nVui long nhap gia tri cho cac he so tu ban phim:");
	printf("\nHe so bac hai a = ");
	scanf("%f",&a);
	printf("THe so bac mot b = ");
	scanf("%f",&b);
	printf("So hang tu do c = ");
	scanf("%f",&c);
	if(a == 0 && b == 0 && c == 0) {
		printf("Phuong trinh da cho co vo so nghiem");
	} else if(a == 0 && b == 0 && c != 0) {
		printf("Phuong trinh da cho vo nghiem");
	} else if(a == 0 && b != 0 && c != 0) {
		printf("Phuong trinh co 1 nghiem la x :%f",(-c/b));
	} else {
		// tinh delta
		float delta = b*b - 4*a*c;
		float x1;
		float x2;
		// tinh nghiem
		if (delta > 0) {
			x1 = (float) ((-b + sqrt(delta)) / (2*a));
			x2 = (float) ((-b - sqrt(delta)) / (2*a));
			printf("Phuong trinh co 2 nghiem la: x1 = %f va x2 = %f", x1, x2);
		} else if (delta == 0) {
			x1 = (-b / (2 * a));
			printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
		} else {
			printf("Phuong trinh vo nghiem!");
		}
	}
}

// kiem tra co phai tam giac
void kiemtratamgiac() {
	float a,b,c;
	printf("\nVui long nhap vao 3 so tu ban phim:");
	printf("\nSo a:");
	scanf("%f",&a);
	printf("So b:");
	scanf("%f",&b);
	printf("So c:");
	scanf("%f",&c);
	if(a > 0 && b > 0 && c > 0) {
		if((a+b) > c && (a+c)> b && (b+c) > a) {
			printf("3 so vua nhap co the tao thanh tam giac\n");
			float chuvi;
			float dientich;
			chuvi = a + b + c;
			dientich = sqrt((chuvi/2)*((chuvi/2)-a)*((chuvi/2)-b)*((chuvi/2)-c));
			printf("Va co chu vi la: %f ,dien tich la: %f",chuvi,dientich);
		} else {
			printf("3 so vua nhap khong the tao thanh tam giac");
		}

	} else {
		printf("3 so vua nhap khong the tao thanh tam giac");
	}

}
// nhap so kiem tra theo dieu kien
void baitap5() {
	int a,b,c;
	printf("\nVui long nhap vao 2 so tu ban phim:");
	printf("\nSo a:");
	scanf("%d",&a);
	printf("So b:");
	scanf("%d",&b);
	if(a >= b) {
		printf("\n2 so co thuong la : %f",(float)a/b);
	} else {
		printf("\n2 so co tich la : %d",(a*b));
	}
}


void main(int argc, char *argv[]) {

	int luachon;
	do {
		printf("\n-----------------------------------------");
		printf("\nVui long lua chon chuong trinh:");
		printf("\n 1.Tim so lon nhat trong 3 so nhap vao.");
		printf("\n 2.Tim so nho nhat trong 3 so nhap vao");
		printf("\n 3.Giai phuong trinh bac 2: ax^2+bx+c = 0");
		printf("\n 4.Kiem tra 3 so nhap vao co tao thanh tam giac, neu dung tinh chu vi va dien tich");
		printf("\n 5.Nhap vao 2 so nguyen, tinh a/b neu a >= b, tinh a*b neu a<b");
		printf("\n 6.Thoat");
		printf("\nChon lua chuc nang : ");
		scanf("%d", &luachon);

		switch(luachon) {
			case 1:
				timsolonnhat();
				break;
			case 2:
				timsonhonhat();
				break;
			case 3:
				giaiphuongtrinhbac2();
				break;
			case 4:
				kiemtratamgiac();
				break;
			case 5:
				baitap5();
				break;
			default:
				break;
		}

	} while(luachon != 6);
}













