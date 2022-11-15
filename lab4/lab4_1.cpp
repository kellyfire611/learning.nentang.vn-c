/*
BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2

Input: nhập từ bàn phím 2 giá trị min, max
Output: Trung bình tổng của các số tự nhiên chia hết cho 2 từ min tới max
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai báo biến
	int min, max;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap min: ");
	scanf("%d", &min);
	
	printf("Moi nhap max: ");
	scanf("%d", &max);
	
	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	float tong = 0;
	float dem = 0;
	float trungBinh = 0;
	
	// Chay vong lap tu min -> max
	int i = min;         // 1. Khoi tao bien chay
	while(i <= max) {    // 2. Xet dieu kien de chay vong lap
		if(i % 2 == 0) {
			tong += i;
			dem++;
		}
		i++;             // 3. Tang bien chay len 1 don vi
	}
	trungBinh = tong / dem;
	
	// 4. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH TINH TONG CAC SO TU NHIEN CHIA HET CHO 2 ===\n");
	printf("Thong tin:\n");
	printf("- Duyet vong lap cac gia tri tu %d den %d \n", min, max);
	printf("- Ket qua: %f", trungBinh);
	
	getch(); // Lenh dung man hinh
	return 0;
}