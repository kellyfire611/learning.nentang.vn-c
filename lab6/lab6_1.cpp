/*
BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG

Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử
Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai báo biến
	int N;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap N: ");
	scanf("%d", &N);
	
	// 3. Khoi tao mang 1 chieu gom N phan tu
	int dsconso[N];

	// 4. Duyet vong lap tu 0->N. Moi nguoi dung nhap lieu
	for(int i=0; i<N; i++) {
		printf("Moi nhap phan tu vi tri thu %d: ", i);
		scanf("%d", &dsconso[i]);
	}
	
	// 4. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH TINH TRUNG BINH TONG CAC CON SO CHIA HET CHO 3 TRONG MANG ===\n");
	printf("Thong tin:\n");
	printf("- Mang vua nhap la\n");
	for(int i=0; i<N; i++) {
		printf("%d ", dsconso[i]);
	}
	
	// 5. Tinh tong trung binh cac con so chia het cho 3
	int tong = 0;
	int dem = 0;
	for(int i=0; i<N; i++) {
		if(dsconso[i] % 3 == 0) {
			tong += dsconso[i];
			dem++;
		}
	}
	
	float kq = (float)tong / dem;
	
	// 6. In ra man hinh ket qua
	printf("Trung binh cong la: %f", kq);
	
	getch(); // Lenh dung man hinh
	return 0;
}