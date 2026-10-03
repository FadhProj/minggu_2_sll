#include "sll.h"

// pengecekan apakah list kosong
bool ListEmpty(List L)
/*  mengembalikan nilai true jika list kosong
    yang ditandai dengan pointer first bernilai NIL*/
{
    // tambahkan code mu disini
    return L.first == nullptr;
}

// pembuatan list kosong
void CreateList(List &L)
/* I.S. ~
   F.S. terbentuk list kosong */
{
    // tambahkan code mu disini
    L.first = nullptr;
}

// manajemen memori
address alokasi(infotype x)
/* mengembalikan alamat dari elemen list yang sudah berisi info x dan teralokasikan
    didalam memori*/
{
    // tambahkan code mu disini
    address P = new elmList();
    P->info = x;
    p->next = nullptr;
    return P
}
void dealokasi(address P)
/* I.S. pointer P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */
{
    // tambahkan code mu disini
    del P
}

// pencarian sebuah elemen list
address findElm(List L, infotype X)
/* mencari apakah ada elemen list dengan info(P) = X
   jika ada, mengembalikan address elemen tab tsb, dan Nil jika sebaliknya
*/
{
    // tambahkan code mu disini

}

bool fFindElm(List L, address P)
/* mencari apakah ada elemen list dengan alamat P
   mengembalikan true jika ada dan false jika tidak ada */
{
    // tambahkan code mu disini

}

// penambahan elemen *
void insertFirst(List &L, address P)
/* I.S. terdefinisi list L yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */
{
    // tambahkan code mu disini

}

void insertAfter(List &L, address P, address Prec)
/* I.S. terdefinisi list L yang mungkin kosong, elemen list P dan elemn list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */
{
    // tambahkan code mu disini

}

void insertLast(List &L, address P)
/* I.S. terdefinisi list L yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */
{
    // tambahkan code mu disini

}

// penghapusan sebuah elemen
void deleteFirst(List &L, address &P)
/* I.S. terdefinisi list L yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/
{
    // tambahkan code mu disini

}

void deleteLast(List &L, address &P)
/* I.S. terdefinisi list L yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemenlist terakhir atau tidak ada elemen list terakhir */
{
    // tambahkan code mu disini


}

void deleteAfter(List &L, address &P, address Prec)
/* I.S. terdefinisi list L yang mungkin kosong, elemen list P dan elemn list prec
   F.S. P adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */
{
    // tambahkan code mu disini


}

void delP (List &L, infotype X)
/* I.S. terdefinisi list L yang mungkin kosong dan infotype x
   F.S. jika ada elemen list dengan alamat P, dimana info(P)=X, maka P
        dihapus dan P di-dealokasi, jika tidak ada maka list tetap
        list mungkin akan menjadi kosong karena penghapusan */
{
    // tambahkan code mu disini

}

void printInfo(List L)
/* I.S. terdefinisi list L yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */
{
    // tambahkan code mu disini
    if (ListEmpty(L))
        cout<< "list Kosong" <<endl;
    else{
        int i = 1;
        address Q = L.first;
        cout<< "=====    Data Mahasiswa    =====" <<endl;
        while(Q != NULL){
            cout<< "||   | Nama : "<< Q->info.nama <<endl;
            cout<< "|| "<< i <<" | Nim : "<< Q->info.nim <<endl;
            cout<< "||   | Kelas : "<< Q->info.kelas <<endl;
            i+=1;
            Q = Q->next;
            cout<< "--------------------------------" <<endl;
        }
       cout<< "================================" <<endl;

    }
}

void scanInfo(mahasiswa &m)
/* I.S. ~
   F.S. meminta data mahasisswa dari user */
{
    // tambahkan code mu disini
    cout<< "input data mahasiswa" <<endl;
    cout<< "nama : " ; cin>> m.nama;
    cout<< "nim : " ; cin>> m.nim ;
    cout<< "kelas : " ; cin>> m.kelas;
    cout<< "\n";
}
