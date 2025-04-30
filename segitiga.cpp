#include <iostream>
using namespace std;

// buat sebuah program dengan ketentuan berikut
// 1. class segitiga dengan fungsi luas dan keliling dengan tipe private.
// 2. mempunyai prosedur input dan output dengan tipe public.
// 3. menggunakan loop dan switch case untuk perulangan program serta memilih pilihan.

class segitiga{
    // membuat kelas private
    private:
    
    int fungsiHitungLuas(int a, int b){
        return ( a * b) /2;
    }

    int fungsiHitungKeliling(int a, int b, int c){
        return a + b + c;
    }  

    // membuat kelas public
    public:
    void input(){
        int pilihan, alas, tinggi, panjangSisi1, panjangSisi2, panjangSisi3;
        do{
        cout << "========= Menu =========" << endl;
        cout << "1. Hitung Luas Segitiga" << endl;
        cout << "2. Hitung Keliling Segitiga" << endl;
        cout << "3. Keluar" << endl;
        cout << endl;
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;
        
        
        switch (pilihan){
            case 1: 
            
            cout << "Masukkan Alas Segitiga (1 - 50) : ";
            cin >> alas;
            cout << "Masukkan Tinggi Segitiga (1 - 50) : ";
            cin >> tinggi;
            cout << "Luas Segitiga : " << fungsiHitungLuas(alas, tinggi) << endl;

            // coditional statement ganjil & genap
            if (alas % 2 == 0 && tinggi % 2 == 0)
            {
                break;
            }else
            {
                cout << "alas yang dimasukkan adalah bilangan ganjil, Luas tidak dapat dihitung." << endl;
            }
            // conditional statement jumlah isi alas dan tinggi
            if (alas <= 50 && tinggi <= 50)
            {
                break;
            }else
            {
                cout << "input tidak valid, Silahkan masukkan bilangan antara 1 - 50." << endl;
            }
            break;
            case 2:
            cout << "Masukkan panjang sisi ke-1 dengan jumlah (1-50) : ";
            cin >> panjangSisi1;
            cout << "Masukkan panjang sisi ke-2 dengan jumlah (1-50) : ";
            cin >> panjangSisi2;
            cout << "Masukkan panjang sisi ke-3 dengan jumlah (1-50) : ";
            cin >> panjangSisi3;

            if (panjangSisi1 <= 50 && panjangSisi2 <= 50 && panjangSisi3 <= 50)
            {
                cout << "Keliling Segitiga : " << fungsiHitungKeliling(panjangSisi1, panjangSisi2, panjangSisi3) << endl;
                cout << endl;
            }else
            {
                cout << "input tidak valid, Silahkan masukkan bilangan antara 1 - 50." << endl;
            }
            break;

            case 3:
            break;
            default:
            cout << "pilihan salah, pilihan harus diantara 1 - 3" << endl;
            break;
            }
        }while(pilihan != 3);
    }
};
int main(){
    segitiga s;
    s.input();
    return 0;
}