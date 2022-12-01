/*
BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI

Input: Nhập 5 chuỗi bất kỳ
Output: Thứ tự các chuỗi đã được sắp xếp

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX_LENGTH 50

// Ham hoan vi 2 chuoi
void hoanVi(char chuoi1[], char chuoi2[]) {
	char temp[MAX_LENGTH];
	
	strcpy(temp, chuoi1);
	strcpy(chuoi1, chuoi2);
	strcpy(chuoi2, temp);
}

int main() {
	// 1. Khoi tao mang 2 chieu 5 dòng x MAX_LENGTH phan tu
	char cau[5][MAX_LENGTH];
	
	// 2. INPUT nhập liệu
	for(int i=0; i<5; i++) {
		printf("Moi ban cau thu %d: ", i);
		gets(cau[i]);
	}
	
	// 3. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH SAP XEP CHUOI THEO CHU CAI ===\n");
	printf("Cac cau vua nhap:\n");
	for(int i=0; i<5; i++) {
		printf("- ");
		puts(cau[i]);
	}
	
	// 4. Giai thuat sap xep
	for(int i=0; i<5; i++) {
		for(int j=i+1; j<5; j++) {
			if(strcmp(cau[i], cau[j]) > 0) {
				hoanVi(cau[i], cau[j]);
			}
		}
	}
	
	// 5. In ra man hinh ket qua
	printf("Cac cau sau khi sap xep thu tu:\n");
	for(int i=0; i<5; i++) {
		printf("- ");
		puts(cau[i]);
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}