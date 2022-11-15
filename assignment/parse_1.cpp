/*
BÀI 4: tạo MENU chương trình
1. Tinh xep hang hoc luc.
2. Giai phuong trinh bac nhat.
3. Giai phuong trinh bac hai.
4. Tinh tien dien.
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai báo biến
	int lua_chon;

	// 2. OUTPUT xuất ra màn hình MENU	
	printf("================ MENU CHUONG TRINH ==============\n");
	printf("+ 1. Kiem tra so nguyen.                        +\n");
	printf("+ 2. Tim Uoc so chung va Boi so chung cua 2 so. +\n");
	printf("+ 3. Tinh tien cho quan Karaoke.                +\n");
	printf("+ 4. Tinh tien dien.                            +\n");
	printf("+ 5. Doi tien.                                  +\n");
	printf("+ 6. Tinh lai suat vay ngan hang vay tra gop.   +\n");
	printf("+ 7. Vay tien mua xe.                           +\n");
	printf("+ 8. Sap xep thong tin sinh vien.               +\n");
	printf("+ 9. Xay dung game FPOLY-LOTT.                  +\n");
	printf("+ 10. Tinh toan phan so.                        +\n");
	printf("=================================================\n");
	printf("Moi ban chon: ");
	scanf("%d", &lua_chon);
	
	printf("Ban da lua chon chuong trinh so: %d", lua_chon);
	switch(lua_chon) {
		case 1:
			// Kiem tra so nguyen
			break;
		case 2:
			// Tim Uoc so chung va Boi so chung cua 2 so
			break;
		case 3:
			// Tinh tien cho quan Karaoke
			break;
		case 4:
			// Tinh tien dien
			break;
		case 5:
			// Doi tien
			break;
		case 6:
			// Tinh lai suat vay ngan hang vay tra gop
			break;
		case 7:
			// Vay tien mua xe
			break;
		case 8:
			// Sap xep thong tin sinh vien
			break;
		case 9:
			// Xay dung game FPOLY-LOTT
			break;
		case 10:
			// Tinh toan phan so
			break;
		default:
			printf("Vui long chi lua chon tu 1-10. Moi ban nhap lai...");
			break;
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}