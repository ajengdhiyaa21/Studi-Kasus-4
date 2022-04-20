using namespace std;

class Input{
  public :
void cetak(){

  cout<<"============================"<<endl;
cout<<"Aplikasi Mata Kuliah\n";
cout<<"============================"<<endl;
cout<<"Masukkan Nama : "<<endl;
cin>>nama;
cout<<"Masukkan NIM : "<<endl;
cin>>nim;
cout<<"Masukkan jumlah mata kuliah : "<<endl;
cin>>x;
  for(int a=0;a<=x; a++){
  cout<<"Mata Kuliah = "; cin>>b[a];
  cout<<endl;
  cout<<"Jumlah SKS = ";cin>>sks[a];
  break;
}
  }

void toFile(){
  tulis_Data.open("../pra_data/input.txt");
tulis_Data<<nama<<endl;
tulis_Data<<nim<<endl;
tulis_Data<<x<<endl;
  for(int a=0 ;a<=x; a++){
  cout<<"Mata Kuliah = "; cin>>b[a];
  cout<<endl;
  cout<<"Jumlah SKS = ";cin>>sks[a];
  break;
}
  }

private :
  ofstream tulis_Data;
  int nama;
  int nim;
  int x;
  int a;
  int sks;
  int b;
};