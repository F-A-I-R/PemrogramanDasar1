#include <iostream>
using namespace std;

int main()
{
    char nama[20], grade;
    int tugas, partisipasi, uts, uas, ntugas, npartisipasi, nuts, nuas, nilai_akhir;

    cout << "========Menghitung Nilai dan Grade Siswa ]========\n";
    cout << "Masukkan nama siswa : ";
    gets(nama) ;
    cout << "Masukkan nilai tugas: ";
    cin  >> tugas;
    cout << "Masukkan partisipasi: ";
    cin  >> partisipasi;
    cout << "Masukkan nilai UTS  : ";
    cin  >> uts;
    cout << "Masukkan nilai UAS  : ";
    cin  >> uas;

    ntugas = tugas*40/100;
    npartisipasi = partisipasi * 20/100;
    nuts = uts * 20/100;
    nuas = uas * 20/100;
    nilai_akhir = ntugas + npartisipasi + nuts + nuas;

    if (nilai_akhir >= 85){
        grade = 'A';
    }else if (nilai_akhir >= 70){
        grade = 'B';
    }else if (nilai_akhir >= 60){
        grade = 'C';
    }else if (nilai_akhir >= 50){
        grade = 'D';
    }else
        grade = 'tidak lulus';

    cout << "=====[HASIL PENILAIAN]=====\n";
    cout << "Siswa atas nama " << nama << "  mendapat predikat Grade " << grade <<  " dengan nilai akhir " << nilai_akhir << endl;
    cout << "Berikut daftar nilai nya : \n";
    cout << "Nilai tugas        = " << tugas << endl;
    cout << "Nilai partisipasi  = " << partisipasi << endl;
    cout << "Nilai UTS          = " << uts << endl;
    cout << "Nilai UAS          = " << uas << endl;

    return 0;
}
