#include <iostream>
#include <string>

using namespace std;

class filmRating {
private:
	int daftarFilm = 0, jumlah, pilihMenu;
public:
	string judulFilm[50], genre[50], tahunRilis[50];
	void header();
	void inputFilm();
	void ratingFilm();
	void menghitungRataRata();
	void mencariFilmRatingTertinggi();
	void menampilkanSemuaFilm();
};

//tampilan main menu
void filmRating::header() {
	cout << "Main Menu - Film Rating" << endl;
	cout << endl;
	cout << endl;

	cout << "1. Input Film" << endl;
	cout << "2. Rating Film" << endl;
	cout << "3. Menghitung Rata - Rata" << endl;
	cout << "4. Mencari Film Dengan Rating Tertinggi" << endl;
	cout << "5. Menampilkan Semua Film " << endl;
	cout << "6. Exit" << endl;

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
		case 6: break;
		default: {
			cout << "pilih ulang" << endl;
		}

		}
	} while (pilihMenu != 6);
}

//untuk input film = judul, genre, tahun rilis
void filmRating::inputFilm() {
	system("cls");

	cout << "Input Film | Film Rating" << endl;
	cout << endl;
	cout << endl;

	cout << "Masukkan jumlah film yang ingin diinput: ";
	cin >> jumlah;
	cin.ignore();
	for (int i = 0; i < jumlah; ++i) {
	    cout << "Judul Film ke-" << (i + 1) << ": ";
	    getline(cin, judulFilm[i]);
	    cout << "Genre: ";
	    getline(cin, genre[i]);
	    cout << "Tahun Rilis: ";
	    getline(cin, tahunRilis[i]);
	}

	cout << "Kembali ke Main Menu atau Exit Program" << endl;

	cout << "1. Main Menu" << endl;
	cout << "2. Input Film lagi" << endl;
	cout << "2. Exit" << endl;

	do {
		cout << "Pilih Menu: ";
		cin >> pilihMenu;
		cin.ignore();

		switch (pilihMenu)
		{
		case 1: header();
			break;
		case 2: inputFilm();
			break;
		case 3:
			break;
		default: {
			cout << "pilih ulang" << endl;
		}

		}
	} while (pilihMenu != 2);

	

}

//untunk memberi rating film yang ada
void filmRating::ratingFilm() {
	cout << "Rating Film | Film Rating" << endl;
	cout << endl;
	cout << endl;
}

//untuk menghitung rata - rata rating suatu film
void filmRating::menghitungRataRata() {
	cout << "Menghitung Rata - Rata | Film Rating" << endl;
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

// untuk menjalankan semua kode diatas ada didalam main()
int main() {
	filmRating h;

	h.header();

	return (0);
}
