#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;
#include <stdlib.h>

char dsten[1000][100], dssdt[1000][11], dsemail[1000][50];
int N = 0;
#include "mylib.h"

int main()
{
    docFile();
    int chon;
    do
    {
        system("clear");
        chon = ThucDon();
        if (chon == 1)
        {
            ThemLienHe();
        }
        else if (chon == 2)
        {
            HienThiDanhSachLienHe();
            cin.ignore();
        }
        else if(chon == 3)
        {
            sua();
        }
        else if(chon == 4)
        {
            xoaLienHe();
        }
        else if(chon==5)
        {
            xapXep();
        }
        else if (chon == 0)
        {
            ghiFile();
            cin.ignore();
            cout<<"Cam on ban da su dung chuong trinh\n";
        }
        cout<<"Nhan phim ENTER de tro ve\n";
        cin.get();
    } while (chon != 0);
    return 0;
}
