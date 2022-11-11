/*
BÀI THÊM 1: XÂY DỰNG CHƯƠNG TRÌNH NHẬP THÔNG TIN SINH VIÊN
Input: Nhập vào từ bàn phím các thông tin Sinh viên sau:
- Họ tên
- Địa chỉ
- Email
- Điểm trung bình năm học
- Năm sinh
Output: Hiển thị ra màn hình đầy đủ các thông tin Sinh viên vừa nhập:
- Họ tên: XXXX
- Địa chỉ: XXXX 
- Email: XXXX 
- Điểm trung bình năm học: XXXX 
- Năm sinh: 1999
=> bạn hiện dang YYYY tuoi.
*/
#include<stdio.h>
#include<conio.h>
#define MAX_LIMIT 50

int main() {
	// 1. Khai báo biến
	char ho_ten[MAX_LIMIT];
	char dia_chi[MAX_LIMIT];
	char email[MAX_LIMIT];
	float diem_tb;
	int nam_sinh;

	// 2. INPUT nhập liệu
	printf("Moi nhap ho ten: ");
	fgets(ho_ten, MAX_LIMIT, stdin);
	
	printf("Moi nhap dia chi: ");
	fgets(dia_chi, MAX_LIMIT, stdin);
	
	printf("Moi nhap email: ");
	fgets(email, MAX_LIMIT, stdin);
	
	printf("Moi nhap diem trung binh: ");
	scanf("%f", &diem_tb);
	
	printf("Moi nhap diem nam sinh: ");
	scanf("%d", &nam_sinh);
	
	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	int tuoi;
	tuoi = 2022 - nam_sinh;
	
	// 4. OUTPUT xuất ra màn hình
	printf("====== CHUONG TRINH QUAN LY SINH VIEN ======\n");
	printf("Thong tin sinh vien:\n");
	printf("- Ho ten: %s", ho_ten);
	printf("- Dia chi: %s", dia_chi);
	printf("- Email: %s", email);
	printf("- Diem trung binh: %f \n", diem_tb);
	printf("- Nam sinh: %d \n", nam_sinh);
	printf("- Tuoi cua ban: %d \n", tuoi);
	
	getch(); // Lenh dung man hinh
	return 0;
}