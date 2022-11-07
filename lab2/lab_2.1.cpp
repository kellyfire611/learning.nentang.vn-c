/*
BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TỔNG HIỆU THƯƠNG TÍCH 2 SỐ
Input: Nhập vào từ bàn phím 2 số
Output: Hiển thị ra màn hình tổng, hiệu, thương, tích 2 số
*/
#include<stdio.h>
#include<conio.h>

int main() {
	int a;
	int b;
	
	printf("Moi nhap so a: ");
	scanf("%d", &a);
	
	printf("Moi nhap so b: ");
	scanf("%d", &b);
	
	printf("====== CHUONG TRINH TINH TOAN DON GIAN ======\n");
	printf("So a: %d \n", a);
	printf("So b: %d \n", b);
	
	int tong   = a + b;
	int hieu   = a - b;
	int thuong = a / b;
	int tich   = a * b;
	printf("Tong   cua %d + %d la: %d \n", a, b, tong);
	printf("Hieu   cua %d - %d la: %d \n", a, b, hieu);
	printf("Thuong cua %d / %d la: %d \n", a, b, thuong);
	printf("Tich   cua %d * %d la: %d \n", a, b, tich);
	
	getch(); // Lenh dung man hinh
	return 0;
}