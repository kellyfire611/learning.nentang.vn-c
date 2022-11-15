/*
BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH XÁC ĐỊNH SỐ NGUYÊN TỐ

Input: Nhập vào từ bàn phím số x
Output: Kết luận x có phải là số nguyên tố hay không
Biết rằng: Số nguyên tố là số chỉ chia hết cho 1 và chính nó
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
	printf("=== CHUONG TRINH KIEM TRA SO X CO PHAI LA SO NGUYEN TO? ===\n");
	printf("Thong tin:\n");
	printf("- So x = %d \n", x);
	
	if(x < 2) {
		printf("- Ket qua: %d KHONG phai la so NGUYEN TO", x);
	}
	else {
		// Chay vong lap tu 2 -> x
		int count = 0;
		for(int i = 2; i < x; i++) {
			if(x % i == 0) {
				count++;
			}
		}
		
		// Ket qua
		if(count == 0) {
			printf("- Ket qua: %d LA so NGUYEN TO", x);
		} else {
			printf("- Ket qua: %d KHONG phai la so NGUYEN TO", x);
		}
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}