/*
PARSE 2: thực hiện các chức năng trong chương trình
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
1. Chức năng số 1: Kiểm tra số nguyên
Input: Nhập vào 1 số nguyên x từ bàn phím.
Output: Hiển thị ra màn hình
- Số x có phải là số nguyên?
- Số x có phải là số nguyên tố?
- Số x có phải là số chính phương?
*/
void chucNangSo1() {
	// 1. Khai báo biến
	float x;
	  
	// 2. INPUT nhập liệu
	printf("Moi nhap x: ");
	scanf("%f", &x);
	
	// 3. Kiem tra so nguyen
	if(x == (int)x) {
		printf("- %.0f la so NGUYEN\n", x);
	} 
	else {
		printf("- %.0f KHONG phai la so NGUYEN\n", x);
	}
	
	// 4. Kiem tra so nguyen to
	if(x < 2) {
		printf("- %.0f KHONG phai la so NGUYEN TO\n", x);
	}
	else {
		// Chay vong lap tu 2 -> x
		int count = 0;
		for(int i = 2; i < x; i++) {
		  if((int)x % i == 0) {
		    count++;
		  }
		}
		
		// Ket qua
		if(count == 0) {
		  printf("- %.0f LA so NGUYEN TO\n", x);
		} else {
		  printf("- %.0f KHONG phai la so NGUYEN TO\n", x);
		}
	}
	
	// 5. Kiem tra so chinh phuong
	// Chay vong lap tu 1 -> x
	bool laSoChinhPhuong = false;
	for(int i = 1; i < x; i++) {
		if((i*i) == x) {
			laSoChinhPhuong = true;
		}
	}
	
	// Ket qua
	if(laSoChinhPhuong == true) {
		printf("- %.0f LA so CHINH PHUONG\n", x);
	} else {
		printf("- %.0f KHONG phai la so CHINH PHUONG\n", x);
	}
}

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
			chucNangSo1();
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