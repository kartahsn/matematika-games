#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#define header "=================================\n|\tGAMES MATEMATIKA\t|\n================================="
#define headers "Karta Sasmita"

int i, nt=0, nt2=0, nt3=0;
char name[20],game[10];
void loading();
void winner();
void main() //main program
{

        int menu, level;
        int t, b1, b2, b3, number, guest, jawab;
        printf("%s\n[+] created by ", header);
        printf("%s", headers);
        printf("  [+]\n[+] Hargai karya saya         [+]\n=================================");
        printf("\n\n\nBermainlah secara serius\njangan asal jawab\n\nTekan Enter Untuk Mulai");
        getch();
        system("cls");
        printf("Masukan nama kamu : "); gets(name);

        //pilihan level
        level:
                system("cls");
                printf("%s\n\t1. easy\n\t2. medium\n\t3. hard\n\n\tMENU :", header);
                scanf("%d", &level);
                if (level==1)
                        {
                        strcpy(game,"easy");
                        //pilihan type
                        menu:
                                system("cls");
                                printf("%s\n\t1. penjumlahan\n\t2. pengurangan\n\t3. perkalian\n\n\tMENU :", header);
                                scanf("%d", &menu);
                                if (menu==1)
                                        {
                                        loading();
                                        for(t=1;t<=10;t++)
                                                {
                                                system("cls");
                                                randomize();
                                                printf("SOAL \t\t:%d/10\nPOINT ANDA \t:%d\nLEVEL\t\t:%s\n==============================\n", t, nt, game);
                                                number=random(100);
                                                guest=random(100);
                                                printf("jumlah dari %d + %d", number, guest);
                                                printf("\n\nMasukan Jawaban : ");scanf("%d", &jawab);
                                                if(jawab==number+guest)
                                                        {
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        printf("\nBENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        printf("\nSALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
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
                                                printf("SOAL \t\t:%d/10\nPOINT ANDA \t:%d\nLEVEL\t\t:%s\n==============================\n", t, nt, game);
                                                number=random(100);
                                                guest=random(50);
                                                printf("jumlah dari %d - %d", number, guest);
                                                printf("\n\nMasukan Jawaban : ");scanf("%d", &jawab);
                                                if(jawab==number-guest)
                                                        {
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        printf("\nBENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        printf("\nSALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
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
                                                printf("SOAL \t\t:%d/10\nPOINT ANDA \t:%d\nLEVEL\t\t:%s\n==============================\n", t, nt, game);
                                                number=random(10);
                                                guest=random(10);
                                                printf("jumlah dari %d x %d", number, guest);
                                                printf("\n\nMasukan Jawaban : ");scanf("%d", &jawab);
                                                if(jawab==number*guest)
                                                        {
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        printf("\nBENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        printf("\nSALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                        }
                                        winner();
                                }


                                else    {
                                                printf("maaf anda salah memasukan menu"); Sleep(3000);goto menu;
                                        }

                        }
                else if(level==2)
                        {
                        strcpy(game,"medium");
                        //pilihan type
                        menu2:
                                system("cls");
                                printf("%s\n\t1. penjumlahan\n\t2. pengurangan\n\t3. perkalian\n\n\tMENU :", header);
                                scanf("%d", &menu);
                                if (menu==1)
                                        {
                                        loading();
                                        for(t=1;t<=10;t++)
                                                {
                                                system("cls");
                                                randomize();
                                                printf("SOAL \t\t:%d/10\nPOINT ANDA \t:%d\nLEVEL\t\t:%s\n==============================\n", t, nt, game);
                                                number=random(500);
                                                guest=random(500);
                                                printf("jumlah dari %d + %d", number, guest);
                                                printf("\n\nMasukan Jawaban : ");scanf("%d", &jawab);
                                                if(jawab==number+guest)
                                                        {
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        printf("\nBENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        printf("\nSALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
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
                                                printf("SOAL \t\t:%d/10\nPOINT ANDA \t:%d\nLEVEL\t\t:%s\n==============================\n", t, nt, game);
                                                number=random(500);
                                                guest=random(250);
                                                printf("jumlah dari %d - %d", number, guest);
                                                printf("\n\nMasukan Jawaban : ");scanf("%d", &jawab);
                                                if(jawab==number-guest)
                                                        {
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        printf("\nBENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        printf("\nSALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
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
                                                printf("SOAL \t\t:%d/10\nPOINT ANDA \t:%d\nLEVEL\t\t:%s\n==============================\n", t, nt, game);
                                                number=random(100);
                                                guest=random(10);
                                                printf("jumlah dari %d x %d", number, guest);
                                                printf("\n\nMasukan Jawaban : ");scanf("%d", &jawab);
                                                if(jawab==number*guest)
                                                        {
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        printf("\nBENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        printf("\nSALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                        }
                                        winner();
                                }


                                else    {
                                                printf("maaf anda salah memasukan menu"); Sleep(3000);goto menu2;
                                        }

                        }


                else if(level==3)
                        {
                        strcpy(game,"hard");
                        //pilihan type
                        menu3:
                                system("cls");
                                printf("%s\n\t1. penjumlahan\n\t2. pengurangan\n\t3. perkalian\n\n\tMENU :", header);
                                scanf("%d", &menu);
                                if (menu==1)
                                        {
                                        loading();
                                        for(t=1;t<=10;t++)
                                                {
                                                system("cls");
                                                randomize();
                                                printf("SOAL \t\t:%d/10\nPOINT ANDA \t:%d\nLEVEL\t\t:%s\n==============================\n", t, nt, game);
                                                number=random(1000);
                                                guest=random(1000);
                                                printf("jumlah dari %d + %d", number, guest);
                                                printf("\n\nMasukan Jawaban : ");scanf("%d", &jawab);
                                                if(jawab==number+guest)
                                                        {
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        printf("\nBENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        printf("\nSALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
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
                                                printf("SOAL \t\t:%d/10\nPOINT ANDA \t:%d\nLEVEL\t\t:%s\n==============================\n", t, nt, game);
                                                number=random(1000);
                                                guest=random(500);
                                                printf("jumlah dari %d - %d", number, guest);
                                                printf("\n\nMasukan Jawaban : ");scanf("%d", &jawab);
                                                if(jawab==number-guest)
                                                        {
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        printf("\nBENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        printf("\nSALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
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
                                                printf("SOAL \t\t:%d/10\nPOINT ANDA \t:%d\nLEVEL\t\t:%s\n==============================\n", t, nt, game);
                                                number=random(500);
                                                guest=random(100);
                                                printf("jumlah dari %d x %d", number, guest);
                                                printf("\n\nMasukan Jawaban : ");scanf("%d", &jawab);
                                                if(jawab==number*guest)
                                                        {
                                                        b1=10;
                                                        b3=1;
                                                        nt3=b3+nt3;
                                                        printf("\nBENAR");
                                                        Sleep(2000);
                                                        }
                                                else    {
                                                        b1=-5;
                                                        b2=1;
                                                        nt2=b2+nt2;
                                                        printf("\nSALAH");
                                                        Sleep(2000);
                                                        }

                                                nt=b1+nt;
                                        }
                                        winner();
                                }


                                else    {
                                                printf("maaf anda salah memasukan menu"); Sleep(3000);goto menu3;
                                        }

                        }


                else    {
                        printf("maaf anda salah memasukan menu"); Sleep(3000);goto level;
                        }
}

void winner()
{
                system("cls");
                winner:
                printf("GAME LEVEL\t: %s\nPOINT ANDA\t: %d\n",game, nt);
                printf("BENAR \t\t: %d\n",nt3);
                printf("SALAH \t\t: %d\n\n",nt2);
                if (nt>=70)
                        {
                        printf("Waahhh %s\n\n<<< YOU WINNER ", name);
                        for(i=1;i<=3;i++)
                                {
                                        printf(">"); Sleep(250);
                                }
                        system("cls");
                        goto winner;

                        }
                else    {
                        printf("Yaahhh %s\n\n<<< YOU LOSE ", name);
                        for(i=1;i<=3;i++)
                                {
                                        printf(">"); Sleep(250);
                                }
                        system("cls");
                        goto winner;

                        }
}

void loading()
{
        system("cls");
        for(i=3;i>=0;i--)
        {
                printf("%s\nBERSIAP %d", header, i); Sleep(800); system("cls");
        }
}

