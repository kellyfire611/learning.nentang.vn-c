/*
BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG

Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử
Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng
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
	printf("=== CHUONG TRINH TIM GIA TRI LON NHAT VA NHO NHAT TRONG MANG ===\n");
	printf("Thong tin:\n");
	printf("- Mang vua nhap la\n");
	for(int i=0; i<N; i++) {
		printf("%d ", dsconso[i]);
	}
	
	// 5. Tim gia tri lon nhat (MAX) va gia tri nho nhat (MIN) trong mang
	int min = dsconso[0];
	int max = dsconso[0];
	for(int i=0; i<N; i++) {
		// Tim Max
		if(max < dsconso[i]) {
			max = dsconso[i];
		}
		
		// Tim Min
		if(min > dsconso[i]) {
			min = dsconso[i];
		}
	}
	
	// 6. In ra man hinh ket qua
	printf("\nGia tri lon nhat (MAX) la: %d", max);
	printf("\nGia tri nho nhat (MIN) la: %d", min);
	
	getch(); // Lenh dung man hinh
	return 0;
}