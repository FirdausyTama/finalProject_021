#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	void setP(float nilai) {
		this->presensi = nilai;
	}
	float getP() {
		return presensi;
	}
	void setA(float nilai) {
		this->activity = nilai;
	}
	float getA() {
		return activity;
	}
	void setE(float nilai) {
		this->exercise = nilai;
	}
	float getE() {
		return exercise;
	}
	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getUA() {
		return tugasAkhir;
	}
};

class Pemrograman : public MataKuliah {
public:
	float hitungNilaiAkhir() {
		float nilaiakhir = getP()
			return nilaiakhir;
	}
	void cekKelulusan() {
		float nilaiAkhir = hitungNilaiAkhir() {
			if (nilaiAkhir > 75) {
				cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir : " << nilaiAkhir << endl;
			}
			else {
				cout << "Maaf, Anda lulus mata kuliah Pemrograman dengan nilai akhir : " << nilaiAkhir << endl;
			}
		}
	}

	void input() {
		float presensi;
		cout << "Masukkan nilai Presensi : ";
		cin >> presensi;
		setP(presensi);

		float activity;
		cout << "Masukan nilai Activity : ";
		cin >> activity;
		setA(activity);

		float exercise;
		cout << "Masukan nilai Exercise : ";
		cin >> exercise;
		setE(exercise);

		float tugasAkhir;
		cout << "Masukan nilai Tugas Akhir : ";
		cin >> tugasAkhir;
		setUA(tugasAkhir);
	}
};

int main() {
	char back;
		do {
			cout << "Program dibuat" << endl;
			Pemrograman pemrograman;
			pemrograman.input();
			pemrograman.cekKelulusan();

			cout << "Apakah Anda ingin mengulang program? (Y/N) : ";
			cin >> back;
		} while (back == 'Y' || back == 'y');

		return 0;
}