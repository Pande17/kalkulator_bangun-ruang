#include <iostream>
using namespace std;
int main (){
	int pilihan;
	int luas, panjang, lebar, jari, keliling;
	double phi = 3.14,  luas_lingkaran;
	char lagi;
	
	do{

	system("cls");
	cout<<"|============================================================|"<<endl;
	cout<<"|                 MENGHITUNG BANGUN RUANG                    |"<<endl;
	cout<<"|------------------------------------------------------------|"<<endl;
	cout<<"|                        PILIHAN :                           |"<<endl;
	cout<<"|                                                            |"<<endl;
	cout<<"|                 1. Luas Persegi Panjang                    |"<<endl;
	cout<<"|                   2. Keliling Persegi                      |"<<endl;
	cout<<"|                    3. Luas Lingkaran                       |"<<endl;
	cout<<"|============================================================|"<<endl;
	cout<<endl;
	cout<<"Masukkan Pilihan Anda (1-3) : ";
	cin>>pilihan;
	
	switch (pilihan) {
        case 1:
        	cout<<endl;
        	cout<<"Kamu Memilih Luas Persegi Panjang"<<endl;
        	cout<<endl;
            cout<<"Masukkan Panjang Persegi Panjang = ";
			cin>>panjang;
			cout<<"Masukkan Lebar Persegi Panjang = ";
			cin>>lebar;
	
			luas = panjang * lebar;
			
			cout<<endl;
			cout<<"Total Luas Persegi Panjang = "<<luas<<"cm";
            break;
            
        case 2:
        	cout<<endl;
        	cout<<"Kamu Memilih Keliling Persegi"<<endl;
        	cout<<endl;
            cout<<"Masukkan Panjang Sisi Persegi = ";
            cin>>panjang;
            
            keliling = 4 * panjang;
            
            cout<<endl;
            cout<<"Total Keliling Persegi = "<<keliling<<"cm";
            break;
        case 3:
        	cout<<endl;
        	cout<<"Kamu Memilih Luas Lingkaran"<<endl;
        	cout<<endl;
            cout<<"Masukkan Panjang Jari-Jari Lingkaran = ";
            cin>>jari;
            
            luas_lingkaran = phi * jari * jari;
            
            cout<<endl;
            cout<<"Total Luas Lingkaran = "<<luas_lingkaran<<"cm";
            break;
        default:
        	cout<<endl;
            cout<<"Pilihan Tidak Valid"<<endl;
	}

   		cout << "\n \n Apakah anda ingin mengulang lagi (Y/N) : ";
        cin >> lagi;

        lagi = tolower(lagi);

        if (lagi != 'y') {
            cout << "\n \n Terima Kasih Sudah Berkunjung \n \n";
            break; 
        }

    } while (lagi == 'y');
	
	return 0;
}
