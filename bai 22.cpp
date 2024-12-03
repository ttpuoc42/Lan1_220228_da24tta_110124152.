#include <stdio.h>
#include <stdlib.h>
void nhap(int*a, int n);
void xuat(int*a, int n);
int tong(int*a, int n);
int timGiaTriLonNhat(int*a, int n);
int main()
{
	int *p, n, kq, max;
	//nhap n
	printf("Nhap so nguyen duong n (n < 50) : ");
	scanf("%d", &n);
	//cap phat
	p = (int*)malloc(n*sizeof(int));
	//goi ham cau a
	nhap(p,n);
	
	//goi ham cau b
	xuat(p,n);
	
	//goi ham cau c
	kq = tong(p,n);
	printf("\nTong cac gia tri la: %d", kq);
	
	//goi ham cau d
	  max = timGiaTriLonNhat(p, n);
    printf("\nGia tri lon nhat trong mang la: %d", max);
	
	return 0;

}
//xay dung ham cau a
void nhap(int*a, int n)
{
	int i;
	printf("Danh sach cac so nguyen: \n");
	for (i = 0;i < n;i++)
	{
		printf("So thu %d :", i +1);
		scanf("%d", &a[i]);
	}

}
//xay dung ham cau b
void xuat(int*a, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%8d", a[i]);
	}
}
//xay dung ham cau c
int tong(int*a, int n)
{
	int i,tong = 0;
	for(i = 0; i <= n-1; i++)
	{
		tong = tong + a[i];
	}
	return tong;
}
//xay dung ham cau d
int timGiaTriLonNhat(int*a, int n)
{
	int i, max = a[0];
	for(i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}






















