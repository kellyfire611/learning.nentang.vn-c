#include<stdio.h>
#include<conio.h>
int main()
{
    int N;
    printf("Nhap N:");
    scanf("%d", &N);
    
    float tong = 0;
    int dem = 0;
    
    for(int i=1; i<=N; i++)
    {
        if(i%2 != 0)
        {
			tong += i;
			dem++;            
        }
    }
    
    float tb = tong / dem;
    printf("Trung binh cong cac con so le la: %f", tb);
    getch();
}    