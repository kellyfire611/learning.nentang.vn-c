/*
BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI

Input: Nhập vào 1 chuỗi
Output: Số lượng nguyên âm và phụ âm trong chuỗi
Biết rằng: Nguyên âm gồm: a,e,i,o,u
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	// 1. Khoi tao mang 1 chieu 50 phan tu
	char cau[50];
	
	// 2. INPUT nhập liệu
	printf("Moi ban nhap: ");
	gets(cau);
	
	// 3. OUTPUT xuất ra màn hình
	printf("=== CHUONG TRINH DEM NGUYEN AM VA PHU AM CUA 1 CHUOI ===\n");
	printf("Thong tin:\n");
	printf("- Cau vua nhap la: %s\n", cau);
	int dodai = strlen(cau);
	printf("- Do dai (length) cua cau vua nhap: %d", dodai);
	
	// 4. Duyet vong lap dem nguyen am va phu am
	int demnguyenam = 0;
	int demphuam = 0;
	for(int i=0; i<dodai; i++) {
		if(cau[i] == 'a'
			|| cau[i] == 'e'
			|| cau[i] == 'i'
			|| cau[i] == 'o'
			|| cau[i] == 'u'
		) {
			demnguyenam++;
		}
		else {
			demphuam++;
		}
	}
	
	// 5. In ra man hinh ket qua
	printf("\nTong so nguyen am: %d", demnguyenam);
	printf("\nTong so phu am: %d", demphuam);
	
	getch(); // Lenh dung man hinh
	return 0;
}