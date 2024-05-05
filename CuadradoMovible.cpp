#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {

    char cuadrado[2][2] = {
        {'*', '*'},
        {'*', '*'},

    };
    int x = 0, y = 0, direccion, actual=1;
    
    while (actual) {
        system("cls");

        for (int f = 0; f < 2; f++) {
            for (int c = 0; c < 2; c++) {
                gotoxy(x + c, y + f);
                printf("%c ", cuadrado[f][c]);
            }
            
        }

        
        direccion = getchar();

        switch (direccion)
        {

            switch (direccion)
        case 'a':
            x--;
            break;
        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        case 'd':
            x++;
            break;
        case 'q':
            actual = 0;
            break;

        }
    }

              
    return 0;
    }
    
