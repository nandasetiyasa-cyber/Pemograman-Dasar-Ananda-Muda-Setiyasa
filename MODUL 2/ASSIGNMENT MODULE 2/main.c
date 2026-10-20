#include <stdio.h>
#include <string.h>

//micropreprocessor
//variabel ini tidak ada tipe data, sifatnya immutable, tapi berbeda dengan const yang pure functions
#define ADMIN_FEE 50000

int main() {
    //variabel
    char nama[50]; //list 50
    int uangSaku;
    int uangPengeluaranMakanan;
    int uangPengeluaranTransportasi;

    //variabel hasil
    int totalBiaya;
    int sisaSaldo;


    //inisialisasi variabel dan tipe data
    printf("Masukkan Nama mahasiswa : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0; 


    printf("Masukkan uang saku anda : ");
    scanf("%d", &uangSaku);

    printf("Masukkan pengeluaran Makanan : ");
    scanf("%d", &uangPengeluaranMakanan);

    printf("Masukkan pengeluaran transportasi : ");
    scanf("%d", &uangPengeluaranTransportasi);

    //logic 
    totalBiaya = uangPengeluaranMakanan + uangPengeluaranTransportasi + ADMIN_FEE;
    sisaSaldo = uangSaku - totalBiaya;

    printf("\n");

    //final
    printf("=== STUDENT FINANCIAL MANAGEMENT SYSTEM ===\n");
    printf("=== %s FINANCIAL REPORT ===\n", nama);
    printf("Nama Mahasiswa      : %s\n", nama);
    printf("Uang Saku Bulanan   : Rp %d\n", uangSaku);
    printf("Pengeluaran Makanan : Rp %d\n", uangPengeluaranMakanan);
    printf("Pengeluaran Transpor: Rp %d\n", uangPengeluaranTransportasi);
    printf("Biaya Administrasi  : Rp %d\n", ADMIN_FEE);
    printf("Total Pengeluaran   : Rp %d\n", totalBiaya);
    printf("Sisa Saldo          : Rp %d\n", sisaSaldo);
}
