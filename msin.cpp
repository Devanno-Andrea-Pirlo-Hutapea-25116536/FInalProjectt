#include <iostream>
#include <string>

using namespace std;

class filmRating {
private:
	int jumlah;
public:
	string judulFilm[50], genre[50], tahunRilis[50];
	void header();
	void mainMenu();
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
}


int main() {

	filmRating h;

	h.header();

	return (0);


}