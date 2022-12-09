/*
PARSE 2: thực hiện các chức năng trong chương trình
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
Chức năng số 4: Tính tiền điện
Input: Nhập vào số (kwh) điện sử dụng
Output: Hiển thị ra số tiền cần phải trả
Biết rằng: 
TT Số | kWh sử dụng            | Giá bán điện (đồng/kWh)
---------------------------------------------------------
Bậc 1 | Cho kWh từ 0 - 50      | 1.678
Bậc 2 | Cho kWh từ 51 - 100    | 1.734
Bậc 3 | Cho kWh từ 101 - 200   | 2.014
Bậc 4 | Cho kWh từ 201 - 300   | 2.536
Bậc 5 | Cho kWh từ 301 - 400   | 2.834
Bậc 6 | Cho kWh từ 401 trở lên | 2.927
*/
void chucNangSo4() {
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
	printf("- Tong so dien tieu thu: %.0f kWh\n", tong_so_dien_tieu_thu);
	printf("- Bac 1: %.0f kWh * %.4f = %.4f \n", so_kwh_tinh_tien_bac_1, gia_tien_bac_1, so_tien_phai_tra_bac_1);
	printf("- Bac 2: %.0f kWh * %.4f = %.4f \n", so_kwh_tinh_tien_bac_2, gia_tien_bac_2, so_tien_phai_tra_bac_2);
	printf("- Bac 3: %.0f kWh * %.4f = %.4f \n", so_kwh_tinh_tien_bac_3, gia_tien_bac_3, so_tien_phai_tra_bac_3);
	printf("- Bac 4: %.0f kWh * %.4f = %.4f \n", so_kwh_tinh_tien_bac_4, gia_tien_bac_4, so_tien_phai_tra_bac_4);
	printf("- Bac 5: %.0f kWh * %.4f = %.4f \n", so_kwh_tinh_tien_bac_5, gia_tien_bac_5, so_tien_phai_tra_bac_5);
	printf("- Bac 6: %.0f kWh * %.4f = %.4f \n", so_kwh_tinh_tien_bac_6, gia_tien_bac_6, so_tien_phai_tra_bac_6);
	printf("- Tong tien phai tra: %.4f \n", tong_so_tien_phai_tra);
}

void chucNangSo4_Cach2() {
	// 1. Khai báo biến
	float                gia_dien_theo_bac[6] = { 1.678, 1.734, 2.014, 2.536, 2.834, 2.927  };
	int     so_kwh_duoc_tinh_tien_theo_bac[6] = { 50   , 50   , 100  , 100  , 100  , 999999 }; //999999 xem như vô cùng
	int                so_kwh_max_theo_bac[6] = { 50   , 100  , 200  , 300  , 400  , 999999 }; //999999 xem như vô cùng

	// 2. INPUT nhập liệu
	float tong_so_dien_tieu_thu;
	printf("Moi so tong so dien tieu thu: ");
	scanf("%f", &tong_so_dien_tieu_thu);
	
	// 3. Xác định xem tổng số điện tiêu thụ đã đến bậc nào
	int bac = 0;
	for(int i=0; i<6; i++) {
		if(tong_so_dien_tieu_thu < so_kwh_max_theo_bac[i]) {
			bac = i;
			break;
		}
	}
	
	// 4. Tính tiền theo bậc
	printf("====== CHUONG TRINH TINH TIEN DIEN THEO BAC ======\n");
	printf("Thong tin:\n");
	printf("- Tong so dien tieu thu: %.0f kWh\n", tong_so_dien_tieu_thu);
	
	float tong_so_tien_phai_tra = 0;
	for(int i=0; i<=bac; i++) {
		float sotienphaitra_theo_bacdangxet = 0;
		int sokwh_theo_bacdangxet = 0;
		if(i == bac) {
			if(i-1 > 0) {
				sokwh_theo_bacdangxet = tong_so_dien_tieu_thu - so_kwh_max_theo_bac[i - 1];
			}
			else {
				sokwh_theo_bacdangxet = tong_so_dien_tieu_thu;	
			}
			
			sotienphaitra_theo_bacdangxet = gia_dien_theo_bac[i] * sokwh_theo_bacdangxet;
			tong_so_tien_phai_tra += sotienphaitra_theo_bacdangxet;
			printf("- Bac %d: %d kWh * %.4f = %.4f \n", (i+1), sokwh_theo_bacdangxet, gia_dien_theo_bac[i], sotienphaitra_theo_bacdangxet);
		} else {
			sotienphaitra_theo_bacdangxet = gia_dien_theo_bac[i] * so_kwh_duoc_tinh_tien_theo_bac[i];
			tong_so_tien_phai_tra += sotienphaitra_theo_bacdangxet;	
			printf("- Bac %d: %d kWh * %.4f = %.4f \n", (i+1), so_kwh_duoc_tinh_tien_theo_bac[i], gia_dien_theo_bac[i], sotienphaitra_theo_bacdangxet);
		}
	}
	
	printf("- Tong tien phai tra: %.4f \n", tong_so_tien_phai_tra);
}

int main() {
	// 1. Khai báo biến
	char yn;
	int lua_chon = -1;

	// 2. OUTPUT xuất ra màn hình MENU	
	Chon:
		printf("================ MENU CHUONG TRINH ==============\n");
		printf("+ 0. Thoat.                                     +\n");
		printf("+ 1. Kiem tra so nguyen.                        +\n");
		printf("+ 2. Tim Uoc so chung va Boi so chung cua 2 so. +\n");
		printf("+ 3. Tinh tien cho quan Karaoke.                +\n");
		printf("+ 4. Tinh tien dien.                            +\n");
		printf("+ 5. Doi tien.                                  +\n");
		printf("+ 6. Tinh lai suat vay ngan hang vay tra gop.   +\n");
		printf("+ 7. Vay tien mua xe.                           +\n");
		printf("+ 8. Sap xep thong tin sinh vien.               +\n");
		printf("+ 9. Xay dung game LOTT.                        +\n");
		printf("+ 10. Tinh toan phan so.                        +\n");
		printf("=================================================\n");
	
	Nhap:
		printf("Moi ban chon: ");
		scanf("%d", &lua_chon);
	
	// Thoat
	if(lua_chon == 0) {
		printf("Cam on ban da su dung chuong trinh. Hen gap lai!!!");
		return 0;
	}
	
	// Thuc hien cac chuong trinh
	switch(lua_chon) {
		case 1:
			// Kiem tra so nguyen
			break;
		case 2:
			// Tim Uoc so chung va Boi so chung cua 2 so
			break;
		case 3:
			// Tinh tien cho quan Karaoke
			break;
		case 4:
			// Tinh tien dien
			chucNangSo4_Cach2();
			break;
		case 5:
			// Doi tien
			break;
		case 6:
			// Tinh lai suat vay ngan hang vay tra gop
			break;
		case 7:
			// Vay tien mua xe
			break;
		case 8:
			// Sap xep thong tin sinh vien
			break;
		case 9:
			// Xay dung game LOTT
			break;
		case 10:
			// Tinh toan phan so
			break;
		default:
			printf("Vui long chi lua chon tu 1-10. Moi ban nhap lai...");
			goto Nhap;
			break;
	}
	
	// Hỏi có muốn tiêp tục sử dụng chương trình hay không?
	fflush(stdin);
	printf("Ban co muon tiep tuc (Y/N): "); 
	scanf("%c", &yn);
	if(yn == 'y' || yn == 'Y'){
		system("cls"); // Clear màn hình
		goto Chon;
	}
	else exit(0);
	
	getch(); // Lenh dung man hinh
	return 0;
}