file.hint ThucDon()
{
    cout<<"CHUONG TRINH QUAN LY DANH BA\n";
    cout<<"1. Them lien he\n";
    cout<<"2. Hien thi danh sach lien he\n";
    cout<<"3. Sua Lien Lac\n";
    cout<<"4. Xoa Lien He\n";
    cout<<"5. xap xep theo bang chu cai ";
    cout<<"0. Thoat\n";
    int c;
    cout<<"Chon 1 chuc nang: ";
    cin>>c;
    return c;
}

void ThemLienHe()
{
    char ten[100], sdt[11], email[50];
    cout<<"Nhap ten: ";
    cin.ignore();
    cin.getline(ten, 100);
    
    cout<<"Nhap so dien thoai: ";
    cin.getline(sdt, 11);
    
    cout<<"Nhap email: ";
    cin.getline(email, 50);
    
    strcpy(dsten[N], ten);
    strcpy(dssdt[N], sdt);
    strcpy(dsemail[N], email);
    
    N++;
    
}

void HienThiDanhSachLienHe()
{
    cout<<"Co "<<N<<" lien he\n";
    cout<<"Ten\tSo dien thoai\tEmail\n";
    for(int i = 0; i<N; i++)
    {
        cout<<dsten[i]<<"\t"<<dssdt[i]<<"\t"<<dsemail[i]<<endl;
    }    

}

void ghiFile()
{
    ofstream fout("text.duc");
    fout<<N<<endl;
    for(int i=0;i<N;i++)
    {
        fout<<dsten[i]<<endl;
        fout<<dssdt[i]<<endl;
        fout<<ds
    char ten[100],sdt[100],email[100];
    cin.ignore();
    cout<<"fix ten: ";
    cin.getline(ten,100);
    cout<<"fix sdt: ";
    cin.getline(sdt,100);
    cout<<"fix email: ";
    cin.getline(email,100);
    
    strcpy(dsten[a-1],ten);
    strcpy(dssdt[a-1],sdt);
    strcpy(dsemail[a-1],email);
}
int timLienHe()
{
    cout<<"moi nhap lien he can xoa: ";
    char ten[100];
    cin.ignore();
    cin.getline(ten,100);
    for(int i=0;i<N;i++)
    {
        if(strcmp(ten,dsten[i])==0) return i;
    }
}
void xoaLienHe()
{
    int a=timLienHe();
    for (int i=a;i<N;i++)
        {
            strcpy(dsten[i],dsten[i+1]);
            strcpy(dssdt[i],dssdt[i+1]);
            strcpy(dsemail[i],dsemail[i+1]);
        }
    N--;
    cout<<"da xoa lien he"<<endl;
}

email[i]<<endl;
    }
    fout.close();
}

void docFile()
{
    ifstream fin("text.duc");
    fin>>N;
    char temp[100];
    fin.getline(temp,100);
    for (int i=0;i<N;i++)
    {
        fin>>dsten[i];
        fin>>dssdt[i];
        fin>>dsemail[i];
    }
    fin.close();
}
void sua()
{
    cout<<"Ten\tSo dien thoai\tEmail\n";
    for(int i = 0; i<N; i++)
    {
        cout<<dsten[i]<<"\t"<<dssdt[i]<<"\t"<<dsemail[i]<<endl;
    }
    cout<<"moi chon lien he de sua: " ;
    int a;
    cin>>a;
    char ten[100],sdt[100],email[100];
    cin.ignore();
    cout<<"fix ten: ";
    cin.getline(ten,100);
    cout<<"fix sdt: ";
    cin.getline(sdt,100);
    cout<<"fix email: ";
    cin.getline(email,100);
    
    strcpy(dsten[a-1],ten);
    strcpy(dssdt[a-1],sdt);
    strcpy(dsemail[a-1],email);
}
int timLienHe()
{
    cout<<"moi nhap lien he can xoa: ";
    char ten[100];
    cin.ignore();
    cin.getline(ten,100);
    for(int i=0;i<N;i++)
    {
        if(strcmp(ten,dsten[i])==0) return i;
    }
}
void xoaLienHe()
{
    int a=timLienHe();
    for (int i=a;i<N;i++)
        {
            strcpy(dsten[i],dsten[i+1]);
            strcpy(dssdt[i],dssdt[i+1]);
            strcpy(dsemail[i],dsemail[i+1]);
        }
    N--;
    cout<<"da xoa lien he"<<endl;
}
