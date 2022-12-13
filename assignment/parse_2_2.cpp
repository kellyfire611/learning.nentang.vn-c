/*
PARSE 2: thực hiện các chức năng trong chương trình
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
Chức năng số 2. Tìm Ước số chung và bội số chung của 2 số
Input: Nhập và 2 số nguyên (x,y) từ bàn phím
Output: Hiển thi ra màn hình
- Ước số chung lớn nhất của 2 số
- Bội số chung nhỏ nhất của 2 số
*/
// Hàm tìm UCLN (Ước chung lớn nhất)
// Ước chung lớn nhất là con số nguyên dương mà A và B đều chia hết cho nó
int UCLN(int A, int B) {
    //Nếu A hoặc B = 0 thì UCLN = A + B
    if (A == 0 || B == 0)
        return A + B;
 
   	//Lặp cho tới khi A = B
    while(A != B) {
        //Lấy số lớn trừ số bé.
        if (A > B) {
            A -= B;
        } else {
            B -= A;
        }
    }
     
   	// Trả về UCLB
   	// Lúc này A = B nên return về A hay B đều giống nhau
    return A;
}
// Hàm tim BCNN (Bội chung nhỏ nhất)
// Bội chung nhỏ nhất là con số nguyên dương có thể chia hết cả A và B
int BCNN(int A, int B) {
	int kq;
	int step;
	
	//tìm step là số lớn nhất giữa a và b
    if(A > B )
    {
        step = A;
    } 
	else { // a<=b
        step = B;
    }
    
    for(int i = step; i <= A*B; i += step){
        if(i % A == 0 && i % B == 0) // neu i chia het cho ca a va b
        {
            kq = i;
            break;
        }
    }
    
    // Trả về BCNN
    return kq;
}
void chucNangSo2() {
	// 1. Khai báo biến
	int x, y;
	  
	// 2. INPUT nhập liệu
	printf("Moi nhap x: ");
	scanf("%d", &x);
	printf("Moi nhap y: ");
	scanf("%d", &y);
	
	// 3. Thực hiện tìm UCLN
	int uocchunglonnhat = UCLN(x, y);
	int boichungnhonhat = BCNN(x, y);
	printf("- Uoc chung lon nhat: %d\n", uocchunglonnhat);
	printf("- Boi chung nho nhat: %d\n", boichungnhonhat);
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
			chucNangSo2();
			break;
		case 3:
			// Tinh tien cho quan Karaoke
			break;
		case 4:
			// Tinh tien dien
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