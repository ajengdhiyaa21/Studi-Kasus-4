#include <iostream>
using namespace std;

    void matkul(){
      string matkul,nama;
      int nim,x,sks;
      float total=0,jumlah,diskon1,diskon2;

  cout<<"============================"<<endl;
  cout<<"Aplikasi Mata Kuliah\n";
  cout<<"============================"<<endl;  
  cout<<"Masukkan Nama : "<<nama<<endl;
  cout<<"Masukkan NIM : "<<nim<<endl;
  cout<<"Masukkan jumlah mata kuliah:"<<endl;
  cin>>x;
  for(int a=0;a<=x; a++){
  cout<<"Mata Kuliah "<<a+1<<":"; cin>>matkul[a];
  cout<<endl;
  cout<<"Jumlah SKS = ";cin>>sks[a];
    jumlah+=sks[a];
    total+=12000*sks[a];
  }
  diskon1=total*10/100;
  diskon2=diskon1*5/100;
  total=total-diskon2;
  cout<<"total pembayaran = "<<total;
}
int main() {
  string nama,matkul[20];
    int nim,sks[20];
  float total,jumlah,diskon;
  cout<<"============================"<<endl;
  cout<<"Aplikasi Mata Kuliah\n";
  cout<<"============================"<<endl;  
  cout<<"Masukkan Nama : "<<endl;
  cin>>nama;
  cout<<"Masukkan NIM : "<<endl;
  cin>>nim;
  cout<<"Masukkan jumlah mata kuliah:"<<endl;
  cin>>x;
  string nama,matkul[20];
  std::string nama;
  int nim, sks[20];
  float total,jumlah,diskon;
  cout<<"\n\n ==== Aplikasi Mata Kuliah ==== \n" <<endl;
  cout<<"Nama : "<<endl;
  std::getline(std::cin,nama);
  cout<<"NIM : "<<endl;
  std::getline(std::cin,nim);
  cout<<"Jumlah mata kuliah : "<<endl;
  cout<<"Mata Kuliah = "<<endl;
  std::getline(std::cin,matkul[20]);
  cout<<"Jumlah SKS -> "<<endl;
  std::getline(std::cin,sks[20]);
  cout<<"Total Rp. "<<total<<endl;
  cout<<"Mata Kuliah = " <<matkul[20]<<endl;
  cout<<"Jumlah SKS -> " <<sks[20] <<endl;   
}