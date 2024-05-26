#include <iostream>
using namespace std;

int EuclideanGCD(int m, int n) // Fungsi melalui cara normal sesuai dengan soal 
{
    int r; //inilisialisasi r harus dibuat dalam fungsi ini
    while(r != 0) // Lakukan langkah dibawah berulang sampai r bernilai 0
    {
        r = m % n; //Masukkan nilai sisa pembagian dari m dibagi n kedalam suatu variabel
        m = n; //Masukkan nilai n kedalam variabel m
        n = r; // kemudian masukkan nilai r kedalam variabel n
    }
    return m; //nilai terakhir dari m akan menjadi FPB dari dua bilangan awal
}

int main()
{
    int nilai1,nilai2; //membuat variable nilai1 dan 2
    cout <<"=========================\nPROGRAM MENCARI FPB\n=========================\n"; // title (ノಠ益ಠ)ノ彡┻━┻
    cout<<"Masukan bilangan pertama: "; cin >> nilai1; // Input bil pertama ke variable nilai1
    cout<<"Masukkan bilangan kedua: "; cin>> nilai2; // Input bil pertama ke variable nilai2
    
    int hasil = EuclideanGCD(nilai1, nilai2); //Memanggil fungsi EuclideanGCD

    cout<<"FPB dari "<<nilai1<<" dan "<<nilai2<<" adalah "<<hasil; //Output
}