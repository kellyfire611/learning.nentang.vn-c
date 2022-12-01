/*
BÀI 3: SẮP XẾP MẢNG THEO THỨ TỰ GIẢM DẦN

Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử
Output: Xuất ra màn hình kết quả mảng đã sắp xếp
*/
#include<stdio.h>
#include<conio.h>

// Ham hoan vi 2 so
void hoanVi(int *so1, int *so2) {
	int temp;
	
	temp = *so1;
	*so1 = *so2;
	*so2 = temp;
}

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
	printf("=== CHUONG TRINH TIM GIA TRI LON NHAT VA NHO NHAT TRONG MANG ===\n");
	printf("Thong tin:\n");
	printf("- Mang vua nhap la\n");
	for(int i=0; i<N; i++) {
		printf("%d ", dsconso[i]);
	}
	
	// 5. Sap xep mang theo thu tu GIAM DAN
	for(int i=0; i<N; i++) {
		for(int j=i+1; j<N; j++) {
			if(dsconso[i] < dsconso[j]) {
				hoanVi(&dsconso[i], &dsconso[j]);
			}
		}
	}
	
	// 6. In ra man hinh ket qua
	printf("\nMang sau khi sap xep GIAM DAN:\n");
	for(int i=0; i<N; i++) {
		printf("%d ", dsconso[i]);
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}