/* ADT Tanggal */
/* Tanggal : 24 Sept 2014 */

#ifndef TANGGAL_H
#define TANGGAL_H

#include "boolean.h"

/* *** DEFINISI  DAN SPESIFIKASI TYPE TANGGAL *** */
typedef struct { 
		int DD;  /* hari, [1..31]  */
        int MM;  /* bulan, [1..12] */
        int YY;  /* tahun > 0 */
} TANGGAL;

/* *** SELEKTOR *** */
#define Day(T) (T).DD
#define Month(T) (T).MM
#define Year(T) (T).YY

/* *** VALIDASI TERHADAP TYPE  *** */
boolean IsValidTanggal (int D, int M, int Y);
/* Mengirim true  jika D, M, Y dapat membentuk TANGGAL yang valid */
/* dipakai untuk mengetes SEBELUM membentuk sebuah TANGGAL */
/* Perhatikan bahwa setiap bulan memiliki jumlah hari yang berbeda, dan 
   khusus bulan Februari bisa 28 atau 29, tergantung apakah tahunnya kabisat atau bukan */

/* *** DEFINISI DAN SPESIFIKASI KONSTRUKTOR *** */
TANGGAL MakeTANGGAL (int h, int b, int t);
/* Membentuk  TANGGAL dari tanggal h, bulan b, dan tahun t. */
/* Prekondisi : h, b, t dapat membentuk TANGGAL yang valid. */

/* *** DEFINISI DAN SPESIFIKASI OPERATOR BACA/TULIS *** */
void BacaTANGGAL (TANGGAL * T);
/* I.S. Sembarang */
/* F.S. T terdefinisi dan merupakan TANGGAL yang valid */
/* Proses : Mengulangi membaca komponen DD, MM, YY sehingga membentuk T yang valid. Tidak mungkin menghasilkan T yang tidak valid. */
/* Pesan kesalahan jika masukan tanggal tidak valid : "Masukan tanggal tidak valid" */
/* Elemen-elemen TANGGAL dibaca dalam satu baris perintah dengan masing-masing elemen dipisahkan sebuah spasi */
/* Contoh format input: 12 3 2014
   Artinya: DD = 12, MM = 3, YY = 2014 */ 
void TulisTANGGAL (TANGGAL T);
/* I.S. T terdefinisi */
/* F.S. Nilai T ditulis ke layar dengan format DD/MM/YY, tanpa spasi dan enter di awal ataupun di akhir */

/* *** DEFINISI DAN SPESIFIKASI PREDIKAT *** */
boolean IsEqual (TANGGAL D1, TANGGAL D2);
/* Menghasilkan true jika D1=D2 yaitu jika Day(D1)=Day(D2) dan Month(D1)=Month(D2) dan Year(D1)=Year(D2). */
boolean IsBefore (TANGGAL D1, TANGGAL D2);
/* Menghasilkan benar jika D1 adalah TANGGAL sebelum D2 */ 
boolean IsAfter (TANGGAL D1, TANGGAL D2);
/* Menghasilkan benar jika D1 adalah TANGGAL sesudah D2 */
boolean IsKabisat (int Y);
/* Menghasilkan true jika tahun Y adalah tahun kabisat yaitu habis dibagi 4 tetapi tidak habis dibagi 100, atau habis dibagi 400 */

/* *** DEFINISI DAN SPESIFIKASI OPERATOR/FUNGSI LAIN TERHADAP TANGGAL *** */
TANGGAL NextDay (TANGGAL D);
/* Menghitung TANGGAL yang merupakan keesokan hari dari TANGGAL D yang diberikan*/
TANGGAL PrevDay (TANGGAL D);
/* Menghitung TANGGAL yang merupakan 1 hari sebelum TANGGAL D yang diberikan */
TANGGAL NextNday (TANGGAL D, int N);
/* Menghasilkan TANGGAL yang merupakan N hari sesudah TANGGAL D yang diberikan*/
TANGGAL PrevNDay (TANGGAL D, int N); 
/* Menghasilkan TANGGAL N hari sebelum T */

#endif
