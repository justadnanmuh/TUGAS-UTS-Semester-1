#include<stdio.h>

void main ()
{
    cover();
}


void cover ()
 {

   char w;
    printf(" ______________________________________________________________________________\n");
    printf(" ==============================================================================\n");
    printf("              \t\t  --- UTS  SEMESTER 1---              \n");
    printf(" ______________________________________________________________________________\n");
    printf(" ==============================================================================\n");
    printf(" \n\n");
    printf("                 -MENENTUKAN NILAI PERSAMAAN KUADRAT-              \n\n\n \n");
    printf(" \t\t\t\t Di Susun Oleh : \n\n");
    printf(" \t\t\t\t  Nama  : Muhammad Adnan\n ");
    printf(" \t\t\t\t  Nim   : D400160004\n ");
    printf(" \t\t\t\t  Kelas : A \n\n\n\n\n");
    printf(" ______________________________________________________________________________\n");
     printf(" ==============================================================================   \n");
    printf("                             JURUSAN TEKNIK ELEKTRO                               \n");
    printf("                                 FAKULTAS TEKNIK                                  \n");
    printf("                       UNIVERSITAS MUHAMMADIYAH SURAKARTA                         \n");
    printf("                                      2016                                       \n");
    printf(" ______________________*************________*************______________________\n");
    printf(" ==============================================================================\n\n\n");
    loop7:
    printf(" tekan (1) untuk melanjutkan program \n");
    printf(" tekan (2) untuk keluar program \n");
    printf(" silahkan pilih : [1/2]  ");
    scanf ("%d",&w);
    if (w>2)
            {
                    printf("\t\t\t kode salah!\n\n");
                    goto loop7;
            }
            if (w==1)
            {
                program ();
            }
            if (w==2)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);

            }
    }



void program ()
{


    int a,b,c,D;
    int  x1,x2;
    system (" cls");

    printf(" ______________________________________________________________________________\n");
    printf(" ==============================================================================\n");
    printf(" \t\t\t\t-- SELAMAT DATANG --                         \n");
    printf("          --  PROGRAM PERHITUNGAN PERSAMAAN KUADRAT  --         \n\n");
    printf(" ______________________________________________________________________________\n\n\n");

    printf("\n Masukkan nilai A=  ");
    scanf("%f",&a);
    printf("\n Masukkan nilai B=  ");
    scanf("%f",&b);
    printf("\n Masukkan nilai C=  ");
    scanf("%f",&c);
 D =pow(b,2)-(4*a*c);
     if  ( a==0 )
   {
        printf( " X1 dan X2 Bukan persamaan Kuadrad \n ");
   }
    else if(D<0)
    {
        printf("\n X1 dan X2 Bilangan imajiner\n");
    }

    else if (D==0)
    {
        x1=(-b)/(2*a);
        x2=(-b)/(2*a);

        printf("\n Akar-akar persamaan kuadrat kembar ");
        printf("\nNilai x1=%d\n", x1);
        printf("Nilai x2=%d\n", x2);

    }

    else if (D>0)
    {
        x1=(-b+(sqrt(D))/(2*a));
        x2=(-b-(sqrt(D))/(2*a));

        printf("\n Mempunyai dua akar yang bernilai  yaitu X1 dan X2 \n");
        printf("\n Nilai x1=%d \n",x1);
        printf("\n Nilai x2=%d\n",x2);    }

{
    printf("\n\n\n\n");
ulang ();
}
}



void ulang()
    {
        char yn;
        scanf("%c", &yn);
        {
            switch (yn)
            {
                case 'y' : program(); break;
                case 'Y' : program(); break;
                case 'n' : system("cls"); printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);
                case 'N' : system("cls"); printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);
                default : {  printf("   Kembali ke menu utama? [y/n] : ");  ulang();  }
            }
        }
}
