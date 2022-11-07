/*
BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
Input: Nhập vào từ bàn phím chiều dài và chiều rộng
Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật
*/
#include<stdio.h>
#include<conio.h>

int main() {
	int chieu_dai;
	int chieu_rong;
	
	printf("Moi nhap chieu dai: ");
	scanf("%d", &chieu_dai);
	
	printf("Moi nhap chieu rong: ");
	scanf("%d", &chieu_rong);
	
	printf("====== CHUONG TRINH TINH DIEN TICH VA CHU VI HINH CHU NHAT ======\n");
	printf("Chieu dai: %d \n", chieu_dai);
	printf("Chieu rong: %d \n", chieu_rong);
	
	int dien_tich = chieu_dai * chieu_rong;
	int chu_vi    = (chieu_dai * chieu_rong) / 2;
	
	printf("Dien tich hinh chu nhat: %d * %d = %d \n", chieu_dai, chieu_rong, dien_tich);
	printf("Chu vi hinh chu nhat   : (%d + %d)/2 = %d \n", chieu_dai, chieu_rong, chu_vi);
	
	getch(); // Lenh dung man hinh
	return 0;
}