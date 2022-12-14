/*
PARSE 1: tạo MENU chương trình
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
	// 1. Khai báo biến
	char yn;
	int lua_chon = -1;

	// 2. OUTPUT xuất ra màn hình MENU	
	Chon:
		printf("================ MENU CHUONG TRINH ==============\n");
		printf("+ 0. Thoat.                                     +\n");
		printf("+ 1. Kiem tra so nguyen.                        +\n");
		printf("+ 2. Tim Uoc so chung va Boi so chung cua 2 so. +\n");
		printf("+ 3. Tinh tien cho quan Karaoke.                +\n");
		printf("+ 4. Tinh tien dien.                            +\n");
		printf("+ 5. Doi tien.                                  +\n");
		printf("+ 6. Tinh lai suat vay ngan hang vay tra gop.   +\n");
		printf("+ 7. Vay tien mua xe.                           +\n");
		printf("+ 8. Sap xep thong tin sinh vien.               +\n");
		printf("+ 9. Xay dung game LOTT.                        +\n");
		printf("+ 10. Tinh toan phan so.                        +\n");
		printf("=================================================\n");
	
	Nhap:
		printf("Moi ban chon: ");
		scanf("%d", &lua_chon);
	
	// Thoat
	if(lua_chon == 0) {
		printf("Cam on ban da su dung chuong trinh. Hen gap lai!!!");
		return 0;
	}
	
	// Thuc hien cac chuong trinh
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
			// Xay dung game LOTT
			break;
		case 10:
			// Tinh toan phan so
			break;
		default:
			printf("Vui long chi lua chon tu 1-10. Moi ban nhap lai...");
			goto Nhap;
			break;
	}
	
	// Hỏi có muốn tiêp tục sử dụng chương trình hay không?
	fflush(stdin);
	printf("Ban co muon tiep tuc (Y/N): "); 
	scanf("%c", &yn);
	if(yn == 'y' || yn == 'Y'){
		system("cls"); // Clear màn hình
		goto Chon;
	}
	else exit(0);
	
	getch(); // Lenh dung man hinh
	return 0;
}