/*
BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SỐ CHÍNH PHƯƠNG

Input: Nhập vào từ bàn phím số x
Output: Kết luận x có phải là số chính phương hay không?

Biết rằng: Số chính phương là một số mà giá trị của nó là bình phương của một số
tự nhiên. (ví dụ: 9 = 3 x 3, 16 = 4 x 4, 25 = 5 x 5, 1,000,000 = 1,000 x 1,000)
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai báo biến
	int x;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap x: ");
	scanf("%d", &x);
	
	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	// 4. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH KIEM TRA SO X CO PHAI LA SO CHINH PHUONG? ===\n");
	printf("Thong tin:\n");
	printf("- So x = %d \n", x);
	
	// Chay vong lap tu 1 -> x
	bool laSoChinhPhuong = false;
	for(int i = 1; i < x; i++) {
		if((i*i) == x) {
			laSoChinhPhuong = true;
		}
	}
	
	// Ket qua
	if(laSoChinhPhuong == true) {
		printf("- Ket qua: %d LA so CHINH PHUONG", x);
	} else {
		printf("- Ket qua: %d KHONG phai la so CHINH PHUONG", x);
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}