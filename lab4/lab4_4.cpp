/*
BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN

Yêu cầu: 
 Nếu người dùng nhập từ bàn phím số 1:  Chạy chương trình bài 1
 Nếu người dùng nhập từ bàn phím số 2:  Chạy chương trình bài 2
 Nếu người dùng nhập từ bàn phím số 3:  Chạy chương trình bài 3
 Nếu người dùng nhập từ bàn phím số 4:  Thoát khỏi chương trình
 Nếu người dùng nhập từ bàn phím số khác: Hiển thị menu như cũ
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai báo biến
	char lua_chon;

	// 2. OUTPUT xuất ra màn hình MENU
	do {
		printf("======= MENU CHUONG TRINH =========\n");
		printf("+ 1. Tinh trung binh tong.        +\n");
		printf("+ 2. Tim so nguyen to.            +\n");
		printf("+ 3. Tim so chinh phuong.         +\n");
		printf("+ 4. Thoat.                       +\n");
		printf("===================================\n");
		printf("Moi ban chon: ");
		scanf("%c", &lua_chon);
	} while(lua_chon < 1 || lua_chon > 4);
	
	switch(lua_chon) {
		case '1':
			printf("Ban da lua chon chuong trinh: Tinh xep hang hoc luc.");
			break;
		case '2':
			printf("Ban da lua chon chuong trinh: Giai phuong trinh bac nhat.");
			break;
		case '3':
			printf("Ban da lua chon chuong trinh: Giai phuong trinh bac hai.");
			break;
		case '4':
			printf("Ban da lua chon chuong trinh: Tinh tien dien.");
			break;
		default:
			printf("Vui long chi lua chon tu 1-4.");
			break;
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}