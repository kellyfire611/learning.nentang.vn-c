/*
BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
Input: Nhập vào bán kính của đường tròn
Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn
*/
#include<stdio.h>
#include<conio.h>
#define SO_PI 3.14

int main() {
	// 1. Khai bao bien
	float ban_kinh;
	float chu_vi;
	float dien_tich;
	
	// 2. INPUT nhap lieu
	printf("Moi nhap ban kinh: ");
	scanf("%f", &ban_kinh);
	
	// 3. PROCESS tinh toan
	dien_tich = SO_PI * ban_kinh * ban_kinh;
	chu_vi = 2 * SO_PI * ban_kinh;
	
	// 4. OUTPUT xuat ra man hinh
	printf("====== CHUONG TRINH TINH DIEN TICH VA CHU VI HINH TRON ======\n");
	printf("Ban kinh: %f \n", ban_kinh);
	printf("Dien tich hinh tron: PI * %f * %f = %f \n", ban_kinh, ban_kinh, dien_tich);
	printf("Chu vi hinh tron   : PI * 2 * %f = %f \n", ban_kinh, chu_vi);
	
	getch(); // Lenh dung man hinh
	return 0;
}