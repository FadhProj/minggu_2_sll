#include <iostream>
#include "sll.h"



int main()
{
    // deklarasi variabel
    List L;
    mahasiswa m;
    address P;

    // buat list kosong
    CreateList(L);

    // meminta inputan user
    // alokasi elemen
    // tambahkan elemen
    scanInfo(m);
    P = alokasi(m);
    insertFirst(L,P);

    // meminta inputan user
    // alokasi elemen
    // tambahkan elemen
    scanInfo(m);
    P = alokasi(m);
    insertLast(L,P);

    // meminta inputan user
    //D:\BRIN\Dosen\Struktur Data\Code\minggu_2_sll_answer\sll.cpp alokasi elemen
    // tambahkan elemen
    scanInfo(m);
    P = alokasi(m);
    insertAfter(L,P,L.first);

    // meminta inputan user
    // alokasi elemen
    // tambahkan elemen
    scanInfo(m);
    P = alokasi(m);
    insertAfter(L,P,L.first->next);

    // meminta inputan user
    // alokasi elemen
    // tambahkan elemen
    scanInfo(m);
    P = alokasi(m);
    insertLast(L,P);

    // meminta inputan user
    // alokasi elemen
    // tambahkan elemen
    scanInfo(m);
    P = alokasi(m);
    insertFirst(L,P);

    // Tampilkan Data
    printInfo(L);

    // hapus
    // hapus elemen pertama
    deleteFirst(L,P);

    // hapus elemen terakhir
    deleteLast(L,P);

    // hapus elemen setelah terakhir
    deleteAfter(L,P,L.first);

    // Tampilkan Data setelah dihapus
    printInfo(L);
    return 0;
}
