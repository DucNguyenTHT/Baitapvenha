#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct bangDiem
{
	char tenHocSinh[100];
	float diemMonToan;
	float diemMonLy;
	float diemMonHoa;
	float diemMonTin;
	float diemMonAnh;
};
bangDiem hocSinh[100];
int N=0;//hocsinh thu N

#include"ahihi.h"
int main(){
	docFile();
	int chon;
	do 
	{
		chon=suLuaChon();
		switch(chon)
		{
		case 1: cin.ignore();themHocSinhVaDiem();break;
		case 2: hienThi();break;
		case 3: xoaHocSinhVaDiem();break;
		case 4: fixTenVaDiem();break;
		case 5: cin.ignore();timHocSinh();break;
		case 0: ghiFile();break;
		}
		system("pause");
		system("cls");
	}while(chon!=0);
	return 0;
	}
