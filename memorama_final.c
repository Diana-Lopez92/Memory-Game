#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int num[50][50];
int i, j, m, n, k, l, cont=0, calcu, vector[50], vector2[50], aux=0, contv=0, contv2=0;
char array[] = {'!', '¿', '#', '$', '%', '&', '/', '(', ')', '=', '?', '¡', '|', '@', '~', '€', '¬', '^', '[', '*', ']', '+', 'Ç', '{', '}', ':', '-', '_', '<', '>'}, matriz1[60][60], matriz2[60][60], matrizX1[50][50], matrizX2[50][50];
char array2[60][60];
int opcionfila, opcioncolum, opcionfila2, opcioncolum2, intentos=1, intentos2=0, aciertos=0;
int gotoxy(SHORT x, SHORT y);

int TamMatriz()
{
    system("color 8B");
    gotoxy(20,3);
    //SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),32);
    printf("---* Bienvenidos a M E M O R A M A *---");
    gotoxy(10,6);
    printf("Escriba el numero de filas que desea: ");
    scanf("%d", & m);
    gotoxy(10,9);
    printf("Escriba el numero de columnas que desea: ");
    scanf("%d", & n);
    system("CLS");
}

char GenerarMatricesX()
{
    //printf("\n\n");
    gotoxy(20,3);
    printf("---* Bienvenidos a M E M O R A M A *---");
    gotoxy(37,10);
    printf("Matriz 1");
    printf("\n\n");
    printf("\n\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matrizX1[i][j] = 'X';
            printf("\t");
            printf("%c\t", matrizX1[i][j]);

        }



        printf("\n");
    }

    gotoxy(37,17);
    printf("Matriz 2");
    printf("\n\n");
    printf("\n\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matrizX2[i][j] = 'X';
            printf("\t");
            printf("%c\t", matrizX2[i][j]);
        }

        printf("\n");
    }




    printf("\n\n");
    printf("\n\n");
    printf("\n\n");
}

int GenerarNumMatriz1()
{
    calcu=m*n;

    srand(time(0));

    for(i=0;i<calcu;i++)
    {
        int num = rand()% calcu;

        if(i>0)
        {
            for(j=0; j < i; j++)

                if(num==vector[j])
                {
             //num = 1 + rand()%10;
                    num = rand()%calcu;
                    j=-1;
                }
        }

        vector [ i ] =num;

    }



    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matriz1[i][j] = array[vector[contv]];
            contv++;
        }
    }

}


int GenerarNumMatriz2()
{
    getch();

    srand(time(NULL));

    for(i=0;i<calcu;i++)
    {
        int num2 = rand()% calcu;

        if(i>0)
        {
            for(j=0; j < i; j++)

                if(num2==vector2[j])
                {
                    num2 = rand()%calcu;
                    j=-1;
                }


        }

        vector2 [ i ] =num2;

    }


    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matriz2[i][j] = array[vector2[contv2]];
            contv2++;
        }
    }
}



EjecucionJuego()
{
    printf("\n\nComienza el juego: ");
    //printf("\nTienes 10 intentos para ganar!!!");

    do{
        intentos2 = calcu + 5;
        //printf("Intentos : %d", intentos2);
        system("CLS");
        gotoxy(20,3);
        printf("---* Bienvenidos a M E M O R A M A *---");

        //printf("\n\n");
        gotoxy(37,5);
        printf("Matriz 1");
        printf("\n\n");
        printf("\n\n");

        //printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\t");
                printf("%c\t", matrizX1[i][j]);
            }

            printf("\n");
        }


        //printf("\n\n");
        gotoxy(37,12);
        printf("Matriz 2");
        printf("\n\n");
        printf("\n\n");

        //printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\t");
                printf("%c\t", matrizX2[i][j]);
            }

            printf("\n");
        }

        gotoxy(5,20);
        printf("Intento %d", intentos);
        printf("\n \n Introduzca el numero de fila de la carta a destapar de la Matriz 1: ");
        scanf("%d", &opcionfila);
        printf("\n \n Introduce el numero de columna: ");
        scanf("%d", &opcioncolum);




        if(matrizX1[opcionfila-1][opcioncolum-1] != 'X')
        {
            printf("\n \n Esa carta ya se encuentra descubierta. \n Introduzca otro numero de fila de la carta a destapar de la Matriz 1: ");
            scanf("%d", &opcionfila);
            printf("\n \n Introduce el numero de columna: ");
            scanf("%d", &opcioncolum);
            matrizX1[opcionfila-1][opcioncolum-1] = matriz1[opcionfila-1][opcioncolum-1];
        }

         matrizX1[opcionfila-1][opcioncolum-1] = matriz1[opcionfila-1][opcioncolum-1];


        getch();

        system("CLS");
        gotoxy(20,3);
        printf("---* Bienvenidos a M E M O R A M A *---");
        //printf("\n\n");
        gotoxy(37,5);
        printf("Matriz 1");
        printf("\n\n");
        printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\t");
                printf("%c\t", matrizX1[i][j]);
            }

            printf("\n");
        }

        gotoxy(37,12);
        printf("Matriz 2");
        printf("\n\n");
        printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\t");
                printf("%c\t", matrizX2[i][j]);
            }

            printf("\n");
        }


        //printf("\n\n");
        //printf("\n\n");
        printf("\n \n Introduzca el numero de fila de la carta a destapar de la Matriz 2: ");
        scanf("%d", &opcionfila2);
        printf("\n \n Introduce el numero de columna: ");
        scanf("%d", &opcioncolum2);
        intentos++;



        if(matrizX2[opcionfila2-1][opcioncolum2-1] != 'X')
        {
            printf("\n \n Esa carta ya se encuentra descubierta. \n Introduzca otro numero de fila de la carta a destapar de la Matriz 2: ");
            scanf("%d", &opcionfila2);
            printf("\n \n Introduce el numero de columna: ");
            scanf("%d", &opcioncolum2);
            matrizX2[opcionfila2-1][opcioncolum2-1] = matriz2[opcionfila2-1][opcioncolum2-1];
        }

        matrizX2[opcionfila2-1][opcioncolum2-1] = matriz2[opcionfila2-1][opcioncolum2-1];

        getch();
        system("CLS");

        //printf("\n\n");
        gotoxy(20,3);
        printf("---* Bienvenidos a M E M O R A M A *---");
        gotoxy(37,5);
        printf("Matriz 1");
        //printf("\n\n");
        printf("\n\n");
        printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\t");
                printf("%c\t", matrizX1[i][j]);
            }

            printf("\n");
        }


        //printf("\n\n");
        gotoxy(37,12);
        printf("Matriz 2");
        printf("\n\n");
        printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\t");
                printf("%c\t", matrizX2[i][j]);
            }

            printf("\n");
        }


        if( matrizX1[opcionfila-1][opcioncolum-1] != matrizX2[opcionfila2-1][opcioncolum2-1])
        {
            matrizX1[opcionfila-1][opcioncolum-1] = 'X';
            matrizX2[opcionfila2-1][opcioncolum2-1] = 'X';
            printf("\n \n Estas Cartas No son Pares");
        }

        else
        {
            aciertos++;
            printf("\n \n Bien hecho!!!, tienes un par");
        }

        getch();

        system("CLS");

        gotoxy(20,3);
        printf("---* Bienvenidos a M E M O R A M A *---");
        //printf("\n\n");
        gotoxy(37,5);
        printf("Matriz 1");
        printf("\n\n");
        //printf("\n\n");
        printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\t");
                printf("%c\t", matrizX1[i][j]);
            }

            printf("\n");
        }


        //printf("\n\n");
        gotoxy(37,12);
        printf("Matriz 2");
        printf("\n\n");
        //printf("\n\n");
        printf("\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\t");
                printf("%c\t", matrizX2[i][j]);
            }

            printf("\n");
        }

        if(aciertos == calcu)
        {
            gotoxy(20,20);
            printf("Felicidades has ganado en %d intentos!!!", intentos);
            break;
        }

    }while(intentos<=intentos2);
    gotoxy(20,25);
    printf("Juego Terminado, vuelve a intentarlo");


    getch();
}

int gotoxy(SHORT x, SHORT y)
{
   COORD coord;
   CONSOLE_SCREEN_BUFFER_INFO csb;
   HANDLE h_stdout;

   if ((h_stdout = GetStdHandle(STD_OUTPUT_HANDLE)) == INVALID_HANDLE_VALUE)
      return 0;
   if (GetConsoleScreenBufferInfo(h_stdout, &csb) == 0)
      return 0;

   x--;
   y--;
   if (x < csb.srWindow.Left || x > csb.srWindow.Right)
      return 0;
   if (y < csb.srWindow.Top || y > csb.srWindow.Bottom)
      return 0;

   coord.X = x;
   coord.Y = y;
   if (SetConsoleCursorPosition(h_stdout, coord) == 0)
      return 0;

   return 1;
}

/*full_src()
{
   typedef UINT (CALLBACK* SCDM)(void*,DWORD,COORD*);
   SCDM SetConsoleDisplayMode;

   COORD coord;
   coord.X=100;
   coord.Y=100;
   HMODULE lib=LoadLibrary("kernel32.dll");
   SetConsoleDisplayMode = (SCDM)GetProcAddress(lib,"SetConsoleDisplayMode");
   SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE),1,&coord);

}*/




main()
{
    //full_src();
    TamMatriz();
    GenerarMatricesX();
    GenerarNumMatriz1();
    GenerarNumMatriz2();
    EjecucionJuego();

    getch();
}
