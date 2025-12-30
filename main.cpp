#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class filmRating {
private:
	int daftarFilm = 0, pilihMenu;
	string judulFilm[50], genre[50], tahunRilis[50];
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
	cout << "Main Menu - Film Rating\n\n" << endl;

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

	cout << "Input Film | Film Rating\n\n" << endl;

	if (daftarFilm < 49) {
		cout << "Input Data ke-" << (daftarFilm + 1) << endl;
		cout << "Judul Film: ";
		getline(cin, judulFilm[daftarFilm]);
		cout << "Genre: ";
		getline(cin, genre[daftarFilm]);
		cout << "Tahun Rilis: ";
		getline(cin, tahunRilis[daftarFilm]);

		cout << "\nInput Film Tersimpan\n" << endl;
	}
	else {
		cout << "Memori Penuhhhh!" << endl;
	}


	cout << "Kembali ke Main Menu atau Exit Program" << endl;

	cout << "1. Main Menu" << endl;
	cout << "2. Input Film lagi" << endl;
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
		case 0:
			break;
		}
	} while (pilihMenu != 0);
}

//untunk memberi rating film yang ada
void filmRating::ratingFilm() {
	cout << "Rating Film | Film Rating" << endl;
	cout << endl;
	cout << endl;
}

//untuk menghitung rata - rata rating suatu film
void filmRating::menghitungRataRata() {
	cout << "Menghitung Rata - Rata Rating | Film Rating" << endl;
	cout << endl;
	cout << endl;
}

//untuk mencari film dgn rating tertinggi
void filmRating::mencariFilmRatingTertinggi() {
	cout << "Mencari Film Dengan Rating Tertinggi | Film Rating" << endl;
	cout << endl;
	cout << endl;
}

//untuk menampilkan semua film yang ada 
void filmRating::menampilkanSemuaFilm() {
	cout << "Menampilkan Semua Film | Film Rating" << endl;
	cout << endl;
	cout << endl;
}

void filmRating::klmpk() {
	system("cls");
	cout << "		Data Kelompok 6\n\n" << endl;


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
