/* MSSV: 110124152
Ho ten: Tran Thanh Phuoc
Lop: DA24TTA
*/



#include <stdio.h>

void nhapThoiGian(float a[], int n);
void hienThiThoiGian(float a[], int n);
void tinhTongThoiGian(float a[], int n);
int main()
{
    int i, n;

    
    printf("Nhap vao so ngay hoc cua ban (toi da 6 ngay): ");
    scanf("%d", &n);
    if (n > 6) 
	{
        printf("Nhap sai thoi gian. So ngay hoc khong the vuot qua 6\n");
        return 0;  
    }

    
    float A[n];

    
    nhapThoiGian(A, n);
    
	hienThiThoiGian(A,n);
	
	tinhTongThoiGian(A, n);

    return 0;
}


void nhapThoiGian(float a[], int n)
{
    int i;
    for (i = 0; i < n; i++) 
	{
        printf("Nhap thoi gian hoc cho thu %d : ", i + 2);
        scanf("%f", &a[i]);
    }

}
void hienThiThoiGian(float a[], int n)
{
	int i;
	printf("\nThoi gian hoc tap cua ban:\n");
    for (i = 0; i < n; i++) 
	{
        printf("Thu %d: %.2f gio\n", i + 2, a[i]);
    }
}
void tinhTongThoiGian(float a[], int n)
{
    float tong = 0;
    int i;
    for (i = 0; i < n; i++) 
    {
        tong += a[i];  
    }
    printf("\nTong so gio hoc trong tuan: %.2f gio\n", tong);
}

