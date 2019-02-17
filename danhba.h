#ifndef DANHBA_H
#define DANHBA_H

int suluachon() {
	cout << "1. them 1 so dt vao danh ba.\n";
	cout << "2. hien thi danh ba.\n";
	cout << "0. ket thuc chuong trinh.\n";
	int luachon=-1;
	cout << "moi chon chuc nang: ";
	while ((luachon < 0) || (luachon >2))
	{
		cin >> luachon;
	}
	return luachon;
}
void themSoDt() {
	char ten[100], sdt[100], email[100];
	cout << "moi nhap ten: ";
	cin.ignore();
	cin.getline(ten, 100);

	cout << "moi nhap sdt: ";
	cin.getline(sdt, 100);

	cout << "moi nhap mail: ";
	cin.getline(email, 100);

	strcpy(dsten[n], ten);
	strcpy(dssdt[n], sdt);
	strcpy(dsemail[n], email);
	}
	
void hienThi()
{
	ifstream file1;
	file1.open("text.txt");
	while (!file1.eof())
	{
		char temp[100];
		file1.getline(temp, 100);
		cout << temp<<endl;
	}
	file1.close();
}
#endif
