int suLuaChon(){
	cout<<"1. them khoan thu.\n";
	cout<<"2. them khoan chi.\n";
	cout<<"3. xoa khoan thu.\n";
	cout<<"4. xoa khoan chi.\n";
	cout<<"5. hien thi cac khoan thu chi.\n";
	cout<<"6. tong cac loai tien.\n";
	cout<<"0. ket thuc.\n";
	int chon;
	cout<<"nhap su lua chon cua ban: ";
	cin >> chon;
	return chon;
	}
void themKhoanThu()
{
	cout<<"nhap ten khoan thu: ";
	cin.getline(dsT[N].cacKhoanTien,100);
	cout<<"moi nhap so tien: ";
	cin>>dsT[N].soTien;
	
	N++;
}

void themKhoanChi()
{
	cout<<"nhap ten khoan chi: ";
	cin.getline(dsC[M].cacKhoanTien,100);
	cout<<"moi nhap so tien: ";
	cin>>dsC[M].soTien;
	
	M++;
}

void xoaKhoanThu()
{
	cout<<"\ncac khoan thu\n";
	cout<<"stt\tten khoan thu\tso tien\n";
	for(int i =0 ;i<N;i++)
	{
		cout<<i+1<<dsT[i].cacKhoanTien<<"\t"<<dsT[i].soTien<<endl;
	}
	cout<<"chon khoan thu can xoa: ";
	int a;
	cin>>a;
	for(int j=a-1;j<N;j++)
	{
		strcpy(dsT[j].cacKhoanTien,dsT[j+1].cacKhoanTien);
		dsT[j].soTien=dsT[j+1].soTien;
	}
	N--;
}

void xoaKhoanChi()
{
	cout<<"\ncac khoan chi\n";
	cout<<"stt\tten khoan chi\tso tien\n";
	for(int i =0 ;i<M;i++)
	{
		cout<<i+1<<dsC[i].cacKhoanTien<<"\t"<<dsC[i].soTien<<endl;
	}
	cout<<"chon khoan thu can xoa: ";
	int a;
	cin>>a;
	for(int j=a-1;j<<M;j++)
	{
		strcpy(dsC[j].cacKhoanTien,dsC[j+1].cacKhoanTien);
		dsC[j].soTien=dsC[j+1].soTien;
	}
	M--;
}
void hienThi()
{
	cout<<"\ncac khoan thu\n";
	cout<<"stt\tten khoan thu\tso tien\n";
	for(int i =0 ;i<N;i++)
	{
		cout<<i+1<<"\t"<<dsT[i].cacKhoanTien<<"\t"<<dsT[i].soTien<<endl;
	}
	cout<<"\ncac khoan chi\n";
	cout<<"stt\tten khoan chi\tso tien\n";
	for(int j =0 ;j<M;j++)
	{
		cout<<j+1<<"\t"<<dsC[j].cacKhoanTien<<"\t"<<dsC[j].soTien<<endl;
	}
}

void tongTienConLai()
{
	long long tongThu=0;
	long long tongChi=0;
	for(int i =0 ;i<N;i++)
	{
		tongThu+=dsT[i].soTien;
	}
	for(int j =0 ;j<M;j++)
	{
		tongChi+=dsC[j].soTien;
	}
	cout<<"tong thu la: "<<tongThu<<endl;
	cout<<"tong chi la: "<<tongChi<<endl;
	cout<<"so tien con lai la: "<<tongThu-tongChi<<endl;
}

void ghiFile()
{
	ofstream fout("ngokking.txt");
	fout<<N<<endl;
	for(int i=0;i<N;i++)
	{
	fout<<dsT[i].cacKhoanTien<<endl;
	fout<<dsT[i].soTien<<endl;
	}
	fout<<M<<endl;
	for(int j=0;j<M;j++)
	{
	fout<<dsC[j].cacKhoanTien<<endl;
	fout<<dsC[j].soTien<<endl;
	}
	fout.close();	
}
void docFile()
{
	ifstream fin("ngokking.txt");
	fin>>N;
	char temp[100];
	fin.getline(temp,100);
	for(int i=0;i<N;i++)
	{
	fin.getline(dsT[i].cacKhoanTien,100);
	fin>>dsT[i].soTien;fin.ignore();
	}
	fin>>M;
	fin.getline(temp,100);
	for(int j=0;j<M;j++)
	{
	fin.getline(dsC[j].cacKhoanTien,100);
	fin>>dsC[j].soTien;fin.ignore();
	}
	fin.close();	
}
