/*
BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH LƯU THÔNG TIN SINH VIÊN

Input: Nhập vào từ bàn phím các thông tin sinh viên như: mã số sinh viên, tên sinh viên, ngành học, điểm trung bình
Output: Xuất ra thông tin của tất cả sinh viên trên màn hình

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

// Cau truc Struct SinhVien
struct SinhVien {
	char mssv[50];
	char tenSV[50];
	char nganhHoc[50];
	float diemTB;
};

int main() {
	// 1. Khoi tao mang SinhVien 50 nguoi
	SinhVien danhsachSV[50];
	int N;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap so luong Sinh vien: ");
	scanf("%d", &N);
	
	// 3. Nhap thong tin Sinh vien
	for(int i=0; i<N; i++) {
		printf("Moi nhap thong tin sinh vien thu %d\n", i);
		
		printf("- MSSV: ");
		gets(danhsachSV[i].mssv);
		printf("- Ho ten: ");
		gets(danhsachSV[i].tenSV);
		printf("- Nganh hoc: ");
		gets(danhsachSV[i].nganhHoc);
		printf("- Diem trung binh: ");
		scanf("%f", danhsachSV[i].diemTB);
	}
	
	// 3. OUTPUT xuất ra màn hình

	
	getch(); // Lenh dung man hinh
	return 0;
}