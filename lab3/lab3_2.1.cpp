/*
BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH
2.1 BẬC 1
Phương trình có dạng ax + b = 0
Input: nhập vào từ bàn phím giá trị của a, b
Output: Hiển thị nghiệm của phương trình

Biết rằng:
Nếu a == 0, 
 b == 0: Phương trình có vô số nghiệm
 b != 0: Phương trình vô nghiệm
Ngược lại: Phương trình có nghiệm x = -b/a
*/
#include<stdio.h>
#include<conio.h>

int main() {
	// 1. Khai báo biến
	float a, b;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap so a: ");
	scanf("%f", &a);
	
	printf("Moi nhap so b: ");
	scanf("%f", &b);
	
	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	// 4. OUTPUT xuất ra màn hình
	printf("====== CHUONG TRINH GIAI PHUONG TRINH BAC NHAT ======\n");
	printf("Thong tin:\n");
	printf("- Phuong trinh %fx + %f = 0 \n", a, b);
	printf("- Ket qua: ");
	if(a == 0) {
		if(b == 0) {
			printf("Phuong trinh vo so nghiem");	
		}
		else {
			printf("Phuong trinh vo nghiem");
		}
	}
	else {
		float ketqua;
		ketqua = -b / a;
		printf("Phuong trinh co nghiem x = %f", ketqua);
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}