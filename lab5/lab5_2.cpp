/*
BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN

Input: Nhập vào năm
Output: Có phải là năm nhuận hay không?

Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
chia hết cho 100
*/
#include<stdio.h>
#include<conio.h>

// Ham xac dinh co phai nam nhuan hay khong?
bool laNamNhuan(int nam) {
	// Giai thuat xac dinh nam Nhuan
	if(
		(nam % 400 == 0) // - La nam chia het cho 400
		|| ((nam % 4 == 0) && (nam % 100 != 0)) // - Hoac nam chia het cho 4 nhung khong chia het cho 100
	) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	// 1. Khai báo biến
	int nam;
	
	// 2. INPUT nhập liệu
	printf("Moi nhap nam: ");
	scanf("%d", &nam);

	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	bool kq;
	kq = laNamNhuan(nam);
	
	// 4. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH XAC DINH NAM NHUAN ===\n");
	printf("Thong tin:\n");
	printf("- Nam vua nhap: %d \n", nam);
	if(kq == true) {
		printf("- Ket qua: la nam nhuan.");	
	} 
	else {
		printf("- Ket qua: khong phai la nam nhuan.");	
	}
	
	getch(); // Lenh dung man hinh
	return 0;
}