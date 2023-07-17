#include <iostream>
#include <string>
using namespace std;


class administrasi {

	int fr, rr;
	const int MAX_MAHASISWA = 5;

	int NIM[5];
	string nama[5];
	int tahunMasuk[5];

	int jumlahMahasiswa = 0;

public:
	void tambahMahasiswa() {
		
		if ((fr == 0 && rr == MAX_MAHASISWA - 1) || (fr == rr + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}

		if (jumlahMahasiswa < MAX_MAHASISWA) {
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama : ";
			getline(cin, nama[jumlahMahasiswa]);
			cout << "Tahun Masuk: ";
			cin >> tahunMasuk[jumlahMahasiswa];
			cin.ignore();
			jumlahMahasiswa++;
			cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else {
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}
	}

	void tampilkanSemuaMahasiswa() {
		int front = fr;
		int rear = rr;


		if (fr==-1) {
			cout << "\n Tidak Ada Mahasiswa" << endl;
			return;
		}

		cout << "\nMahasiswa yang terdaftar: \n";

		if (front <= rear) {
			while (front <= rear) {
				cout << NIM[5]<< " ";
				cout << nama[5]<< " ";
				cout << tahunMasuk[5] << " ";
				front++;
			}
			cout << endl;
		}
		return;

	}
	void algorithmaSortByTahunMasuk() {
	
	}

	void algorithmacariMahasiswaByNIM() {

	}

};



int main() {
	administrasi adm;
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			adm.tambahMahasiswa();
			break;
		case 2:
			adm.tampilkanSemuaMahasiswa();
			break;
		case 3:
			adm.algorithmacariMahasiswaByNIM();
			break;
		case 4:
			adm.algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


/*2. circular queue, quicksort */

/*3. stack digunakan pada algoritma penumpukan stack menggunakan metode LIFO. Queue digunakan pada algoritma antrian, queue menggunakan metode FIFO */

/*4. digunakan ketika menyimpan data sementara, yang ketika di masukan terakhir dan bisa di keluarkan pertama. contoh pengaplikasiannya pada fitur undo & redo */

/*5. 
a. sebanyak 4 kali kedalaman
b. in = benar
	preorder= benar
	post= benar */