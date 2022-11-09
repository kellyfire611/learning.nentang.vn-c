/*
BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN
Input: Nhập vào số điện tiêu thụ hàng tháng
Output: Hiển thị số tiền cần phải đóng
Biết rằng:
TT Số kWh sử dụng Giá bán điện (đồng/kWh)
Bậc 1 Cho kWh từ 0 - 50 1.678
Bậc 2 Cho kWh từ 51 - 100 1.734
Bậc 3 Cho kWh từ 101 - 200 2.014
Bậc 4 Cho kWh từ 201 - 300 2.536
Bậc 5 Cho kWh từ 301 - 400 2.834
Bậc 6 Cho kWh từ 401 trở lên 2.927
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	// 1. Khai báo biến
	float tong_so_dien_tieu_thu;
	
	// 2. INPUT nhập liệu
	printf("Moi so tong so dien tieu thu: ");
	scanf("%f", &tong_so_dien_tieu_thu);
	
	// 3. PROCESS xử lý tính toán theo Nghiệp vụ Logic
	float gia_tien_bac_1 = 1.678;
	float gia_tien_bac_2 = 1.734;
	float gia_tien_bac_3 = 2.014;
	float gia_tien_bac_4 = 2.536;
	float gia_tien_bac_5 = 2.834;
	float gia_tien_bac_6 = 2.927;
	
	float so_kwh_tinh_tien_bac_1 = 0;
	float so_kwh_tinh_tien_bac_2 = 0;
	float so_kwh_tinh_tien_bac_3 = 0;
	float so_kwh_tinh_tien_bac_4 = 0;
	float so_kwh_tinh_tien_bac_5 = 0;
	float so_kwh_tinh_tien_bac_6 = 0;
	
	float so_tien_phai_tra_bac_1 = 0;
	float so_tien_phai_tra_bac_2 = 0;
	float so_tien_phai_tra_bac_3 = 0;
	float so_tien_phai_tra_bac_4 = 0;
	float so_tien_phai_tra_bac_5 = 0;
	float so_tien_phai_tra_bac_6 = 0;
	
	float tong_so_tien_phai_tra = 0;
	float so_kwh_con_lai_chua_tinh_tien = 0;
	
	if(tong_so_dien_tieu_thu >= 0 && tong_so_dien_tieu_thu <= 50) {
		printf("bac 1\n");
		// Xai trong dinh muc dien bac 1 (0 - 50 kWh)
		so_kwh_tinh_tien_bac_1 = tong_so_dien_tieu_thu;
		so_tien_phai_tra_bac_1 = so_kwh_tinh_tien_bac_1 * gia_tien_bac_1;
		
		tong_so_tien_phai_tra = tong_so_dien_tieu_thu * gia_tien_bac_1;
	}
	else if(tong_so_dien_tieu_thu >= 51 && tong_so_dien_tieu_thu <= 100) {
		printf("bac 2\n");
		// Xai den dinh muc dien bac 2 (51 - 100 kWh)
		// => tien dien bac 1 la phai tra du
		so_kwh_tinh_tien_bac_1 = 50;
		so_tien_phai_tra_bac_1 = so_kwh_tinh_tien_bac_1 * gia_tien_bac_1;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_1;
		so_kwh_con_lai_chua_tinh_tien = tong_so_dien_tieu_thu - so_kwh_tinh_tien_bac_1;
		
		// tinh tien bac 2
		so_kwh_tinh_tien_bac_2 = so_kwh_con_lai_chua_tinh_tien;
		so_tien_phai_tra_bac_2 = so_kwh_tinh_tien_bac_2 * gia_tien_bac_2;
		
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_2;
	}
	else if(tong_so_dien_tieu_thu >= 101 && tong_so_dien_tieu_thu <= 200) {
		printf("bac 3\n");
		// Xai den dinh muc dien bac 3 (101 - 200 kWh)
		// => tien dien bac 1 la phai tra du
		so_kwh_tinh_tien_bac_1 = 50;
		so_tien_phai_tra_bac_1 = so_kwh_tinh_tien_bac_1 * gia_tien_bac_1;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_1;
		so_kwh_con_lai_chua_tinh_tien = tong_so_dien_tieu_thu - so_kwh_tinh_tien_bac_1;
		
		// => tien dien bac 2 la phai tra du
		so_kwh_tinh_tien_bac_2 = 50;
		so_tien_phai_tra_bac_2 = so_kwh_tinh_tien_bac_2 * gia_tien_bac_2;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_2;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_2;
		
		// tinh tien bac 3
		so_kwh_tinh_tien_bac_3 = so_kwh_con_lai_chua_tinh_tien;
		so_tien_phai_tra_bac_3 = so_kwh_tinh_tien_bac_3 * gia_tien_bac_3;
		
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_3;
	}
	else if(tong_so_dien_tieu_thu >= 201 && tong_so_dien_tieu_thu <= 300) {
		printf("bac 4\n");
		// Xai den dinh muc dien bac 4 (201 - 300 kWh)
		// => tien dien bac 1 la phai tra du
		so_kwh_tinh_tien_bac_1 = 50;
		so_tien_phai_tra_bac_1 = so_kwh_tinh_tien_bac_1 * gia_tien_bac_1;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_1;
		so_kwh_con_lai_chua_tinh_tien = tong_so_dien_tieu_thu - so_kwh_tinh_tien_bac_1;
		
		// => tien dien bac 2 la phai tra du
		so_kwh_tinh_tien_bac_2 = 50;
		so_tien_phai_tra_bac_2 = so_kwh_tinh_tien_bac_2 * gia_tien_bac_2;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_2;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_2;
		
		// => tien dien bac 3 la phai tra du
		so_kwh_tinh_tien_bac_3 = 100;
		so_tien_phai_tra_bac_3 = so_kwh_tinh_tien_bac_3 * gia_tien_bac_3;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_3;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_3;
		
		// tinh tien bac 4
		so_kwh_tinh_tien_bac_4 = so_kwh_con_lai_chua_tinh_tien;
		so_tien_phai_tra_bac_4 = so_kwh_tinh_tien_bac_4 * gia_tien_bac_4;
		
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_4;
	}
	else if(tong_so_dien_tieu_thu >= 301 && tong_so_dien_tieu_thu <= 400) {
		printf("bac 5\n");
		// Xai den dinh muc dien bac 5 (301 - 400 kWh)
		// => tien dien bac 1 la phai tra du
		so_kwh_tinh_tien_bac_1 = 50;
		so_tien_phai_tra_bac_1 = so_kwh_tinh_tien_bac_1 * gia_tien_bac_1;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_1;
		so_kwh_con_lai_chua_tinh_tien = tong_so_dien_tieu_thu - so_kwh_tinh_tien_bac_1;
		
		// => tien dien bac 2 la phai tra du
		so_kwh_tinh_tien_bac_2 = 50;
		so_tien_phai_tra_bac_2 = so_kwh_tinh_tien_bac_2 * gia_tien_bac_2;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_2;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_2;
		
		// => tien dien bac 3 la phai tra du
		so_kwh_tinh_tien_bac_3 = 100;
		so_tien_phai_tra_bac_3 = so_kwh_tinh_tien_bac_3 * gia_tien_bac_3;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_3;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_3;
		
		// => tien dien bac 4 la phai tra du
		so_kwh_tinh_tien_bac_4 = 100;
		so_tien_phai_tra_bac_4 = so_kwh_tinh_tien_bac_4 * gia_tien_bac_4;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_4;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_4;
		
		// tinh tien bac 5
		so_kwh_tinh_tien_bac_5 = so_kwh_con_lai_chua_tinh_tien;
		so_tien_phai_tra_bac_5 = so_kwh_tinh_tien_bac_5 * gia_tien_bac_5;
		
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_5;
	}
	else {
		printf("bac 6\n");
		// Xai den dinh muc dien bac 6 (401 kWh tro len)
		// => tien dien bac 1 la phai tra du
		so_kwh_tinh_tien_bac_1 = 50;
		so_tien_phai_tra_bac_1 = so_kwh_tinh_tien_bac_1 * gia_tien_bac_1;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_1;
		so_kwh_con_lai_chua_tinh_tien = tong_so_dien_tieu_thu - so_kwh_tinh_tien_bac_1;
		
		// => tien dien bac 2 la phai tra du
		so_kwh_tinh_tien_bac_2 = 50;
		so_tien_phai_tra_bac_2 = so_kwh_tinh_tien_bac_2 * gia_tien_bac_2;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_2;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_2;
		
		// => tien dien bac 3 la phai tra du
		so_kwh_tinh_tien_bac_3 = 100;
		so_tien_phai_tra_bac_3 = so_kwh_tinh_tien_bac_3 * gia_tien_bac_3;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_3;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_3;
		
		// => tien dien bac 4 la phai tra du
		so_kwh_tinh_tien_bac_4 = 100;
		so_tien_phai_tra_bac_4 = so_kwh_tinh_tien_bac_4 * gia_tien_bac_4;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_4;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_4;
		
		// => tien dien bac 5 la phai tra du
		so_kwh_tinh_tien_bac_5 = 100;
		so_tien_phai_tra_bac_5 = so_kwh_tinh_tien_bac_5 * gia_tien_bac_5;
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_5;
		so_kwh_con_lai_chua_tinh_tien -= so_kwh_tinh_tien_bac_5;
		
		// tinh tien bac 6
		so_kwh_tinh_tien_bac_6 = so_kwh_con_lai_chua_tinh_tien;
		so_tien_phai_tra_bac_6 = so_kwh_tinh_tien_bac_6 * gia_tien_bac_6;
		
		tong_so_tien_phai_tra += so_tien_phai_tra_bac_6;
	}
	
	// 4. OUTPUT xuất ra màn hình
	printf("====== CHUONG TRINH TINH TIEN DIEN THEO BAC ======\n");
	printf("Thong tin:\n");
	printf("- Tong so dien tieu thu: %f \n", tong_so_dien_tieu_thu);
	printf("- Bac 1: %f kWh * %f = %f \n", so_kwh_tinh_tien_bac_1, gia_tien_bac_1, so_tien_phai_tra_bac_1);
	printf("- Bac 2: %f kWh * %f = %f \n", so_kwh_tinh_tien_bac_2, gia_tien_bac_2, so_tien_phai_tra_bac_2);
	printf("- Bac 3: %f kWh * %f = %f \n", so_kwh_tinh_tien_bac_3, gia_tien_bac_3, so_tien_phai_tra_bac_3);
	printf("- Bac 4: %f kWh * %f = %f \n", so_kwh_tinh_tien_bac_4, gia_tien_bac_4, so_tien_phai_tra_bac_4);
	printf("- Bac 5: %f kWh * %f = %f \n", so_kwh_tinh_tien_bac_5, gia_tien_bac_5, so_tien_phai_tra_bac_5);
	printf("- Bac 6: %f kWh * %f = %f \n", so_kwh_tinh_tien_bac_6, gia_tien_bac_6, so_tien_phai_tra_bac_6);
	printf("- Tong tien phai tra: %f \n", tong_so_tien_phai_tra);

	getch(); // Lenh dung man hinh
	return 0;
}