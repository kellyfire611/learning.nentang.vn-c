/*
BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa
Output: Hiển thị ra màn hình điểm trung bình
Biết rằng:
- Hệ số của toán: x3
- Hệ số của lý: x2
- Hệ số của hóa: x1
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai bao bien
	float diem_toan;
	float diem_ly;
	float diem_hoa;
	float dtb;
	
	// 2. INPUT nhap lieu
	printf("Moi nhap diem toan: ");
	scanf("%f", &diem_toan);
	
	printf("Moi nhap diem ly: ");
	scanf("%f", &diem_ly);
	
	printf("Moi nhap diem hoa: ");
	scanf("%f", &diem_hoa);
	
	// 3. PROCESS tinh toan
	dtb = ((diem_toan * 3) + (diem_ly * 2) + (diem_hoa * 1)) / 3;
	
	// 4. OUTPUT xuat ra man hinh
	printf("====== CHUONG TRINH TINH DIEM TRUNG BINH ======\n");
	printf("- Diem toan: %f \n", diem_toan);
	printf("- Diem ly: %f \n", diem_ly);
	printf("- Diem hoa: %f \n", diem_hoa);
	printf("=> Diem trung binh: %f \n", dtb);
	
	getch(); // Lenh dung man hinh
	return 0;
}