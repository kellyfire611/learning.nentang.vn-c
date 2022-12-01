/*
BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU

Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột
Output: Xuất ra màn hình ma trận bình phương
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai báo biến
	int N, M;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap N dong: ");
	scanf("%d", &N);
	
	printf("Moi nhap M cot: ");
	scanf("%d", &M);
	
	// 3. Khoi tao mang 2 chieu gom N x M phan tu
	int dsconso[N][M];

	// 4. Duyet vong lap moi nguoi dung nhap lieu
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			printf("Moi nhap phan tu vi tri thu [%d, %d]: ", i, j);
			scanf("%d", &dsconso[i][j]);
		}
	}
	
	// 4. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH TINH BINH PHUONG CAC PHAN TU TRONG MANG 2 CHIEU ===\n");
	printf("Thong tin:\n");
	printf("- Mang vua nhap la\n");
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			printf("%d ", dsconso[i][j]);
		}
		printf("\n");
	}
	
	// 5. Binh phuong cac phan tu
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			int binhphuong = dsconso[i][j] * dsconso[i][j];
			dsconso[i][j] = binhphuong;
		}
	}
	
	// 6. In ra man hinh ket qua
	printf("\nMang sau khi BINH PHUONG:\n");
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			printf("%d ", dsconso[i][j]);
		}
		printf("\n");
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}