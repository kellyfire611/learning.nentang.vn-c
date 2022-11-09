/*
BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH
2.2 BẬC 2
Phương trình có dạng: ax2 + bx + c = 0
Input: Nhập vào từ bàn phím: a, b, c
Output: Nghiệm của phương trình

Biết rằng:
Nếu a == 0, phương trình thành bx + c = 0 
Ngược lại nếu a != 0
- Tính delta
- Nếu delta < 0: Phương trình vô nghiệm
- Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a)
- Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt 
	- X1 = (-b + căn(delta))/(2*a)
	- X2 = (-b – căn(delta))/(2*a)
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	// 1. Khai báo biến
	float a, b, c;
	
	// 2. INPUT nhập liệu
	printf("Moi so a: ");
	scanf("%f", &a);
	
	printf("Moi so b: ");
	scanf("%f", &b);
	
	printf("Moi so c: ");
	scanf("%f", &c);
	
	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	// 4. OUTPUT xuất ra màn hình
	printf("====== CHUONG TRINH GIAI PHUONG TRINH BAC HAI ======\n");
	printf("Thong tin:\n");
	printf("- Phuong trinh %fx2 + %fx + %f = 0 \n", a, b, c);
	printf("- Ket qua: ");
	
	if(a == 0) {
		// Phuong trinh tro thanh PTB1 bx + c = 0
		if(b == 0) {
			if(c == 0) {
				printf("Phuong trinh vo so nghiem");	
			}
			else {
				printf("Phuong trinh vo nghiem");
			}
		}
		else {
			float x;
			x = -c / b;
			printf("Phuong trinh co nghiem x = %f", x);
		}
	}
	else {
		float delta;
		delta = b*b - 4*a*c;
		if(delta < 0) {
			printf("Phuong trinh vo nghiem");
		}
		else if(delta == 0) {
			float x;
			x = -b / 2*a;
			printf("Phuong trinh co nghiem kep x = %f", x);
		}
		else if(delta > 0) {
			float x1, x2;
			x1 = (-b + sqrt(delta)) / 2*a;
			x2 = (-b - sqrt(delta)) / 2*a;
			printf("\nPhuong trinh co nghiem kep x1 = %f \n", x1);
			printf("Phuong trinh co nghiem kep x2 = %f \n", x2);
		}
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}