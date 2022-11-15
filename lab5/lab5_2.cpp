/*
BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN

Input: Nhập vào năm
Output: Có phải là năm nhuận hay không?

Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
chia hết cho 100
*/
#include<stdio.h>
#include<conio.h>

// Ham tim so lon nhat
int timSoLonNhat(int so1, int so2, int so3) {
	int max;
	
	// Giai thuat tim so lon nhat trong 3 so
	if((so1 > so2) && (so1 > so3)) {
		max = so1;
	}
	else if((so2 > so3) && (so2 > so1)) {
		max = so2;
	}
	else {
		max = so3;
	}
	
	// Tra ve ket qua
	return max;
}

int main() {
	// 1. Khai báo biến
	int num1, num2, num3;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap so 1: ");
	scanf("%d", &num1);
	
	printf("Moi nhap so 2: ");
	scanf("%d", &num2);
	
	printf("Moi nhap so 3: ");
	scanf("%d", &num3);
	
	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	int kq;
	kq = timSoLonNhat(num1, num2, num3);
	
	// 4. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH TIM SO LON NHAT TRONG 3 SO ===\n");
	printf("Thong tin:\n");
	printf("- Cac con so vua nhap: %d %d %d \n", num1, num2, num3);
	printf("- Ket qua so lon nhat la: %d", kq);
	
	getch(); // Lenh dung man hinh
	return 0;
}