using namespace std;

class Proses{
public:
  void cetak(){
    cout<<"Anda Sebagai Proses \n";
  }
  void getData(){
    ambil_Data.open("../dummy/out_input.txt");

    int matkul,sks,nama,nim,x;
    while (!ambil_Data.eof()){
      cout<<"Nama :";cin>>nama;cout<<endl;
      cout<<"NIM : ";cin>>nim;cout<<endl;
      cout<<"Jumlah Matkul : ";cin>>x;
      for(int a=0;a<=x;a++){
        cout<<"Mata Kuliah : ";cin>>b;cout<<endl;
        cout<<" SKS : ";cin>>c;cout<<endl;
        cout<<"Biaya"
      }
      }
    }
    ambil_Data.close();
    cout<<"Nama : "<<nama<<endl;
    cout<<"NIM : "<<nim<<endl;
    cout<<"Mata Kuliah : "<<b<<endl;
    cout<<"Jumlah SKS : "<<c<<endl;
    cout<<"Total Biaya SKS :"<<biaya<<endl;
  };
      void toFile(){
        tulis_Data.open("pra_data/proses.txt");
        int nama;
        int nim;
        int x;
      int b[2];
        int c[2];
        int biaya=c[2]*12000*10/100*5/100;

        tulis_Data.open("pra_data/proses.txt");
        tulis_Data<<nama<<endl;
        tulis_Data<<nim<<endl;
        tulis_Data<<x<<endl;
        tulis_Data<<b[2]<<endl;
        tulis_Data<<c[2]<<endl;
        tulis_Data<<biaya<<endl;
        tulis_Data.close();
        }
    private :
        ifstream ambil_Data;
        ofstream tulis_Data;
        int nama;
        int nim;
        int x;
        int b;
        int c;
        int biaya;
};