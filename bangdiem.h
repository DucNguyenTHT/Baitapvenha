int suLuaChon(){
	cout<<"1. them hoc sinh va diem.\n";
	cout<<"2. hien thi hoc sinh va diem.\n";
	cout<<"3. xoa hoc sinh va diem.\n";
	cout<<"4. sua hoc sinh va diem.\n";
	cout<<"0. ket thuc\n";
	int chon;
	cout<<"nhap su lua chon cua ban: ";
	cin >> chon;
	return chon;
	}

void themHocSinhVaDiem()
{
	cout<<"them ten sinh vien: ";
	cin.getline(hocSinh[N].tenHocSinh,100);
	cout<<"them diem mon Toan: ";
	cin>>hocSinh[N].diemMonToan;
	cout<<"them diem mon Ly: ";
	cin>>hocSinh[N].diemMonLy;
	cout<<"them diem mon Hoa: ";
	cin>>hocSinh[N].diemMonHoa;
	cout<<"them diem mon Tin: ";
	cin>>hocSinh[N].diemMonTin;
	cout<<"them diem mon Anh: ";
	cin>>hocSinh[N].diemMonAnh;	
	N++;
}

void hienThi()
{
	cout<<"stt\tten\ttoan\tly\thoa\ttin\tanh\n";
	for(int i=0;i<N;i++)
	{
		cout<<i+1<<"\t"<<hocSinh[i].tenHocSinh<<"\t"<<hocSinh[i].diemMonToan<<"\t"<<hocSinh[i].diemMonLy<<"\t"<<hocSinh[i].diemMonHoa<<"\t"<<hocSinh[i].diemMonTin<<"\t"<<hocSinh[i].diemMonAnh<<endl;
	}
}
void ghiFile()
{	
	ofstream fout("ducnguyen.txt");
	fout<<N<<endl;
	for(int i=0;i<N;i++)
	{
		fout<<hocSinh[i].tenHocSinh<<endl;
		fout<<hocSinh[i].diemMonToan<<endl;
		fout<<hocSinh[i].diemMonLy<<endl;
		fout<<hocSinh[i].diemMonHoa<<endl;
		fout<<hocSinh[i].diemMonTin<<endl;
		fout<<hocSinh[i].diemMonAnh<<endl;
	}
	fout.close();
}
void docFile()
{
	ifstream fin;
	fin.open("ducnguyen.txt");
	fin>>N;
	char temp[100];
	fin.getline(temp,100);
	for(int i=0;i<N;i++)
	{
		fin.getline(hocSinh[i].tenHocSinh,100);
		fin>>hocSinh[i].diemMonToan ; 
		fin>>hocSinh[i].diemMonLy ;
		fin>>hocSinh[i].diemMonHoa ; 
		fin>>hocSinh[i].diemMonTin ;
		fin>>hocSinh[i].diemMonAnh ;fin.ignore();
	}
	fin.close();
}
void fixTenVaDiem()
{
	cout<<"stt\tten\ttoan\tly\thoa\ttin\tanh\n";
	for(int i=0;i<N;i++)
	{
		cout<<i+1<<"\t"<<hocSinh[i].tenHocSinh<<"\t"<<hocSinh[i].diemMonToan<<"\t"<<hocSinh[i].diemMonLy<<"\t"<<hocSinh[i].diemMonHoa<<"\t"<<hocSinh[i].diemMonTin<<"\t"<<hocSinh[i].diemMonAnh<<endl;
	}
	cout<<"nhap stt can sua:";
	int a;
	cin>>a;
	cout<<"sua ten: ";
	cin.ignore();
	cin.getline(hocSinh[a-1].tenHocSinh,100);
	cout<<"sua diem mon Toan: ";
	cin>>hocSinh[a-1].diemMonToan;
	cout<<"sua diem mon Ly: ";
	cin>>hocSinh[a-1].diemMonLy;
	cout<<"sua diem mon Hoa: ";
	cin>>hocSinh[a-1].diemMonHoa;
	cout<<"sua diem mon Tin: ";
	cin>>hocSinh[a-1].diemMonTin;
	cout<<"sua diem mon Anh: ";
	cin>>hocSinh[a-1].diemMonAnh;
}
void xoaHocSinhVaDiem()
{
	cout<<"stt\tten\ttoan\tly\thoa\ttin\tanh\n";
	for(int i=0;i<N;i++)
	{
		cout<<i+1<<"\t"<<hocSinh[i].tenHocSinh<<"\t"<<hocSinh[i].diemMonToan<<"\t"<<hocSinh[i].diemMonLy<<"\t"<<hocSinh[i].diemMonHoa<<"\t"<<hocSinh[i].diemMonTin<<"\t"<<hocSinh[i].diemMonAnh<<endl;
	}
	cout<<"nhap stt can xoa:";
	int a;
	cin>>a;
	for (int j=a-1;j<N;j++)
	{
		strcpy(hocSinh[j].tenHocSinh,hocSinh[j+1].tenHocSinh);
		hocSinh[j].diemMonToan=hocSinh[j+1].diemMonToan;
		hocSinh[j].diemMonLy=hocSinh[j+1].diemMonLy;
		hocSinh[j].diemMonHoa=hocSinh[j+1].diemMonHoa;
		hocSinh[j].diemMonTin=hocSinh[j+1].diemMonTin;
		hocSinh[j].diemMonAnh=hocSinh[j+1].diemMonAnh;
	}
	N--;
}
