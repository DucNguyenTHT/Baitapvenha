#include<iostream>
#include<fstream>
#include<string.h>
struct tienThu
{
	char cacKhoanTien[100];
	long long soTien;
};
struct tienChi
{
	char cacKhoanTien[100];
	long long soTien;
};
tienThu dsT[100];
int N=0;
tienChi dsC[100];
int M=0;
using namespace std;
#include"thuchi.h"
int main()
{
	docFile();
	int chon;
	do 
	{
		chon=suLuaChon();
		switch(chon)
		{
		case 1: cin.ignore();themKhoanThu();break;
		case 2: cin.ignore();themKhoanChi();break;
		case 3: xoaKhoanThu();break;
		case 4: xoaKhoanChi();break;
		case 5: hienThi();break;
		case 6: tongTienConLai();break;
		case 0: ghiFile();break;
		}
		system("pause");
		system("cls");
	}while(chon!=0);
	return 0;
}
