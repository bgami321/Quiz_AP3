#include <iostream>
using namespace std;

int EuclideanGCD(int m, int n) //// Fungsi melalui cara rekursif
{
    if (n==0) // agar membuat program lebih singkat r akan dihapus melalui cara rekursif ini
        return m; //FPB = nilai akhir yaitu m 
    else
        return EuclideanGCD(n, m % n); //Jika belum memenuhi, fungsi akan melakukan panggilan rekursif kembali ke dirinya sendiri dengan n sebagai m, dan m % n sebagai n. 
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