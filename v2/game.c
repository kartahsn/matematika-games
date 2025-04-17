#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#define bg "===================================================================================\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   |\t\t\t\t\t\t\t\t\t\t     |\n\t\t   ===================================================================================\n"
#define headers "Karta Sasmita"

int i, nt=0, nt2=0, nt3=0, uang;
char name[20],game[10],header[13];
FILE *money, *user;
void loading();
void winner();
void main() //main program
{

        int menu, level;
        int t, b1, b2, b3, number, guest, jawab;
        money=fopen("dbp.db","r");
        user=fopen("dbu.db","r");
        gotoxy(20,5); printf("%s ", bg);
        gotoxy(46,6); printf("|\t\t\t\t     |");
        gotoxy(90,4); printf("Game simulasi");
        gotoxy(46,7); printf("=================================");
        gotoxy(54,6); printf("GAMES MATEMATIKA");
        gotoxy(20,4); printf("Created by "); printf("%s", headers);
        gotoxy(28,11);printf("[ PERHATIAN ] Silahkan Ganti Nama kalian dibagian (registrasi.txt)");
        for(i=5;i>=1;i--)
        {
                gotoxy(92,16); printf("LOADING %d", i);
                Sleep(1000);
        }
        system("cls");
        gotoxy(20,5); printf("%s ", bg);
        gotoxy(46,6); printf("|\t\t\t\t     |");
        gotoxy(90,4); printf("Game simulasi");
        gotoxy(46,7); printf("=================================");
        gotoxy(54,6); printf("GAMES MATEMATIKA");
        gotoxy(20,4); printf("Created by "); printf("%s", headers);
        gotoxy(30,9); printf("Kamu suka matematika? yok main game ini dijamin kamu akan senang");
        gotoxy(32,10); printf("Kumpulkan UANG sebanyak mungkin sampai ambang batas penarikan");
        gotoxy(28,12); printf("[PERHATIAN] menu penarikan akan tampil apabila ambang batas terpenuhi");
        gotoxy(51,16); printf("Tekan enter untuk mulai");
        getch();
        system("cls");
        gotoxy(20,5); printf("%s",bg);
        gotoxy(46,6); printf("|\t\t\t\t     |");
        gotoxy(46,7); printf("=================================");
        gotoxy(54,6); printf("GAMES MATEMATIKA");
        gotoxy(20,4); printf("Created by "); printf("%s", headers);
        if(user==NULL)
        {
                gotoxy(50,11);printf("Anda belum memiliki akun");
                gotoxy(48,12);printf("enter untuk membuat akun baru");
                getch();
                system("cls");
                gotoxy(20,5); printf("%s",bg);
                gotoxy(46,6); printf("|\t\t\t\t     |");
                gotoxy(46,7); printf("=================================");
                gotoxy(54,6); printf("GAMES MATEMATIKA");
                gotoxy(20,4); printf("Created by "); printf("%s", headers);
                gotoxy(54,8); printf("MEMBUAT AKUN BARU");
                gotoxy(45,13);printf("Masukan nama kamu : "); gets(name);
                user=fopen("dbu.db","w");
                fprintf(user,"%s",name);
                uang=uang*0;
                money=fopen("dbp.db","w");
        }
        system("cls");
        gotoxy(20,5); printf("%s",bg);
        fgets(name, 20, user);
        gotoxy(46,6); printf("|\t\t\t\t     |");
        gotoxy(46,7); printf("=================================");
        gotoxy(54,6); printf("GAMES MATEMATIKA");
        gotoxy(20,4); printf("Created by "); printf("%s", headers);
        gotoxy(55,11);printf("Hai %s ", name); Sleep(2000);


        //pilihan level
        level:
                system("cls");
                gotoxy(20,5); printf("%s", bg);
                gotoxy(46,6); printf("|\t\t\t\t     |");
                gotoxy(46,7); printf("=================================");
                gotoxy(54,6); printf("GAMES MATEMATIKA");
                gotoxy(20,4); printf("Created by "); printf("%s", headers);
                gotoxy(57,10); printf("1. easy\n\t\t\t\t\t\t\t2. medium\n\t\t\t\t\t\t\t3. hard\n\n\t\t\t\t\t\t\tMENU :");
                scanf("%d", &level);
                if (level==1)
                        {
                        strcpy(game,"easy");
                        //pilihan type
                        menu:
                                system("cls");
                                gotoxy(20,5); printf("%s",bg);
                                gotoxy(46,6); printf("|\t\t\t\t     |");
                                gotoxy(46,7); printf("=================================");
                                gotoxy(54,6); printf("GAMES MATEMATIKA");
                                gotoxy(20,4); printf("Created by "); printf("%s", headers);
                                gotoxy(57,10); printf("1. penjumlahan\n\t\t\t\t\t\t\t2. pengurangan\n\t\t\t\t\t\t\t3. perkalian\n\n\t\t\t\t\t\t\tMENU :", header);
                                scanf("%d", &menu);
                                if (menu==1)
                                        {
                                        loading();
                                        for(t=1;t<=10;t++)
                                                {
                                                system("cls");
                                                randomize();
                                                fscanf(money, "%d", &uang);
                                                gotoxy(20,5); printf("%s",bg);
                                                gotoxy(20,4); printf("SOAL :%d/10 \t\t\t      POINT ANDA :%d \t\t\tLEVEL   :%s\n", t, nt, game);
                                                gotoxy(20,18); printf("Uangku Rp%d",uang);
                                                number=random(500);
                                                guest=random(500);
                                                gotoxy(52,8); printf("jumlah dari %d + %d\n\t\t\t\t\t      -----------------------------", number, guest);
                                                gotoxy(52,12); printf("Masukan Jawaban : "); scanf("%d", &jawab);
                                                if(jawab==number+guest)
                                                        {
                                                        uang=uang+3;
                                                        money=fopen("dbp.db","w");
                                                        fprintf(money,"%d",uang);
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        gotoxy(59,16); printf("BENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        gotoxy(59,16); printf("SALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                                if(nt<0)
                                                {
                                                        nt=0;
                                                }
                                        }
                                        winner();
                                }


                                else if(menu==2)
                                {
                                        loading();
                                        for(t=1;t<=10;t++)
                                        {
                                                system("cls");
                                                randomize();
                                                fscanf(money, "%d", &uang);
                                                gotoxy(20,5); printf("%s",bg);
                                                gotoxy(20,4); printf("SOAL :%d/10 \t\t\t      POINT ANDA :%d \t\t\tLEVEL   :%s\n", t, nt, game);
                                                gotoxy(20,18); printf("Uangku Rp%d",uang);
                                                number=random(500);
                                                guest=random(500);
                                                gotoxy(52,8); printf("jumlah dari %d - %d\n\t\t\t\t\t      -----------------------------", number, guest);
                                                gotoxy(52,12); printf("Masukan Jawaban : "); scanf("%d", &jawab);
                                                if(jawab==number-guest)
                                                        {
                                                        uang=uang+3;
                                                        money=fopen("dbp.db","w");
                                                        fprintf(money,"%d",uang);
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        gotoxy(59,16); printf("BENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        gotoxy(59,16); printf("SALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                                if(nt<0)
                                                {
                                                        nt=0;
                                                }
                                        }
                                        winner();
                                }


                                else if(menu==3)
                                {
                                        loading();
                                        for(t=1;t<=10;t++)
                                        {
                                                system("cls");
                                                randomize();
                                                fscanf(money, "%d", &uang);
                                                gotoxy(20,5); printf("%s",bg);
                                                gotoxy(20,4); printf("SOAL :%d/10 \t\t\t      POINT ANDA :%d \t\t\tLEVEL   :%s\n", t, nt, game);
                                                gotoxy(20,18); printf("Uangku Rp%d",uang);
                                                number=random(10);
                                                guest=random(10);
                                                gotoxy(52,8); printf("jumlah dari %d x %d\n\t\t\t\t\t      -----------------------------", number, guest);
                                                gotoxy(52,12); printf("Masukan Jawaban : "); scanf("%d", &jawab);
                                                if(jawab==number*guest)
                                                        {
                                                        uang=uang+15;
                                                        money=fopen("dbp.db","w");
                                                        fprintf(money,"%d",uang);
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        gotoxy(59,16); printf("BENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        gotoxy(59,16); printf("SALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                                if(nt<0)
                                                {
                                                        nt=0;
                                                }
                                        }
                                        winner();
                                }


                                else    {
                                                gotoxy(47,16); printf("maaf anda salah memasukan menu"); Sleep(3000);goto menu;
                                        }

                        }
                else if(level==2)
                        {
                        strcpy(game,"medium");
                        //pilihan type
                        menu2:
                                system("cls");
                                gotoxy(20,5); printf("%s",bg);
                                gotoxy(46,6); printf("|\t\t\t\t     |");
                                gotoxy(46,7); printf("=================================");
                                gotoxy(54,6); printf("GAMES MATEMATIKA");
                                gotoxy(20,4); printf("Created by "); printf("%s", headers);
                                gotoxy(57,10); printf("1. penjumlahan\n\t\t\t\t\t\t\t2. pengurangan\n\t\t\t\t\t\t\t3. perkalian\n\n\t\t\t\t\t\t\tMENU :", header);
                                scanf("%d", &menu);
                                if (menu==1)
                                        {
                                        loading();
                                        for(t=1;t<=10;t++)
                                                {
                                                system("cls");
                                                randomize();
                                                fscanf(money, "%d", &uang);
                                                gotoxy(20,5); printf("%s",bg);
                                                gotoxy(20,4); printf("SOAL :%d/10 \t\t\t      POINT ANDA :%d \t\t\tLEVEL   :%s\n", t, nt, game);
                                                gotoxy(20,18); printf("Uangku Rp%d",uang);
                                                number=random(1000);
                                                guest=random(1000);
                                                gotoxy(52,8); printf("jumlah dari %d + %d\n\t\t\t\t\t      -----------------------------", number, guest);
                                                gotoxy(52,12); printf("Masukan Jawaban : "); scanf("%d", &jawab);
                                                if(jawab==number+guest)
                                                        {
                                                        uang=uang+10;
                                                        money=fopen("dbp.db","w");
                                                        fprintf(money,"%d",uang);
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        gotoxy(59,16); printf("BENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        gotoxy(59,16); printf("SALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                                if(nt<0)
                                                {
                                                        nt=0;
                                                }
                                        }
                                        winner();
                                }


                                else if(menu==2)
                                {
                                        loading();
                                        for(t=1;t<=10;t++)
                                        {
                                                system("cls");
                                                randomize();
                                                fscanf(money, "%d", &uang);
                                                gotoxy(20,5); printf("%s",bg);
                                                gotoxy(20,4); printf("SOAL :%d/10 \t\t\t      POINT ANDA :%d \t\t\tLEVEL   :%s\n", t, nt, game);
                                                gotoxy(20,18); printf("Uangku Rp%d",uang);
                                                number=random(1000);
                                                guest=random(1000);
                                                gotoxy(52,8); printf("jumlah dari %d - %d\n\t\t\t\t\t      -----------------------------", number, guest);
                                                gotoxy(52,12); printf("Masukan Jawaban : "); scanf("%d", &jawab);
                                                if(jawab==number-guest)
                                                        {
                                                        uang=uang+10;
                                                        money=fopen("dbp.db","w");
                                                        fprintf(money,"%d",uang);
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        gotoxy(59,16); printf("BENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        gotoxy(59,16); printf("SALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                                if(nt<0)
                                                {
                                                        nt=0;
                                                }
                                        }
                                        winner();
                                }


                                else if(menu==3)
                                {
                                        loading();
                                        for(t=1;t<=10;t++)
                                        {
                                                system("cls");
                                                randomize();
                                                fscanf(money, "%d", &uang);
                                                gotoxy(20,5); printf("%s",bg);
                                                gotoxy(20,4); printf("SOAL :%d/10 \t\t\t      POINT ANDA :%d \t\t\tLEVEL   :%s\n", t, nt, game);
                                                gotoxy(20,18); printf("Uangku Rp%d",uang);
                                                number=random(100);
                                                guest=random(10);
                                                gotoxy(52,8); printf("jumlah dari %d x %d\n\t\t\t\t\t      -----------------------------", number, guest);
                                                gotoxy(52,12); printf("Masukan Jawaban : "); scanf("%d", &jawab);
                                                if(jawab==number*guest)
                                                        {
                                                        uang=uang+25;
                                                        money=fopen("dbp.db","w");
                                                        fprintf(money,"%d",uang);
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        gotoxy(59,16); printf("BENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        gotoxy(59,16); printf("SALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                                if(nt<0)
                                                {
                                                        nt=0;
                                                }
                                        }
                                        winner();
                                }


                                else    {
                                                gotoxy(47,16); printf("maaf anda salah memasukan menu"); Sleep(3000);goto menu2;
                                        }

                        }


                else if(level==3)
                        {
                        strcpy(game,"hard");
                        //pilihan type
                        menu3:
                                system("cls");
                                gotoxy(20,5); printf("%s",bg);
                                gotoxy(46,6); printf("|\t\t\t\t     |");
                                gotoxy(46,7); printf("=================================");
                                gotoxy(54,6); printf("GAMES MATEMATIKA");
                                gotoxy(20,4); printf("Created by "); printf("%s", headers);
                                gotoxy(57,10); printf("1. penjumlahan\n\t\t\t\t\t\t\t2. pengurangan\n\t\t\t\t\t\t\t3. perkalian\n\n\t\t\t\t\t\t\tMENU :", header);
                                scanf("%d", &menu);
                                if (menu==1)
                                        {
                                        loading();
                                        for(t=1;t<=10;t++)
                                                {
                                                system("cls");
                                                randomize();
                                                fscanf(money, "%d", &uang);
                                                gotoxy(20,5); printf("%s",bg);
                                                gotoxy(20,4); printf("SOAL :%d/10 \t\t\t      POINT ANDA :%d \t\t\tLEVEL   :%s\n", t, nt, game);
                                                gotoxy(20,18); printf("Uangku Rp%d",uang);
                                                number=random(10000);
                                                guest=random(1000);
                                                gotoxy(52,8); printf("jumlah dari %d + %d\n\t\t\t\t\t      -----------------------------", number, guest);
                                                gotoxy(52,12); printf("Masukan Jawaban : "); scanf("%d", &jawab);
                                                if(jawab==number+guest)
                                                        {
                                                        uang=uang+20;
                                                        money=fopen("dbp.db","w");
                                                        fprintf(money,"%d",uang);
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        gotoxy(59,16); printf("BENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        gotoxy(59,16); printf("SALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                                if(nt<0)
                                                {
                                                        nt=0;
                                                }
                                        }
                                        winner();
                                }


                                else if(menu==2)
                                {
                                        loading();
                                        for(t=1;t<=10;t++)
                                        {
                                                system("cls");
                                                randomize();
                                                fscanf(money, "%d", &uang);
                                                gotoxy(20,5); printf("%s",bg);
                                                gotoxy(20,4); printf("SOAL :%d/10 \t\t\t      POINT ANDA :%d \t\t\tLEVEL   :%s\n", t, nt, game);
                                                gotoxy(20,18); printf("Uangku Rp%d",uang);
                                                number=random(10000);
                                                guest=random(10000);
                                                gotoxy(52,8); printf("jumlah dari %d - %d\n\t\t\t\t\t      -----------------------------", number, guest);
                                                gotoxy(52,12); printf("Masukan Jawaban : "); scanf("%d", &jawab);
                                                if(jawab==number-guest)
                                                        {
                                                        uang=uang+20;
                                                        money=fopen("dbp.db","w");
                                                        fprintf(money,"%d",uang);
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        gotoxy(59,16); printf("BENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        gotoxy(59,16); printf("SALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                                if(nt<0)
                                                {
                                                        nt=0;
                                                }
                                        }
                                        winner();
                                }


                                else if(menu==3)
                                {
                                        loading();
                                        for(t=1;t<=10;t++)
                                        {
                                                system("cls");
                                                randomize();
                                                fscanf(money, "%d", &uang);
                                                gotoxy(20,5); printf("%s",bg);
                                                gotoxy(20,4); printf("SOAL :%d/10 \t\t\t      POINT ANDA :%d \t\t\tLEVEL   :%s\n", t, nt, game);
                                                gotoxy(20,18); printf("Uangku Rp%d",uang);
                                                number=random(500);
                                                guest=random(100);
                                                gotoxy(52,8); printf("jumlah dari %d x %d\n\t\t\t\t\t      -----------------------------", number, guest);
                                                gotoxy(52,12); printf("Masukan Jawaban : "); scanf("%d", &jawab);
                                                if(jawab==number*guest)
                                                        {
                                                        uang=uang+50;
                                                        money=fopen("dbp.db","w");
                                                        fprintf(money,"%d",uang);
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        gotoxy(59,16); printf("BENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        gotoxy(59,16); printf("SALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                                if(nt<0)
                                                {
                                                        nt=0;
                                                }
                                        }
                                        winner();
                                }


                                else    {
                                                gotoxy(47,16); printf("maaf anda salah memasukan menu"); Sleep(3000);goto menu3;
                                        }

                        }


                else    {
                        gotoxy(47,16); printf("maaf anda salah memasukan menu"); Sleep(3000);goto level;
                        }
                fclose(money);
                fclose(user);
}

void winner()
{
        int wd;
                system("cls");
                winner:
                gotoxy(20,5); printf("%s",bg);
                gotoxy(46,6); printf("|\t\t\t\t     |");
                gotoxy(46,7); printf("=================================");
                gotoxy(54,6); printf("GAMES MATEMATIKA");
                gotoxy(20,4); printf("Created by "); printf("%s", headers);
                gotoxy(40,9); printf("Nama\t\t: %s", name);
                gotoxy(40,10); printf("Saldo\t\t: Rp%d / Rp50.000", uang);
                gotoxy(40,11); printf("GAME LEVEL\t: %s", game);
                gotoxy(40,12); printf("POINT ANDA\t: %d\n", nt);
                gotoxy(40,13); printf("BENAR \t\t: %d\n",nt3);
                gotoxy(40,14); printf("SALAH \t\t: %d\n\n",nt2);
                if (nt>=70)
                {
                        gotoxy(55,16); printf("<<< YOU WINNER >>>");
                        Sleep(5000);
                }
                else
                {
                        gotoxy(56,16); printf("<<< YOU LOSE >>>");
                        Sleep(5000);
                }
                system("cls");
                gotoxy(20,5); printf("%s",bg);
                gotoxy(46,6); printf("|\t\t\t\t     |");
                gotoxy(46,7); printf("=================================");
                gotoxy(54,6); printf("GAMES MATEMATIKA");
                gotoxy(20,4); printf("Created by "); printf("%s", headers);
                gotoxy(38,11); printf("Saldo Terpenuhi\t: Rp%d / Rp50.000", uang); Sleep(5000);
                if(uang>=50000)
                {
                        system("cls");
                        gotoxy(20,5); printf("%s",bg);
                        gotoxy(46,6); printf("|\t\t\t\t     |");
                        gotoxy(46,7); printf("=================================");
                        gotoxy(54,6); printf("GAMES MATEMATIKA");
                        gotoxy(20,4); printf("Created by "); printf("%s", headers);
                        gotoxy(50,10); printf("1. Lakukan penarikan sekarang");
                        gotoxy(50,11); printf("2. Main lagi");
                        gotoxy(50,12); printf("3. Keluar");
                        gotoxy(50,13); printf("MENU : "); scanf("%d", &wd);
                        if(wd==1)
                        {
                                system("cls");
                                system("cls");
                                gotoxy(20,5); printf("%s",bg);
                                gotoxy(46,6); printf("|\t\t\t\t     |");
                                gotoxy(46,7); printf("=================================");
                                gotoxy(54,6); printf("GAMES MATEMATIKA");
                                gotoxy(20,4); printf("Created by "); printf("%s", headers);
                                gotoxy(45,10); printf("Masukan no HP yang akan diisi pulsa");
                                uang=uang-50000;
                                money=fopen("dbp.db","w");
                                fprintf(money,"%d",uang);
                                gotoxy(55,11); printf("[+62____________]");
                                gotoxy(59,11); scanf("%d", &i);
                                gotoxy(45,13); printf("Penarikan diproses...dan akan keluar");
                                Sleep(5000); exit(0);
                        }
                        else if (wd==2)
                        {
                                main();
                        }
                        else
                        {
                                exit(0);
                        }
                }
                system("cls");
                gotoxy(20,5); printf("%s",bg);
                gotoxy(46,6); printf("|\t\t\t\t     |");
                gotoxy(46,7); printf("=================================");
                gotoxy(54,6); printf("GAMES MATEMATIKA");
                gotoxy(20,4); printf("Created by "); printf("%s", headers);
                gotoxy(45,11); printf("Ingin bermain lagi ? [y/n]"); i=getche();
                if(i=='y'||i=='Y')
                {
                        system("cls");
                        main();
                }
                else
                {
                        exit(0);
                }
}

void loading()
{
        system("cls");
        for(i=3;i>=1;i--)
        {
                gotoxy(20,5); printf("%s",bg);
                gotoxy(46,6); printf("|\t\t\t\t     |");
                gotoxy(46,7); printf("=================================");
                gotoxy(54,6); printf("GAMES MATEMATIKA");
                gotoxy(20,4); printf("Created by ");printf("%s", headers);
                gotoxy(57,11); printf("BERSIAP %d", i); Sleep(800); system("cls");
        }
        gotoxy(20,5); printf("%s",bg);
        gotoxy(46,6); printf("|\t\t\t\t     |");
        gotoxy(46,7); printf("=================================");
        gotoxy(54,6); printf("GAMES MATEMATIKA");
        gotoxy(20,4); printf("Created by "); printf("%s", headers);
        gotoxy(60,11); printf("GO!"); Sleep(1000);
}
