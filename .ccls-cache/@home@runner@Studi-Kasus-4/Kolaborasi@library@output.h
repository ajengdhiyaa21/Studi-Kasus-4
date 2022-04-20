using namespace std;

class Output {
  public :
    void cetak() {
      cout<<"\n\n ==== Aplikasi Mata Kuliah ==== \n" <<endl;
cout<<"Nama : " <<data_file [0] <<endl;
cout<<"NIM : " <<data_file [1] <<endl;
cout<<"Jumlah mata kuliah : " <<data_file [2] <<endl;
cout<<"Mata Kuliah = " <<data_file [3] <<endl;
cout<<"Jumlah SKS -> " <<data_file [4] <<endl;  
cout<<"Total Rp. " <<data_file [7] <<endl;
cout<<"Mata Kuliah = " <<data_file [5] <<endl;
cout<<"Jumlah SKS -> " <<data_file [6] <<endl;  
cout<<"Total Rp. " <<data_file [8] <<endl;
cout<<"Total pembayaran Rp. " <<data_file [9] <<endl;  
    }
    void getData() {
      ambil_data.open("api_data.txt");
      while (!ambil_data.eof()){
        ambil_data >> data_file [index];
        index += 1;
        }
      ambil_data.close();
    } 
  private :
		ifstream ambil_data;
    string data_file [30];
    int index = 0;
};