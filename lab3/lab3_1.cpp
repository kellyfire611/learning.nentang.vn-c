/*
BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
Input: Nhập vào điểm của sinh viên (0-10)
Output: Hiển thị ra màn hình học lực của sinh viên

Biết rằng:
Học lực xuất sắc: Điểm >= 9
Học lực giỏi: 9 > điểm >= 8
Học lực khá: 8 > điểm >= 6.5
Học lực trung bình: 6.5 > điểm >= 5
Học lực yếu: 5 > điểm >= 3.5
Học lực kém: 3.5 > điểm
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai báo biến
	float diem_tb;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap diem trung binh: ");
	scanf("%f", &diem_tb);
	
	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	// 4. OUTPUT xuất ra màn hình
	printf("====== CHUONG TRINH XEP KET QUA SINH VIEN ======\n");
	printf("Thong tin sinh vien:\n");
	printf("- Diem trung binh: %f \n", diem_tb);
	printf("- Xet loai Hoc luc: ");
	if(diem_tb < 0) {
		printf("Diem vo ly, KHONG XET DUOC!");
	}
	else if(diem_tb >= 0 && diem_tb < 3.5) {
		printf("KEM");
	}
	else if(diem_tb >= 3.5 && diem_tb < 5) {
		printf("YEU");
	}
	else if(diem_tb >= 5 && diem_tb < 6.5) {
		printf("TRUNG BINH");
	}
	else if(diem_tb >= 6.5 && diem_tb < 8) {
		printf("KHA");
	}
	else if(diem_tb >= 8 && diem_tb < 9) {
		printf("GIOI");
	}
	else if(diem_tb >= 9 && diem_tb <= 10) {
		printf("XUAT SAC");
	}
	else {
		printf("Diem vo ly, KHONG XET DUOC!");
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}