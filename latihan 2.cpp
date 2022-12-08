#include <iostream>

using namespace std;

struct data_mhs
{
  //Varibel 
  string nama;
  string jurusan;
  double ipk;
};

int main(){
struct data_mhs mhs1, mhs2;
mhs1.nama = "Eko Ari Nugroho";
mhs1.jurusan = "Teknik Informatika";
mhs1.ipk = 3.99;

mhs2.nama = "Jorgensio Warouw";
mhs2.jurusan = "Teknik Informatika";
mhs2.ipk = 3.99;

//output
cout<<"\n";
cout<<"\t DATA MAHASISWA 1"<<endl;
cout<<"\t --------------------------------------------"<<endl;
cout<<"\t Nama \t\t: "<<mhs1.nama<<endl;
cout<<"\t Jurusan \t: "<<mhs1.jurusan<<endl;
cout<<"\t IPK \t\t: "<<mhs1.ipk<<endl;

cout<<"\n";
cout<<"\t DATA MAHASISWA 2"<<endl;
cout<<"\t --------------------------------------------"<<endl;
cout<<"\t Nama \t\t: "<<mhs2.nama<<endl;
cout<<"\t Jurusan \t: "<<mhs2.jurusan<<endl;
cout<<"\t IPK \t\t: "<<mhs2.ipk<<endl;

return 0;
}