/*
BÀI 3: XÂY DỰNG HÀM HOÁN VỊ

Input: Nhập vào từ bàn phím 2 giá trị a,b
Output: hoán vị 2 giá trị của a và b

Hướng dẫn thực hiện: Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu
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
	int a, b;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap so a: ");
	scanf("%d", &a);
	
	printf("Moi nhap so b: ");
	scanf("%d", &b);

	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	// 4. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH HOAN VI 2 SO ===\n");
	printf("Thong tin:\n");
	printf("- Cac so vua nhap la: %d %d\n", a, b);
	
	// Goi ham hoan vi 2 so
	hoanVi(&a, &b);
	
	// In ra man hinh thong tin moi
	printf("- Cac so sau hoan vi la: %d %d\n", a, b);
	
	getch(); // Lenh dung man hinh
	return 0;
}