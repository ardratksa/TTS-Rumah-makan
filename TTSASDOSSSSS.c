#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


void panggilmenu(void);
void Penghitungan();
void struk(void);
void SetColor(unsigned short);


//Deklarasi struct
    struct macammenu
    {
        int menumakan,menuminuman;
    };
    struct subtotal
    {
        int jmlbeli1,jmlbeli2,jmlbeli3,jmlbeli4,jmlbeli5,jmlbeli6,jmlbeli7,jmlbeli8,jmlbeli9,jmlbeli10;
        int totalharga, bayar, kembalian;
    };
    struct makan
    {
        int magelangan, nasitelur , nasisarden, indomiegoreng,indomiekuah;

    };
    struct minum
    {
        int esteh, esjeruk, essirup,sogem, esklamud;

    };
    struct makan menu_mak;
    struct minum menu_min;
    struct macammenu menu;
    struct subtotal sub;

//Variabel pendukung
    char yakin;
    time_t ambil_waktu;
    char nama[99],pass[50],nama1 [99],pass1 [50];
    int a,b,c=0;


void main()
{
     system("cls");
    int pil;
    menu1:
    printf("\n .::  SELAMAT DATANG DI RUMAH MAKAN  'KERE'  ::. \n");
    printf("\n--------------------------------------------------\n");
    printf("=                                                =\n");
    printf("=  1. REGISTER                                   =\n");
    printf("=                                                =\n");
    printf("=  2. LOGIN                                      =\n");
    printf("=                                                =\n");
    printf("=  3. EXIT                                       =\n");
    printf("=                                                =\n");
    printf("--------------------------------------------------\n");
    printf("\n INPUT PILIHAN : ");
    scanf("%1d", &pil);
    fflush(stdin);

    switch(pil)
    {

    case 1:
        system("cls");
        regis();
        break;
    case 2:
        system("cls");
        login();
        break;

        default:
        printf("Inputan yang anda masukkan tidak ada!!!\n");
        system("pause");
        system("cls");
        goto menu1;
    case 3:
        system("cls");
        printf("\n\n- Muhammad Rafly R    |  672022151\n");
        printf("\n- Ardra Taksa U       |  672022209\n");
        printf("\n- Adi Setyo Wenang    |  672022243\n");
        printf("\n- Rezal Ramadhan      |  672022244\n");
        printf("\n- Dio Abin Ramadhani  |  672022280\n\n\n");

    }
}
 void regis()
{

    printf(".: SILAHKAN REGISTRASI :.\n\n");
    printf("\nNAMA     : ");
    scanf("%s",&nama);
    printf("\nPASSWORD : ");
    scanf("%s",&pass);
    strcpy(nama1,nama);
    strcpy(pass1,pass);
    system("cls");
    main();
}


void login()
{
        printf(".: LOGIN :.\n\n");
        printf("\nNAMA     : ");
        scanf("%s",&nama);
        printf("\nPASSWORD : ");

        do{pass[c]=getch();
        if(pass[c]!='\r'){
            printf("*");
        }
        c++;
        }while(pass[c-1]!='\r');
        pass[c-1]='\0';

        a=strcmp(nama1,nama);
        b=strcmp(pass1,pass);
        if(a==0 && b==0){
            printf("\nLogin Anda Berhasil\n");
            tampilmenu();

        }else{
            printf("\nUsername/Password Salah");
            system("pause");
            system("cls");
            login();
 	}

}
void tampilmenu(){
    menu2:
    system("cls");
    int pilihan;
    printf("\n1.Tampil Menu Makanan\n");
    printf("\n2.Total Harga\n");
    printf("\n3.Struk Pembayaran\n");
    printf("\n4.Keluar\n");
    printf("\nINPUT PILIHAN : ");
    scanf("%d",&pilihan);

     switch(pilihan)
    {
        case 1: panggilmenu(); break;
        case 2: Penghitungan(); break;
        case 3: struk(); break;
        default:
            system("cls");
            printf("TERIMAKASIH SUDAH BERBELANJA DI RUMAH MAKAN 'KERE'\n");
            system("pause");
            main ();
    }
}
//Fungsi menu
void panggilmenu (void){
    system("cls");
    makan:

 //menampilkan menu yang dapat dipilih user
    printf("\n                      .:::  RUMAH MAKAN 'KERE'  :::.                      \n");
    printf("\n============================================================================\n");
    printf ("|No.| Makanan \t\t| Harga     |\t\t|No.| Minuman\t | Harga   |\n");
    printf("|---------------------------------------------------------------------------\n");
    printf("| 1 | Magelangan\t|  Rp.12000 |\t\t");
    printf("| 6.| Es Teh\t | Rp.2500 | \n");
    printf("| 2 | Nasi Telur\t|  Rp.7500  |\t\t");
    printf("| 7.| Es Jeruk\t | Rp.2500 |\n");
    printf("| 3 | Nasi Sarden\t|  Rp.8000  |\t\t");
    printf("| 8.| Es Sirup\t | Rp.2000 |\n");
    printf("| 4 | Indomie Goreng\t|  Rp.6500  |\t\t");
    printf("| 9.| Es Sogem\t | Rp.5000 |\n");
    printf("| 5 | Indomie Kuah\t|  Rp.6500  |\t\t");
    printf("| 10| Es Klpa Md | Rp.3500 |\n");
    printf("============================================================================");
    printf("\n ");
    printf("\n99. Kembali Ke Menu Utama\n55. Reset pilihan\n00.  Keluar\n");
    printf("\n============================================================================\n");

 //perulangan untuk user memilih menu sesuai nomor menu
 for (menu.menumakan!=0;menu.menumakan!=99;){

 printf("\nInput pilihan yang Anda inginkan:         "); scanf("%d",&menu.menumakan); //input user dengan scanf
 //switch case pilihan yang akan ditampilkan sesuai nomor
    switch(menu.menumakan) {
    case 1:
            printf("\n [1] Pemesanan Magelangan\n");
            printf("jumlah pesan =\t\t\t  ");scanf("%d",&menu_mak.magelangan);
            printf("\n===============================================\n");
            sub.jmlbeli1=menu_mak.magelangan*12000;
            break;
    case 2:
            printf("\n [2]Pemesanan Nasi Telur\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_mak.nasitelur);
            printf("\n===============================================\n");
            sub.jmlbeli2=menu_mak.nasitelur*7500;
    break;
    case 3:
            printf("\n [3] Pemesanan Nasi Sarden\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_mak.nasisarden);
            printf("\n===============================================\n");
            sub.jmlbeli3=menu_mak.nasisarden*8000;
    break;
    case 4:
            printf("\n [4] Pemesanan Indomie Goreng\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_mak.indomiegoreng);
            printf("\n===============================================\n");
            sub.jmlbeli4=menu_mak.indomiegoreng*6500;
    break;
    case 5:
            printf("\n [5] Pemesanan Indomie Kuah\n ");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_mak.indomiekuah);
            printf("\n===============================================\n");
            sub.jmlbeli5=menu_mak.indomiekuah*6500;
    break;
    case 6:
            printf("\n [6] Pemesanan Es Teh\n ");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.esteh);
            printf("\n===============================================\n");
            sub.jmlbeli6=menu_min.esteh*1500;
    break;
    case 7:
            printf("\n [7] Es Jeruk\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.esjeruk);
            printf("\n===============================================\n");
            sub.jmlbeli7=menu_min.esjeruk*2500;
    break;
    case 8:
            printf("\n [8] Es Sirup\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.essirup);
            printf("\n===============================================\n");
            sub.jmlbeli8=menu_min.essirup*2000;
    break;
    case 9:
            printf("\n [9] Sogem\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.sogem);
            printf("\n===============================================\n");
            sub.jmlbeli9=menu_min.sogem*5000;
    break;
    case 10:
            printf("\n [10] Es Klamud\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_min.esklamud);
            printf("\n===============================================\n");
            sub.jmlbeli10=menu_min.esklamud*2000;
    break;
    case 99:
            tampilmenu();  //memanggil fungsi penghitungan
    break;
    case 55:
            system("cls");  //cls untuk membuat layar menjadi kosong
            panggilmenu();  //me-reset pilihan user
    break;
    case 00:
            peyakinan:
            printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
            printf("Input Pilihan \t\t\t\t");scanf("%s",&yakin);

            if (yakin=='Y'||yakin=='y') //user yakin untuk menutup program
            {
                system("cls");
                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
            system("pause");
            exit(panggilmenu);
            }
            else if (yakin=='T'||yakin=='t')  //user membatalkan penutupan program
            {
                system("cls");
                panggilmenu();
            }
            else  //inputan user bukan Y atau T
            {
                printf("\nKesalahan inputan\n\n");
                system("pause");
                goto peyakinan;
            }

    break;
    default: //bila user menginputkan tidak sesuai pilihan nomor yang ada
        printf("Kesalahan inputan, menu no.%d tidak ada dalam daftar\n",menu.menumakan);
        printf("- Silakan input kembali\n");
    break;

    }

}
}


//Fungsi untuk melakukan perhitungan harga dan jumlah pesanan
void Penghitungan(void)
{
            system("cls");
            printf("\nPesanan Makanan \n");
            printf("\tJumlah | Nama Minuman  | Total Harga\n\t====================================\n");
            printf("\t   %d   : Magelangan       : Rp. %d \n",menu_mak.magelangan, sub.jmlbeli1);
            printf("\t   %d   : Nasi Telur       : Rp. %d \n",menu_mak.nasitelur, sub.jmlbeli2);
            printf("\t   %d   : Nasi Sarden      : Rp. %d \n",menu_mak.nasisarden, sub.jmlbeli3);
            printf("\t   %d   : Indomie Goreng   : Rp. %d \n",menu_mak.indomiegoreng, sub.jmlbeli4);
            printf("\t   %d   : Indomie Kuah     : Rp. %d \n",menu_mak.indomiekuah, sub.jmlbeli5);
            printf("\t------------------------------------\n\n");

            printf("Pesanan Minuman \n");
            printf("\tJumlah | Nama Minuman  | Total Harga\n\t====================================\n");
            printf("\t   %d   : Es Teh        : Rp. %d \n",menu_min.esteh, sub.jmlbeli6);
            printf("\t   %d   : Es Jeruk      : Rp. %d \n",menu_min.esjeruk, sub.jmlbeli7);
            printf("\t   %d   : Es Sirup      : Rp. %d \n",menu_min.essirup, sub.jmlbeli8);
            printf("\t   %d   : Soda Gembira  : Rp. %d \n",menu_min.sogem, sub.jmlbeli9);
            printf("\t   %d   : Kelapa Muda   : Rp. %d \n",menu_min.esklamud, sub.jmlbeli10);
            printf("\t------------------------------------\n");

   //menghitung total harga
            sub.totalharga=sub.jmlbeli1+sub.jmlbeli2+sub.jmlbeli3+sub.jmlbeli4+sub.jmlbeli5+sub.jmlbeli6+sub.jmlbeli7+sub.jmlbeli8+sub.jmlbeli9+sub.jmlbeli10;
            printf("\n===============================\nTotal Harga adalah = Rp.%d,-\n===============================\n",sub.totalharga);

   bayar:
            printf("\nMasukkan uang bayar = ");scanf("%d",&sub.bayar);

            if (sub.bayar>=sub.totalharga)
            {
            sub.kembalian=sub.bayar-sub.totalharga;
            printf("\nKembalian = %d", sub.kembalian);
            }
            else
            {
                printf("Uang Anda tidak cukup! Silakan input ulang\n");

                goto bayar;
            }

   printf("\nTekan Apa Saja Untuk Kembali Ke Menu Utama\n\n\N");
            system("Pause");
            system("cls");
            tampilmenu();
}


//Fungsi untuk menampilkan struk hasil pembelian
void struk(void)
    {
        system("cls");
        printf("\n               .:::  RUMAH MAKAN 'KERE'  :::.                 \n");
        printf("          Jl. Sarirejo No.77 , Bugel, Kota Salatiga            \n\n");
        printf("|_______________________________________________________________|\n");
        printf("| Nama Pesanan  | Harga Satuan  | Jumlah  | \t    Total  \t|\n");
        printf("|===============|===============|=========|=====================|\n");
        if (sub.jmlbeli1>0)
        {
        printf("|    Magelangan\t|     12000\t|    %d\t  |  Rp.%d\t\t|",menu_mak.magelangan,sub.jmlbeli1);
        }
                if (sub.jmlbeli2>0)
        {
        printf("\n|    Nasi Telur\t|     7500\t|    %d\t  |  Rp.%d\t\t|",menu_mak.nasitelur,sub.jmlbeli2);
        }
                if (sub.jmlbeli3>0)
        {
        printf("\n|    Nasi Sarden|     8000\t|    %d\t  |  Rp.%d\t\t|",menu_mak.nasisarden,sub.jmlbeli3);
        }
                if (sub.jmlbeli4>0)
        {
        printf("\n|    Indomie Grg|     6500\t|    %d\t  |  Rp.%d\t\t|",menu_mak.indomiegoreng,sub.jmlbeli4);
        }
                if (sub.jmlbeli5>0)
        {
        printf("\n|    Indomie Kuah\t|     6500\t|    %d\t  |  Rp.%d\t\t|",menu_mak.indomiekuah,sub.jmlbeli5);
        }
                if (sub.jmlbeli6>0)
        {
        printf("\n|    Es Teh\t|     1500\t|    %d\t  |  Rp.%d\t\t|",menu_min.esteh,sub.jmlbeli6);
        }
                if (sub.jmlbeli7>0)
        {
        printf("\n|    Es Jeruk\t|     2500\t|    %d\t  |  Rp.%d\t\t|",menu_min.esjeruk,sub.jmlbeli7);
        }
                if (sub.jmlbeli8>0)
        {
        printf("\n|    Es Sirup\t|     2000\t|    %d\t  |  Rp.%d\t\t|",menu_min.essirup,sub.jmlbeli8);
        }
                if (sub.jmlbeli9>0)
        {
        printf("\n|    Sogem\t|     5000\t|    %d\t  |  Rp.%d\t\t|",menu_min.sogem,sub.jmlbeli9);
        }
                if (sub.jmlbeli10>0)
        {
        printf("\n|    Es Klp Md\t|     3500\t|    %d\t  |  Rp.%d\t\t|",menu_min.esklamud,sub.jmlbeli10);
        }
        printf("\n|_______________________________________________________________|");
        printf("\n| Total Keseluruhan = %d\t\t\t\t\t|", sub.totalharga);
        printf("\n| Uang bayar        = %d\t\t\t\t\t|", sub.bayar);
        printf("\n| Kembalian         = %d\t\t\t\t\t|", sub.kembalian);
        printf("\n|                                                               |");
        printf("\n|                                                               |");
        printf("\n|             --  TERIMA KASIH ATAS KUNJUNGANNYA  --            |");
        printf("\n|                                                               |\n");
        printf("-----------------------------------------------------------------\n");


          printf("\nTekan apa saja untuk kembali ke menu utama\n");
            system("Pause");
            system("cls");
            tampilmenu();


    }
