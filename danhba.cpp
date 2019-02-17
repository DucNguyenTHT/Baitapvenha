#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<iomanip>
#include<stdlib.h>

char dsten[100][100], dssdt[100][100], dsemail[100][100];
int n = 0;
using namespace std;
#include "danhba.h"
int main() {
	ofstream file ;
	file.open("text.txt",ios::app);
	int chon;
	do
	{
		chon = suluachon();
		switch (chon)
		{
		case 1:
			themSoDt();
			cout<<"so dien thoai da duoc them!!! \n";
			system("cls");
			file<<dsten[n]<<setw(15);
			file<<dssdt[n]<<setw(15);
			file<<dsemail[n]<<endl;
			n++;
			break;
		case 2:
			hienThi();
			break;
		case 0:
			cout << "cam on da su dung chuong trinh.";
			break;
		}
	} while(chon!=0);
	cout << "\nan phim bat ki de tiep tuc.\n";
	cin.get();
	file.close();
	system("pause");
    system("cls");
	return 0;
}
