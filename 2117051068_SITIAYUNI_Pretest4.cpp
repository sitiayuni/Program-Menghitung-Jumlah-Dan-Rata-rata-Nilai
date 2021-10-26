#include <iostream>
using namespace std;

int main (){
	/* NAMA  : SITI AYUNI
	   KELAS : ILKOMP B
	   NPM  : 2117051068
	   */
	 
   int data;
   float nilai, jumlah, rata_rata;
   
   // input
   cout << "================ Program Menghitung Jumlah Dan Rata-rata Nilai ================= " << endl;
   
   cout << " Masukkan Jumlah Data Anda : ";
   cin >> data;
   cout << endl;
   for (int i=1; i <= data; i++)
   {
   	cout << " Data Nilai ke-" << i <<  " : ";
   	cin >> nilai ;
   	
   	jumlah += nilai;
   	
   	rata_rata = jumlah / data;
   	
	   }	
	   
	// Output
	cout << " Jumlah Dari Semua Nilainya adalah " << jumlah << endl;
	cout << " Nilai rata-ratanya adalah " << rata_rata;
	
	return 0;
}
