/* ADT Array */
/* Tanggal : 24 Juni 2015 */

#ifndef _ARRAY_H
#define _ARRAY_H

#include <stdio.h>
#include "boolean.h"

/* Konstanta */
#define IdxUndef -99 /* indeks tak terdefinisi */
#define NMax 10      /* ukuran maksimum array */

/* Deklarasi Type TabInt */
typedef struct { int TI[NMax];  /* container array */
                 int nbelmt;    /* banyaknya elemen array yang terisi */
} TabInt;

/* Definisi selektor */
#define Elmt(T,i) (T).TI[i]
#define NbElmt(T) (T).nbelmt

/* ********** KONSTRUKTOR ********** */
/* *** Membuat tabel kosong *** */
void MakeEmpty(TabInt * T);
/* I.S. sembarang */
/* F.S. Terbentuk tabel T kosong dengan ukuran maksimum NMax */

/* ********** PREDIKAT PENTING ********** */
/* *** Test tabel kosong *** */
boolean IsEmpty (TabInt T);
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
/* *** Test tabel penuh *** */
boolean IsFull (TabInt T);
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */

/* ********** BACA/TULIS ********** */
void BacaIsi (TabInt * T);
/* I.S. T sembarang */
/* F.S. tabel T terdefinisi */
/* Proses : membaca isi elemen T sampai pengguna mengetikkan angka -999 atau array penuh. 
   Setiap elemen dibaca per baris (tanpa tambahan komentar dan karakter apa pun).
   Ada kemungkinan menghasilkan T kosong, jika nilai pertama yang diketikkan pengguna adalah -999. */
void TulisIsi (TabInt T);
/* Proses : Menuliskan isi tabel dengan traversal */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong : indeks dan elemen tabel ditulis berderet ke bawahs
       Contoh: isi tabel T = {1,2,3,4}, ditulis ke layar: 
               [0]1
               [1]2
               [2]3
               [3]4
       Jika T kosong : Menulis "Tabel kosong" */
	   
/* ********** OPERASI-OPERASI LAIN ********** */
int SumTabel (TabInt T); 
/* Menghasilkan hasil penjumlahan semua elemen tabel T */
float AvgTabel (TabInt T); 
/* Prekondisi : T tidak kosong */
/* Menghasilkan nilai rata-rata dari tabel T */
int CountX (TabInt T, int X);
/* Menghasilkan kemunculan X di tabel T */
int SearchIdx (TabInt T, int X);
/* Search apakah ada elemen tabel T yang bernilai X. */
/* Jika ada, menghasilkan indeks i terkecil, dengan elemen ke-i = X. */
/* Jika tidak ada, mengirimkan IdxUndef. */
/* Menghasilkan IdxUndef jika tabel T kosong. */
void ValExtreme (TabInt T, boolean min, int * ext);
/* I.S. T terdefinisi, tidak kosong, min terdefinisi */
/* F.S. Jika min = true, maka ext berisi nilai minimum dalam T */
/*      Jika min = false, maka ext berisi nilai maksimum dalam T */
TabInt InverseTab (TabInt T);
/* Menghasilkan tabel dengan urutan tempat yang terbalik, yaitu : */
/* elemen pertama menjadi terakhir, */
/* elemen kedua menjadi elemen sebelum terakhir, dst.. */
/* Tabel kosong menghasilkan tabel kosong */
boolean IsSimetris (TabInt T);
/* Menghasilkan true jika tabel simetrik */
/* Tabel disebut simetrik jika: */
/*      elemen pertama = elemen terakhir, */
/*      elemen kedua = elemen sebelum terakhir, dan seterusnya */
/* Tabel kosong adalah tabel simetris */
void Sort (TabInt * T, boolean asc);
/* I.S. T boleh kosong */
/* F.S. Jika asc = true, elemen T terurut menaik/membesar. */
/*      Jika asc = false, elemen T terurut menurun/mengecil. */
/* Algoritma yang digunakan bebas */

#endif
