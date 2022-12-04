/*
BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH LƯU THÔNG TIN SINH VIÊN VÀ SẮP XẾP SINH VIÊN THEO ĐIỂM TĂNG DẦN
		CÓ THẺ TÌM KIẾM SINH VIÊN THEO MÃ SINH VIÊN

Input: Nhập vào từ bàn phím các thông tin sinh viên như: mã số sinh viên, tên sinh viên, ngành học, điểm trung bình
	- Cho người dùng nhập vào mã số sinh viên cần tìm kiếm.
Output: Xuất ra thông tin của sinh viên cần tìm kiếm trên màn hình, sắp xếp theo điểm tăng dần

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

typedef SinhVien SV;

// Hàm hoán vị
void hoanVi(SV *sinhvien1, SV *sinhvien2) {
	SV temp;
	
	temp = *sinhvien1;
	*sinhvien1 = *sinhvien2;
	*sinhvien2 = temp;
}

int main() {
	// 1. INPUT
	int N;
	printf("Moi nhap so luong Sinh vien: ");
	scanf("%d", &N);

	// 2. Khoi tao mang SinhVien N nguoi
	SV danhsachSV[N];
	
	// 3. Nhap thong tin Sinh vien
	for(int i=0; i<N; i++) {
		printf("=== Moi nhap thong tin sinh vien thu %d ===\n", i);
		fflush(stdin);
		
		printf("- MSSV: ");
		gets(danhsachSV[i].mssv);
		
		printf("- Ho ten: ");
		gets(danhsachSV[i].tenSV);
		
		printf("- Nganh hoc: ");
		gets(danhsachSV[i].nganhHoc);
		
		printf("- Diem trung binh: ");
		scanf("%f", &danhsachSV[i].diemTB);
	}
	
	// 4. Giái thuật sắp xếp theo điểm tăng dần
	for(int i=0; i<N; i++) {
		for(int j=i+1; j<N; j++) {
			if(danhsachSV[i].diemTB > danhsachSV[j].diemTB) {
				hoanVi(&danhsachSV[i], &danhsachSV[j]);
			}
		}
	}
	
	// 5. OUTPUT xuất ra màn hình
	printf("====== DANH SACH SINH VIEN ======\n");
	for(int i=0; i<N; i++) {
		printf("=== Thong tin sinh vien thu %d:\n", i);
		printf("- MSSV: ");
		puts(danhsachSV[i].mssv);
		
		printf("- Ho ten: ");
		puts(danhsachSV[i].tenSV);
		
		printf("- Nganh hoc: ");
		puts(danhsachSV[i].nganhHoc);
		
		printf("- Diem trung binh: %f\n ", danhsachSV[i].diemTB);
	}
	
	// 6. Tìm kiếm sinh viên
	char tukhoatimkiem[50];
	printf("Moi nhap MSSV can tim: ");
	fflush(stdin);
	gets(tukhoatimkiem);
	
	// Duyệt vòng lặp qua danh sách sinh viên để dò tìm
	int vitriIndex = -1;
	for(int i=0; i<N; i++) {
		if(strcmp(danhsachSV[i].mssv, tukhoatimkiem) == 0) {
			vitriIndex = i;
		}
	}
	
	// In ra thông tin sinh viên tìm được
	printf("=== Thong tin sinh vien can tim: \n");
	fflush(stdin);
	
	printf("- MSSV: ");
	puts(danhsachSV[vitriIndex].mssv);
	
	printf("- Ho ten: ");
	puts(danhsachSV[vitriIndex].tenSV);
	
	printf("- Nganh hoc: ");
	puts(danhsachSV[vitriIndex].nganhHoc);
	
	printf("- Diem trung binh: %f\n ", danhsachSV[vitriIndex].diemTB);
	
	getch(); // Lenh dung man hinh
	return 0;
}