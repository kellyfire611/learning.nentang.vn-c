/*
BÀI THÊM: tạo MENU chương trình
1. Tinh xep hang hoc luc.
2. Giai phuong trinh bac nhat.
3. Giai phuong trinh bac hai.
4. Tinh tien dien.
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai báo biến
	char lua_chon;

	// 2. OUTPUT xuất ra màn hình MENU	
	printf("======= MENU CHUONG TRINH =========\n");
	printf("+ 1. Tinh xep hang hoc luc.       +\n");
	printf("+ 2. Giai phuong trinh bac nhat.  +\n");
	printf("+ 3. Giai phuong trinh bac hai.   +\n");
	printf("+ 4. Tinh tien dien.              +\n");
	printf("===================================\n");
	printf("Moi ban chon: ");
	scanf("%c", &lua_chon);
	
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