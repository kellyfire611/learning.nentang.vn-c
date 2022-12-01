/*
BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD

Input: Nhập vào username và password
Output: Đăng nhập thành công hay không thành công
Biết rằng:
	username phải bằng "admin"
	password phải bằng "123"
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	// 1. Khoi tao mang 1 chieu 50 phan tu
	char username[50];
	char password[50];
	
	// 2. INPUT nhập liệu
	printf("Moi ban nhap username: ");
	gets(username);
	
	printf("Moi ban nhap password: ");
	gets(password);
	
	// 3. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH DANG NHAP BANG USERNAME VA PASSWORD ===\n");
	printf("Thong tin:\n");
	printf("- Username vua nhap la: %s\n", username);
	printf("- Password vua nhap la: %s\n", password);
	
	// 4. Kiem tra
	// Neu username == "admin" VA password == "123"
	// -> Dang nhap thanh cong.
	// Neu khong:
	// -> Dang nhap that bai.
	int ss1 = strcmp(username, "admin");
	int ss2 = strcmp(password, "123");
	
	// 5. In ra man hinh ket qua
	if(ss1 == 0 && ss2 == 0) {
		printf("Dang nhap thanh cong!");
	} else {
		printf("Dang nhap that bai!");
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}