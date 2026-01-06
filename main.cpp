#include <iostream>
#include <string>

using namespace std;

class filmRating {
private:
	int daftarFilm = 0, pilihMenu;
	string judulFilm[50], genre[50], tahunRilis[50];
	float nilaiRating[50];
public:
	void mainMenu();
	void inputFilm();
	void ratingFilm();
	void menghitungRataRata();
	void mencariFilmRatingTertinggi();
	void menampilkanSemuaFilm();
	void klmpk();
};

//tampilan main menu
void filmRating::mainMenu() {
	system("cls");
	cout << "=======================" << endl;
	cout << "Main Menu - Film Rating" << endl;
	cout << "=======================\n" << endl;

	cout << "1. Input Film" << endl;
	cout << "2. Rating Film" << endl;
	cout << "3. Menghitung Rata - Rata" << endl;
	cout << "4. Mencari Film Dengan Rating Tertinggi" << endl;
	cout << "5. Menampilkan Semua Film " << endl;
	cout << "6. yg bikin prgmny" << endl;
	cout << "0. Exit" << endl;

	do {
		cout << "Pilih Menu: ";
		cin >> pilihMenu;
		cin.ignore();

		switch (pilihMenu)
		{
		case 1: inputFilm();
			break;
		case 2: ratingFilm();
			break;
		case 3: menghitungRataRata();
			break;
		case 4: mencariFilmRatingTertinggi();
			break;
		case 5: menampilkanSemuaFilm();
			break;
		case 6: klmpk();
			break;
		case 0:
			break;
		default: {
			cout << "pilih ulang" << endl;
		}

		}
	} while (pilihMenu != 0);
}

//untuk input film = judul, genre, tahun rilis
void filmRating::inputFilm() {
	system("cls");
	cout << "========================" << endl;
	cout << "Input Film | Film Rating" << endl;
	cout << "========================\n" << endl;

	if (daftarFilm < 50) {
		cout << "Input Data ke-" << (daftarFilm + 1) << endl;
		cout << "Judul Film: ";
		getline(cin, judulFilm[daftarFilm]);
		cout << "Genre: ";
		getline(cin, genre[daftarFilm]);
		cout << "Tahun Rilis: ";
		getline(cin, tahunRilis[daftarFilm]);
		nilaiRating[daftarFilm] = 0;
		daftarFilm++;
		cout << "\nInput Film Tersimpan" << endl;
	}
	else {
		cout << "Memori Penuhhhh!" << endl;
	}

	while (pilihMenu != 0) {
		cout << "\n1. Input Film lagi" << endl;
		cout << "2. Rating Film" << endl;
		cout << "3. Kembali ke Main Menu" << endl;
		cout << "0. Exit Program" << endl;

		cout << "Pilih Menu: ";
		cin >> pilihMenu;
		cin.ignore();

		switch (pilihMenu) {
		case 1:
			inputFilm();
			break;
		case 2:
			ratingFilm();
			break;
		case 3:
			mainMenu();
			break;
		case 0:
			break;
		}
	}
}

//untunk memberi rating film yang ada
void filmRating::ratingFilm() {
	system("cls");
	cout << "=========================" << endl;
	cout << "Rating Film | Film Rating" << endl;
	cout << "=========================\n" << endl;

	if (daftarFilm == 0) {
		cout << "Belum ada film yang diinput. Silakan input film terlebih dahulu." << endl;
	}
	else {
		cout << "Daftar Film yang Tersedia untuk Diberi Rating:" << endl;
		cout << endl;
		for (int i = 0; i < daftarFilm; i++) {
			cout << i + 1 << ". " << judulFilm[i] << " (" << tahunRilis[i] << ") - Genre: " << genre[i] << endl;
		}
		int pilihFilm;
		cout << "\nPilih film yang ingin diberi rating (1-" << daftarFilm << "): ";
		cin >> pilihFilm;
		cin.ignore();
		if (pilihFilm < 1 || pilihFilm > daftarFilm) {
			cout << "Pilihan tidak valid. Kembali ke Main Menu." << endl;
			mainMenu();
		}
		int rating;
		cout << "Masukkan rating untuk \"" << judulFilm[pilihFilm - 1] << "\" (1-10): ";
		cin >> rating;
		cin.ignore();
		nilaiRating[pilihFilm - 1] = rating;
		if (rating < 1 || rating > 10) {
			cout << "Rating tidak valid. Kembali ke Main Menu." << endl;
			mainMenu();
		}
		cout << "\nRating " << rating << " telah diberikan untuk \"" << judulFilm[pilihFilm - 1] << "\".\n" << endl;
	}
	cout << "Kembali ke Main Menu atau Exit Program" << endl;

	cout << "1. Main Menu" << endl;
	cout << "2. Input Film lagi" << endl;
	cout << "3. Rating Film lagi" << endl;
	cout << "0. Exit" << endl;
	do {
		cout << "Pilih Menu: ";
		cin >> pilihMenu;
		cin.ignore();

		switch (pilihMenu)
		{
		case 1: mainMenu();
			break;
		case 2: inputFilm();
			break;
		case 3: ratingFilm();
			break;
		case 0:
			break;
		}
	} while (pilihMenu != 0);
}

//untuk menghitung rata - rata rating suatu film
void filmRating::menghitungRataRata() {
	system("cls");
	cout << "==================================" << endl;
	cout << "Menghitung Rata-Rata | Film Rating" << endl;
	cout << "==================================\n" << endl;

	if (daftarFilm == 0) {
		cout << "Belum ada film yang diinput!" << endl;
	}
	else {
		float total = 0;

		for (int i = 0; i < daftarFilm; i++) {
			total += nilaiRating[i];
		}

		float rataRata = total / daftarFilm;

		cout << "Total Film Terdaftar : " << daftarFilm << endl;
		cout << "Rata-Rata Rating     : " << rataRata << endl;
	}

	cout << "Tekan Enter untuk kembali ke Main Menu...";
	cin.get();
	mainMenu();
}

//untuk mencari film dgn rating tertinggi
void filmRating::mencariFilmRatingTertinggi() {
	system("cls");
	cout << "==================================================" << endl;
	cout << "Mencari Film Dengan Rating Tertinggi | Film Rating" << endl;
	cout << "==================================================\n" << endl;

	if (daftarFilm == 0) {
		cout << "Belum ada film yang diinput" << endl;
	}
	else {
		float maxRating = -1;
		int index = -1;

		for (int i = 0; i < daftarFilm; i++) {
			if (nilaiRating[i] > maxRating) {
				maxRating = nilaiRating[i];
				index = i;
			}
		}

		if (index != -1) {
			cout << "Judul: " << judulFilm[index] << endl;
			cout << "Genre: " << genre[index] << endl;
			cout << "Tahun: " << tahunRilis[index] << endl;
			cout << "Rating: " << maxRating << endl;
			cout << endl;
		}
	}

	cout << "Tekan Enter untuk kembali ke Main Menu...";
	cin.get();
	mainMenu();
}

//untuk menampilkan semua film yang ada 
void filmRating::menampilkanSemuaFilm() {
	system("cls");
	cout << "====================================" << endl;
	cout << "Menampilkan Semua Film | Film Rating" << endl;
	cout << "====================================\n" << endl;

	if (daftarFilm == 0) {
		cout << "Belum ada film yang diinput. Silakan input film terlebih dahulu." << endl;
	}
	else {
		cout << "Daftar Semua Film:" << endl;
		cout << endl;

		for (int i = 0; i < daftarFilm; i++) {
			cout << "Film ke-" << (i + 1) << ":" << endl;
			cout << "  Judul     : " << judulFilm[i] << endl;
			cout << "  Genre     : " << genre[i] << endl;
			cout << "  Tahun     : " << tahunRilis[i] << endl;
			cout << endl;
		}
	}

	cout << endl;
	cout << "Tekan Enter untuk kembali ke Main Menu...";
	cin.ignore();
	mainMenu();
}


void filmRating::klmpk() {
	system("cls");
	cout << "===============" << endl;
	cout << "Data Kelompok 6" << endl;
	cout << "===============\n" << endl;

	cout << "Anggota Kelompok 6:" << endl;
	cout << "1. Iqbal Izzudin - Menampilkan Semua Film" << endl;
	cout << "2. Devanno Andrea Pirlo Hutapea - Main Menu, Input Film" << endl;
	cout << "3. Muhammad Azka Wahid Abdillah - Mencari Film Dengan Rating Tertinggi" << endl;
	cout << "4. Humaid Hammami - Menghitung Rata - Rata Rating" << endl;
	cout << "5. Chasnaunisai Khoirivayanti - Rating Film\n" << endl;

	do
	{
		cout << "Kembali ke Main Menu atau Exit" << endl;
		cout << "1. Main Menu" << endl;
		cout << "0. Exit" << endl;

		cin >> pilihMenu;

		switch (pilihMenu)
		{
		case 0:
			break;
		case 1:
			mainMenu();
			break;
		}
	} while (pilihMenu != 0);
}

// untuk menjalankan semua kode diatas ada didalam main()
int main() {
	filmRating h;

	h.mainMenu();

	return (0);
}
