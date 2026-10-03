#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct mahasiswa
{
    string nama;
    string nim;
    string kelas;
};

typedef mahasiswa infotype;         // variabel alias untuk infor
typedef  struct elmList *address;   // variabel alias untuk pointer

// kerangka dari elemen list
struct elmList
{
    infotype info;
    address next;
};

// kerangka dari list
struct List
{
    address first;
};

// pengecekan apakah list kosong
bool ListEmpty(List L);
/*  mengembalikan nilai true jika list kosong
    yang ditandai dengan pointer first bernilai NIL*/

// pembuatan list kosong
void CreateList(List &L);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
address alokasi(infotype x);
/* mengembalikan alamat dari elemen list yang sudah berisi info x dan teralokasikan
    didalam memori*/

void dealokasi(address P);
/* I.S. pointer P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */

// pencarian sebuah elemen list
address findElm(List L, infotype X);
/* mencari apakah ada elemen list dengan info(P) = X
   jika ada, mengembalikan address elemen tab tsb, dan Nil jika sebaliknya
*/

bool fFindElm(List L, address P);
/* mencari apakah ada elemen list dengan alamat P
   mengembalikan true jika ada dan false jika tidak ada */

// penambahan elemen *
void insertFirst(List &L, address P);
/* I.S. terdefinisi list L yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void insertAfter(List &L, address P, address Prec);
/* I.S. terdefinisi list L yang mungkin kosong, elemen list P dan elemn list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLast(List &L, address P);
/* I.S. terdefinisi list L yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void deleteFirst(List &L, address &P);
/* I.S. terdefinisi list L yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/

void deleteLast(List &L, address &P);
/* I.S. terdefinisi list L yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemenlist terakhir atau tidak ada elemen list terakhir */

void deleteAfter(List &L, address &P, address Prec);
/* I.S. terdefinisi list L yang mungkin kosong, elemen list P dan elemn list prec
   F.S. P adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

void delP (List &L, infotype X);
/* I.S. terdefinisi list L yang mungkin kosong dan infotype x
   F.S. jika ada elemen list dengan alamat P, dimana info(P)=X, maka P
        dihapus dan P di-dealokasi, jika tidak ada maka list tetap
        list mungkin akan menjadi kosong karena penghapusan */

void printInfo(List L);
/* I.S. terdefinisi list L yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */
void scanInfo(mahasiswa &m);
/* I.S. ~
   F.S. meminta data mahasisswa dari user */
#endif // SLL_H_INCLUDED
