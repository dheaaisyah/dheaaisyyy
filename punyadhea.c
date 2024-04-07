#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main();
void menupustakawan();
void loginpustakawan(int);
void menupengunjung1();
void menupengunjung2();
void registpengunjung();
void loginpengunjung(int);
void feedback();
void exit();
void hapusakun();
void tambahbuku();
void hapusbuku();
void daftarbuku();
void daftarpinjam();
void pinjambuku();
void kembalibuku();
void lihatdenda();
void gantipassword();
void daftarakunpengunjung();
void caribuku();
void hapuspinjam();
void testaja();

char siapaygsedanglogin[50];

struct Pustakawan{
    char password[100], username[100];
} pustakawan;

struct Pengunjung{
    char password[100], username[100], nama[100];
} pengunjung;

struct buku{
    int jumlah, a;
} buku;

struct buk{
    char judul[100], kategori[100], jenis[100], genre[100];
    int status;
}buk;

struct pinjam{
    char nama[50], email[50], jaminan[50], alamat[50], notel[50], buku[50];
    int tanggal,bulan,tahun;
}pinjam;

struct daf{
    char nama[50];
    char email[50];
    char username[50];
    char password[50];
}daftar,a;

struct pengembalian
{
    char nama[50],buku[50],notel[50],email[50];
    int tanggal,bulan,tahun;
}pengembalianbuku;

void main(){
    int mainmenu;
        system("cls");
        printf("===== WELCOME TO GREEEN LIBRARY =====\n");
        printf("1. Menu Pustakawan\n");
        printf("2. Menu Pengunjung\n");
        printf("3. Keluar\n");
        printf("Masukan pilihan : "); scanf("%d", &mainmenu);
        switch(mainmenu){
            case 1:
                loginpustakawan(3);
                break;
            case 2:
                menupengunjung1();
                break;
            case 3: 
                exit;
                break;
        } 
}

// PUSTAKAWAN //
void loginpustakawan(int n)
{ // Login Rekursif 3x

    system("cls");
    char user[50], pass[50];
    if (n > 0)
    {
        fflush(stdin);
        printf("Masukan Username : ");
        gets(pustakawan.username);
        printf("Masukan Password : ");
        gets(pustakawan.password);
        if (strcmp(pustakawan.username, "bukuhijau")==0 && strcmp(pustakawan.password, "reyhanwangsaf") == 0)
        {
            printf("Akses diterima. Selamat Datang\n");
            menupustakawan();
        }
        else
        {
            printf("Username atau Password tidak terdaftar\n");
            printf("Kesempatan Anda sisa %d kali lagi\n",n-1);
            return loginpustakawan(n - 1);
        }
    }

    if (n == 0)
    {
        printf("Akses ditolak\n");
        main();
    }
}


void menupustakawan(){
    int pustaka;
        system("cls");
        printf("===== MENU PUSTAKAWAN =====\n");
        printf("1. Lihat Akun\n");
        printf("2. Hapus Akun\n");
        printf("3. Tambah Buku\n");
        printf("4. Hapus Buku\n");
        printf("5. Lihat Daftar Buku\n");
        printf("6. Lihat Status Peminjaman\n");
        printf("7. Cari Buku\n");
        printf("8. Hapus Pinjaman\n");
        printf("9. Kembali ke Menu Sebelumnya\n");
        printf("10. Keluar\n");
        printf("\n\nMasukkan Angka.....");
        scanf("%d",&pustaka);
        switch(pustaka){
            case 1:
                daftarakunpengunjung();
                break;
            case 2:
                hapusakun();
                menupustakawan();
                break;
            case 3:
                tambahbuku();
                break;
            case 4:
                hapusbuku();
                break;
            case 5:
                daftarbuku();
                system("pause");
                menupustakawan();
                break;
            case 6:
                daftarpinjam();
                menupustakawan();
                break;
            case 7:
                caribuku();
                menupustakawan();
                break;
            case 8:
                hapuspinjam();
                menupustakawan();
                break;
            case 9:
                main();
                break;
            case 10:
                exit(0);
                break;
            default:
                system("cls");
                printf("Angka yang anda masukan tidak valid, coba lagi!");
                system("pause");
                menupustakawan();
                break;
        } 
    }
// PENGUNJUNG //


void menupengunjung1(){
                system("cls");
                int pengunjung;
                printf("\n===== Menu Pengunjung =====\n");
                printf("1. Daftar\n");
                printf("2. Login\n");
                printf("3. Kembali ke menu utama\n");
                printf("Masukan pilihan : "); scanf("%d", &pengunjung);
                switch(pengunjung){
                    case 1:
                        registpengunjung();
                        menupengunjung1();
                        break;
                    case 2:
                        loginpengunjung(3);
                        menupengunjung1();
                        break;
                    case 3:
                        main();
                        break;
                    case 4:
                        exit;
                        break;
                }  

}

void menupengunjung2(){
    int pengunjung;
        system("cls");
        printf("\n===== MENU PENGUNJUNG =====\n");
        printf("===== Selamat Datang Sir %s =====\n", siapaygsedanglogin);
        printf("1. Lihat Daftar Buku\n");
        printf("2. Peminjaman Buku\n");
        printf("3. Pengembalian Buku\n");
        printf("4. Lihat Denda\n");
        printf("5. Ganti Password\n");
        printf("6. Hapus Akun\n");
        printf("7. Cari Buku\n");
        printf("8. Lihat Daftar Buku yang dipinjam\n");
        printf("9. Kembali\n");
        printf("10. Keluar\n");
        scanf("%d",&pengunjung);
        switch(pengunjung){
            case 1:
                daftarbuku();
                system("pause");
                menupengunjung2();
                break;
            case 2:
                pinjambuku();
                menupengunjung2();
                break;
            case 3:
                kembalibuku();
                break;
            case 4:
                lihatdenda();
                break;
            case 5:
                testaja();
                break;
            case 6:
                hapusakun();
                menupengunjung2();
                break;
            case 7:
                caribuku();
                menupengunjung2();
                break;
            case 8:
                daftarpinjam();
                menupengunjung2();
                break;
            case 9:
                main();
                break;
            case 10:
                exit(0);
                break;
            default:
                system("cls");
                printf("Angka yang anda masukan tidak valid, coba lagi\n");
                system("pause");
                return menupengunjung2();
        }
}
//==================================================================================
//==================================================================================
void caribuku(){
    system("cls");
    printf("====== Daftar Buku ======\n");
    int kategori1,kategori2,kategori3,kategori4,kategori5,kategori6,kategori7;
    FILE *buku; 
    buku = fopen("dafbuk.dat", "rb");

        printf("\n1. Fiksi\n2.Nonfiksi\n");
        scanf("%d",&kategori1);
        switch (kategori1){
        case 1://fiksi
            printf("\n1. Novel\n2.Komik\n");
            scanf("%d",&kategori3);
            switch (kategori3){
            case 1://novel
                //batas atas
                printf("\n1. Romance\n2.Fantasy\n");
                scanf("%d",&kategori4);
                switch (kategori4){
                case 1://Romance
                    while (fread(&buk,sizeof (buk),1, buku)==1){
                        if (strcmp(buk.genre,"romance")==0 || strcmp(buk.genre,"Romance")==0){
                            printf("\n    judul : %s\n",buk.judul);
                            printf("\n    Kategori(Fiksi/Nonfiksi) : %s\n", buk.kategori);
                            printf("\n    Jenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : %s\n", buk.jenis); 
                            printf("\n    Genre : %s\n", buk.genre);  
                        }
                    }
                    break;
                case 2://Fantasy
                    while (fread(&buk,sizeof (buk),1, buku)==1){
                    if (strcmp(buk.genre,"fantasy")==0 || strcmp(buk.genre,"Fantasy")==0){
                            printf("\n    judul : %s\n",buk.judul);
                            printf("\n    Kategori(Fiksi/Nonfiksi) : %s\n", buk.kategori);
                            printf("\n    Jenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : %s\n", buk.jenis); 
                            printf("\n    Genre : %s\n", buk.genre);  
                        }
                    }
                    break;
                default:
                    caribuku();
                    break;
                }
                //batas bawah
                break;
            case 2://komik
                //batas atas
                printf("\n1. Manga\n2.Action\n");
                scanf("%d",&kategori5);
                switch (kategori5){
                case 1://Manga
                    while (fread(&buk,sizeof (buk),1, buku)==1){
                    if (strcmp(buk.genre,"manga")==0 || strcmp(buk.genre,"Manga")==0){
                            printf("\n    judul : %s\n",buk.judul);
                            printf("\n    Kategori(Fiksi/Nonfiksi) : %s\n", buk.kategori);
                            printf("\n    Jenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : %s\n", buk.jenis); 
                            printf("\n    Genre : %s\n", buk.genre);  
                        }
                    }
                    break;
                case 2://Action
                    while (fread(&buk,sizeof (buk),1, buku)==1){
                    if (strcmp(buk.genre,"action")==0 || strcmp(buk.genre,"Action")==0){
                            printf("\n    judul : %s\n",buk.judul);
                            printf("\n    Kategori(Fiksi/Nonfiksi) : %s\n", buk.kategori);
                            printf("\n    Jenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : %s\n", buk.jenis); 
                            printf("\n    Genre : %s\n", buk.genre);  
                        }
                    }
                    break;
                default:
                    caribuku();
                    break;
                }
                //batas bawah
                break;
            default:
                caribuku();
                break;
        }
            break;
        case 2://nonfiksi
            printf("\n1.Buku Pelajaran \n2.Ensiklopedia\n");
            scanf("%d",&kategori2);
            switch (kategori2){
            case 1://buku pelajaran
                printf("\n1. MIPA\n2.IPS\n");
                scanf("%d",&kategori6);
                switch (kategori6){
                case 1://Mipa
                    while (fread(&buk,sizeof (buk),1, buku)==1){
                    if (strcmp(buk.genre,"MIPA")==0 || strcmp(buk.genre,"Mipa")==0 || strcmp(buk.genre,"mipa")==0){
                            printf("\n    judul : %s\n",buk.judul);
                            printf("\n    Kategori(Fiksi/Nonfiksi) : %s\n", buk.kategori);
                            printf("\n    Jenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : %s\n", buk.jenis); 
                            printf("\n    Genre : %s\n", buk.genre);  
                        }
                    }
                    break;
                case 2://IPS
                    while (fread(&buk,sizeof (buk),1, buku)==1){
                    if (strcmp(buk.genre,"IPS")==0 || strcmp(buk.genre,"Ips")==0 || strcmp(buk.genre,"ips")==0){
                            printf("\n    judul : %s\n", buk.judul);
                            printf("\n    Kategori(Fiksi/Nonfiksi) : %s\n", buk.kategori);
                            printf("\n    Jenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : %s\n", buk.jenis); 
                            printf("\n    Genre : %s\n", buk.genre);  
                        }
                    }
                    break;
                default:
                    caribuku();
                    break;
                }
                break;
            case 2://ensiklopedia
                printf("\n1.Dunia\n2.Indonesia\n");
                scanf("%d",&kategori7);
                switch (kategori7){
                case 1://Dunia
                    while (fread(&buk,sizeof (buk),1, buku)==1){
                    if (strcmp(buk.genre,"dunia")==0 || strcmp(buk.genre,"Dunia")==0){
                            printf("\n    judul : %s\n", buk.judul);
                            printf("\n    Kategori(Fiksi/Nonfiksi) : %s\n", buk.kategori);
                            printf("\n    Jenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : %s\n", buk.jenis); 
                            printf("\n    Genre : %s\n", buk.genre);  
                        }
                    }
                    break;
                case 2://Indonesia
                        while (fread(&buk,sizeof (buk),1, buku)==1){
                            if (strcmp(buk.genre,"indonesia")==0 || strcmp(buk.genre,"Indonesia")==0){
                            printf("\n    judul : %s\n",buk.judul);
                            printf("\n    Kategori(Fiksi/Nonfiksi) : %s\n", buk.kategori);
                            printf("\n    Jenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : %s\n", buk.jenis); 
                            printf("\n    Genre : %s\n", buk.genre);  
                        }
                        }
                    break;
                default:
                    caribuku();
                    break;
                }
                break;
            default:
                caribuku();
                break;
            }
            break;
        
        default:
            caribuku();
            break;
        }

    fclose(buku);
    system("pause");
}
//==================================================================================
//==================================================================================
    void tambahbuku(){
    system("cls");
    printf("========== Tambah Buku ==========\n");

    FILE *f_struktur; 
    f_struktur=fopen("dafbuk.dat","ab+");
    int n, i; 
     
    printf("Banyaknya Buku: "); 
    scanf("%d", &n); getchar(); 
    for (i=1; i<=n; i++){ 
        fflush(stdin);
        printf("\nJudul : "); gets(buk.judul);
        printf("Kategori(fiksi/nonfiksi) : "); gets(buk.kategori);
        printf("Jenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : "); gets(buk.jenis);
        printf("Genre \n"); 
        printf("(Romance/Fantasy/Manga/Action/MIPA/IPS/Dunia/Indonesia) : ");gets(buk.genre);
        buk.status=0;
        //0 = ready
        //1 = sedang di pinjam

        fwrite(&buk,sizeof(buk),1,f_struktur); 
    } 
    fclose(f_struktur); 

    printf("========== Berhasil Ditambahkan ==========\n");

    return menupustakawan();
     
}

void daftarbuku(){
    system("cls");
    printf("========== Daftar Buku ==========\n");

    FILE *f_struktur;
    f_struktur = fopen("dafbuk.dat", "rb"); 
    while(fread(&buk,sizeof(buk),1,f_struktur)==1){ 
        printf("\nJudul : %s",buk.judul);
        printf("\nKategori(fiksi/nonfiksi) : %s",buk.kategori);
        printf("\nJenis(Novel/Komik/BukuPelajaran/Ensiklopedia) : %s",buk.jenis);
        printf("\nGenre\n(Romance/Fantasy/Manga/Action/MIPA/IPS/Dunia/Indonesia) : %s",buk.genre);
        printf("\nStatus : %d",buk.status);
        if (buk.status == 1)
        {
            printf("\nStatus : Sedang dipinjam");
        }
        else
        {
            printf("\nStatus : Ready");
        }
        printf("\n-------------------------------------\n"); 
    } 
    fclose(f_struktur); 
    
}


void hapusbuku(){
    system("cls");
    FILE *f_struktur;
    FILE *f_struktur2;
    char dicari[50];

    f_struktur = fopen("dafbuk.dat", "rb"); 
    f_struktur2 = fopen("dafbuk2.dat", "wb"); 
    fflush(stdin);
    printf("\nSilahkan masukkan nama Buku yang akan dihapus: ");
    gets(dicari);
    while (fread(&buk,sizeof (buk),1, f_struktur)==1)
    {
        if (strcmp(buk.judul, dicari)!=0)
        {
            fwrite(&buk, sizeof(buk), 1, f_struktur2); 
        }
    }

    fclose(f_struktur);
    fclose(f_struktur2);
    remove("dafbuk.dat"); 
    rename("dafbuk2.dat","dafbuk.dat"); 
    menupustakawan();
}

// }
void lihatdenda() {

}

void registpengunjung(){
    int n, i; 

    FILE *f_struktur;
    f_struktur=fopen("Register Akun User.dat","ab+"); 
        
        fflush(stdin);
        printf("Nama Lengkap \t: ");gets(daftar.nama);
        printf("Email \t\t: "); gets(daftar.email);
        printf("Username \t: "); gets(daftar.username);
        printf("Password \t: "); gets(daftar.password);
        printf("-------------------------------\n");           
        printf("AKUN BERHASIL DITAMBAHKAN");    
        printf("\n-------------------------------\n");
        
        fwrite(&daftar,sizeof(daftar),1,f_struktur); 
    
    fclose(f_struktur);  
    loginpengunjung(3);

}

void loginpengunjung(int n){ // Login Rekursif 3x
    system("cls");
    char user[20],pass[20];
    int indikator = 0;
    FILE *registerakun = fopen("Register Akun User.dat","rb");
    if (n > 0){
        fflush(stdin);
        printf("\t=====LOGIN=====\n");
        printf("\n\tMasukan Username : "); gets(user);
        printf("\tMasukan Password : "); gets(pass);

        while (fread(&daftar, sizeof(daftar), 1, registerakun)){   
            if (strcmp(user, daftar.username) == 0 && strcmp(pass, daftar.password) == 0){
                printf("Akses diterima. Selamat Datang");
                menupengunjung2();
                indikator = 1;
            }
        }
        if (indikator == 0){
            printf("Username atau Password tidak terdaftar\n");
            printf("Kesempatan Anda sisa %d kali lagi\n",n-1);
            return loginpengunjung(n - 1);
        }
    }

    if (n == 0){
        printf("Akses ditolak\n");
        main();
    }
    fclose(registerakun);
}

void daftarakunpengunjung(){
    FILE *f_struktur;
    f_struktur = fopen("Register Akun User.dat", "rb"); 
    while(fread(&daftar,sizeof(daftar),1,f_struktur)==1){ 
        printf("\nNama Lengkap \t: %s",daftar.nama);
        printf("\nEmail \t\t: %s",daftar.email);
        printf("\nUsername \t: %s",daftar.username);
        printf("\nPassword \t: %s\n",daftar.password); 
    } 
    fclose(f_struktur); 
    system("pause");
    menupustakawan();
   
}


void hapusakun(){
    system("cls");
    //============================================================================
        FILE *f_struktur99;
    f_struktur99 = fopen("Register Akun User.dat", "rb"); 
    while(fread(&daftar,sizeof(daftar),1,f_struktur99)==1){ 
        printf("\nNama Lengkap \t: %s",daftar.nama);
        printf("\nEmail \t\t: %s",daftar.email);
        printf("\nUsername \t: %s",daftar.username);
        printf("\nPassword \t: %s\n",daftar.password); 
    } 
    fclose(f_struktur99);
    //============================================================================
    FILE *f_struktur;
    FILE *f_struktur2;
    char dicari[50];

    f_struktur = fopen("Register Akun User.dat", "rb"); 
    f_struktur2 = fopen("Register Akun User2.dat", "wb"); 
    fflush(stdin);
    printf("\nSilahkan masukkan Username Akun yang akan dihapus: ");
    gets(dicari);
    while (fread(&daftar,sizeof (daftar),1, f_struktur)==1)
    {
        if (strcmp(daftar.username, dicari)!=0)
        {
            fwrite(&daftar, sizeof(daftar), 1, f_struktur2); 
        }
    }

    fclose(f_struktur);
    fclose(f_struktur2);
    remove("Register Akun User.dat"); 
    rename("Register Akun User2.dat","Register Akun User.dat"); 
    
} 

//<<<<<<<<<<<<<<<<<<<<<<<<<<======>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<======>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<======>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

char gantipass[50],namagantipass[50],emailgantipass[50];
void numpanghapus(){
    printf("masuk ke numpang hapus \n");
    FILE *f_struktur;
    FILE *f_struktur2;
    char dicari[50];

    f_struktur = fopen("Register Akun User.dat", "rb"); 
    f_struktur2 = fopen("Register Akun User2.dat", "wb"); 
    while (fread(&daftar,sizeof (daftar),1, f_struktur)==1)
    {
        if (strcmp(daftar.username, siapaygsedanglogin)!=0)
        {
            fwrite(&daftar, sizeof(daftar), 1, f_struktur2); 
        }
    }

    fclose(f_struktur);
    fclose(f_struktur2);
    remove("Register Akun User.dat"); 
    rename("Register Akun User2.dat","Register Akun User.dat"); 
    printf("selesai dari numpang hapus \n");

}

void gantipassword(){
    
    system("cls");fflush(stdin);
    printf("\n\tUsername : %s",siapaygsedanglogin);
    printf("\n\tMasukkan Password yang baru : ");gets(gantipass);
    //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    FILE *f_struktur1;
    f_struktur1 = fopen("Register Akun User.dat", "rb"); 
    while(fread(&daftar,sizeof(daftar),1,f_struktur1)==1){ 
        if (strcmp(daftar.username, siapaygsedanglogin)==0){
            strcpy(namagantipass,daftar.nama);
            strcpy(emailgantipass,daftar.email); 
            // printf("%d",strcmp(daftar.username, siapaygsedanglogin));
            // printf("%s <> %s",daftar.username, siapaygsedanglogin);
        }
    }  
    fclose(f_struktur1);
    
//======================================================================================        
//======================================================================================
    
//=======================================================================================
//====================================================================================
}

void numpangnambahgantipass(){
    printf("masuk ke numpangnambahgantipass \n");
    FILE *f_struktur4; 
    f_struktur4=fopen("Register Akun User.dat","ab+");
        strcpy(daftar.username,siapaygsedanglogin);
        strcpy(daftar.nama,namagantipass);
        strcpy(daftar.email,emailgantipass);
        strcpy(daftar.password,gantipass);

        fwrite(&daftar,sizeof(daftar),1,f_struktur4); 
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    
   
    fclose(f_struktur4); 
    printf("\n============Password Berhasil diganti============\n");
    system("pause");
    menupengunjung2();
}

void pinjambuku(){
    system("cls");
    char kategori[50],jenis[50],genre[50];
    int n, i; 
    FILE *f_struktur; 
    f_struktur=fopen("Pinjam Buku.dat","ab+"); 
    daftarbuku();
            fflush(stdin);
            printf("\nNama Peminjam \t: "); gets(pinjam.nama);
            printf("No Telepon \t: "); gets(pinjam.notel);
            printf("Email \t\t: "); gets(pinjam.email);
            printf("Alamat \t\t: "); gets(pinjam.alamat);
            printf("Tanggal/Bulan/Tahun saat peminjaman \t\t\n: "); 
            scanf("%d",&pinjam.tanggal);printf(": ");
            scanf("%d",&pinjam.bulan);printf(": ");
            scanf("%d",&pinjam.tahun);getchar();
            getchar();
            printf("Judul Buku(tulis sesuai dengan yang ada di list) \t\t: "); gets(pinjam.buku);
            
            fwrite(&pinjam,sizeof(pinjam),1,f_struktur);
            printf("-------------------------------\n");           
            printf("PINJAMAN BERHASIL DITAMBAHKAN");    
            printf("\n-------------------------------\n");
            
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    FILE *f_struktur8;
    f_struktur8 = fopen("dafbuk.dat", "rb"); 
    while(fread(&buk,sizeof(buk),1,f_struktur8)==1){ 
        if (strcmp(buk.judul,pinjam.buku)==0)
        {
            strcpy(kategori,buk.kategori);
            strcpy(jenis,buk.jenis);
            strcpy(genre,buk.genre);
        }   
    }
    fclose(f_struktur8); 
    
//======================================================================================        
//======================================================================================
    FILE *f_struktur1;
    FILE *f_struktur2;

    f_struktur1 = fopen("dafbuk.dat", "rb"); 
    f_struktur2 = fopen("dafbuk2.dat", "wb"); 
    while (fread(&buk,sizeof (buk),1, f_struktur1)==1)
    {
        if (strcmp(buk.judul, pinjam.buku)!=0)
        {
            fwrite(&buk, sizeof(buk), 1, f_struktur2); 
        }
    }

    fclose(f_struktur1);
    fclose(f_struktur2);
    remove("dafbuk.dat"); 
    rename("dafbuk2.dat","dafbuk.dat"); 
    
//=======================================================================================
//====================================================================================
    FILE *f_struktur4; 
    f_struktur4=fopen("dafbuk.dat","ab+");
        strcpy(buk.judul,pinjam.buku);
        strcpy(buk.kategori,kategori);
        strcpy(buk.jenis,jenis);
        strcpy(buk.genre,genre);
        buk.status=1;
        //0 = ready
        //1 = sedang di pinjam

        fwrite(&buk,sizeof(buk),1,f_struktur4); 
    fclose(f_struktur4); 
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 
    fclose(f_struktur);
    system("pause"); 
    menupengunjung2(); 
}

void daftarpinjam(){
    system("cls");
    FILE *f_struktur;
    f_struktur = fopen("Pinjam Buku.dat", "rb"); 

    while(fread(&pinjam,sizeof(pinjam),1,f_struktur)==1){ 
        printf("\nNama Pemesan \t: %s", pinjam.nama);
        printf("\nJudul Buku \t\t: %s",pinjam.buku);
        printf("\nNo Telepon \t: %s", pinjam.notel);
        printf("\nEmail \t\t: %s", pinjam.email);
        printf("\nTanggal/Bulan/Tahun Peminjaman \t\t: %d/%d/%d", pinjam.tanggal,pinjam.bulan,pinjam.tahun);
        printf("\n-------------------------------------\n"); 
    } 
    fclose(f_struktur); 
    system("pause");

}

void hapuspinjam(){
    system("cls");
    FILE *f_struktur;
    FILE *f_struktur2;
    char dicari[50];

    f_struktur = fopen("Pinjam Buku.dat", "rb"); 
    f_struktur2 = fopen("Pinjam Buku2.dat", "wb"); 
    fflush(stdin);
    printf("\nSilahkan masukkan nama peminjam yang akan dihapus: ");
    gets(dicari);
    while (fread(&pinjam,sizeof (pinjam),1, f_struktur)==1)
    {
        if (strcmp(pinjam.nama, dicari)!=0)
        {
            fwrite(&pinjam, sizeof(pinjam), 1, f_struktur2); 
        }
    }

    fclose(f_struktur);
    fclose(f_struktur2);
    remove("Pinjam Buku.dat"); 
    rename("Pinjam Buku2.dat","Pinjam Buku.dat"); 
    
} 

void kembalibuku() {
    char a[20],kategori[20],jenis[20],genre[20];
    system("cls");
        //============================================================
            FILE *f_struktur0;
            f_struktur0 = fopen("Pinjam Buku.dat", "rb"); 
            FILE *f_struktur00;
            f_struktur00 = fopen("Balikin Buku.dat", "ab+"); 

    fflush(stdin);
    printf("\tMasukkan Nama Peminjam : ");gets(a);

            while(fread(&pinjam,sizeof(pinjam),1,f_struktur0)==1){ 
                if (strcmp(a,pinjam.nama)==0)
                {
                    printf("\nNama Pemesan \t: %s", pinjam.nama);strcpy(pengembalianbuku.nama,pinjam.nama);
                    printf("\nJudul Buku \t: %s",pinjam.buku);strcpy(pengembalianbuku.buku,pinjam.buku);
                    printf("\nNo Telepon \t: %s", pinjam.notel);strcpy(pengembalianbuku.notel,pinjam.notel);
                    printf("\nEmail \t\t: %s", pinjam.email);strcpy(pengembalianbuku.email,pinjam.email);
                    printf("Tanggal/Bulan/Tahun Peminjaman \t\t: %d/%d/%d\n", pinjam.tanggal,pinjam.bulan,pinjam.tahun);
                    printf("-------------------------------------\n"); 
                    printf("Masukkan Tanggal/Bulan/Tahun saat pengembalian \t\t\n: "); 
                    scanf("%d",&pengembalianbuku.tanggal);printf(": ");
                    scanf("%d",&pengembalianbuku.bulan);printf(": ");
                    scanf("%d",&pengembalianbuku.tahun);
                    //============================================================
                    fwrite(&pengembalianbuku,sizeof(pengembalianbuku),1,f_struktur00);
                }
            } 
             
        
        //===========================================
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    FILE *f_struktur8;
    f_struktur8 = fopen("dafbuk.dat", "rb"); 
    while(fread(&buk,sizeof(buk),1,f_struktur8)==1){ 
        if (strcmp(buk.judul,pengembalianbuku.buku)==0)
        {
            strcpy(kategori,buk.kategori);
            strcpy(jenis,buk.jenis);
            strcpy(genre,buk.genre);
        }   
    }
    fclose(f_struktur8); 
    
//======================================================================================        
//======================================================================================
    FILE *f_struktur1;
    FILE *f_struktur2;

    f_struktur1 = fopen("dafbuk.dat", "rb"); 
    f_struktur2 = fopen("dafbuk2.dat", "wb"); 
    while (fread(&buk,sizeof (buk),1, f_struktur1)==1)
    {
        if (strcmp(buk.judul, pinjam.buku)!=0)
        {
            fwrite(&buk, sizeof(buk), 1, f_struktur2); 
        }
    }

    fclose(f_struktur1);
    fclose(f_struktur2);
    remove("dafbuk.dat"); 
    rename("dafbuk2.dat","dafbuk.dat"); 
    
//=======================================================================================
//====================================================================================
    FILE *f_struktur4; 
    f_struktur4=fopen("dafbuk.dat","ab+");
        strcpy(buk.judul,pinjam.buku);
        strcpy(buk.kategori,kategori);
        strcpy(buk.jenis,jenis);
        strcpy(buk.genre,genre);
        buk.status=0;
        //0 = ready
        //1 = sedang di pinjam

        fwrite(&buk,sizeof(buk),1,f_struktur4); 
    fclose(f_struktur4); 
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //===========================================
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    FILE *f_struktur222;
    FILE *f_struktur22;
    char dicari[50];

    f_struktur2 = fopen("Pinjam Buku.dat", "rb"); 
    f_struktur22 = fopen("Pinjam Buku2.dat", "wb"); 
    while (fread(&pinjam,sizeof (pinjam),1, f_struktur222)==1)
    {
        if (strcmp(pinjam.nama, a)!=0)
        {
            fwrite(&pinjam, sizeof(pinjam), 1, f_struktur22); 
        }
    }

    fclose(f_struktur222);
    fclose(f_struktur22);
    remove("Pinjam Buku.dat"); 
    rename("Pinjam Buku2.dat","Pinjam Buku.dat"); 
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


        fclose(f_struktur0);
        fclose(f_struktur00);
        system("pause");
        menupengunjung2();
}

void testaja(){
    system("cls");fflush(stdin);
    printf("\n\tUsername : %s",siapaygsedanglogin);
    printf("\n\tMasukkan Password yang baru : ");gets(gantipass);
    //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    FILE *f_struktur8;
    f_struktur8 = fopen("Register Akun User.dat", "rb"); 
    while(fread(&daftar,sizeof(daftar),1,f_struktur8)==1){ 
        if (strcmp(daftar.username,siapaygsedanglogin)==0)
        {
            strcpy(namagantipass,daftar.nama);
            strcpy(emailgantipass,daftar.email);
        }   
    }
    fclose(f_struktur8); 
    
//======================================================================================        
//======================================================================================
    FILE *f_struktur1;
    FILE *f_struktur2;

    f_struktur1 = fopen("Register Akun User.dat", "rb"); 
    f_struktur2 = fopen("Register Akun User2.dat", "wb"); 
    while (fread(&daftar,sizeof (daftar),1, f_struktur1)==1)
    {
        if (strcmp(daftar.username, siapaygsedanglogin)!=0)
        {
            fwrite(&daftar, sizeof(daftar), 1, f_struktur2); 
        }
    }

    fclose(f_struktur1);
    fclose(f_struktur2);
    remove("Register Akun User.dat"); 
    rename("Register Akun User2.dat","Register Akun User.dat"); 
    
//=======================================================================================
//====================================================================================
    printf("masuk ke numpangnambahgantipass \n");
    FILE *f_struktur4; 
    f_struktur4=fopen("Register Akun User.dat","ab+");
        strcpy(daftar.username,siapaygsedanglogin);
        strcpy(daftar.nama,namagantipass);
        strcpy(daftar.email,emailgantipass);
        strcpy(daftar.password,gantipass);

        fwrite(&daftar,sizeof(daftar),1,f_struktur4); 
    //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    
   
    fclose(f_struktur4); 
    printf("\n============Password Berhasil diganti============\n");
    system("pause");
    menupengunjung2();
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
}