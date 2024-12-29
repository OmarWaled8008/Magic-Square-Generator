#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

COORD coord;

// Function to move the console cursor to specified coordinates
void gotoxy(int x, int y) {
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int flag = 1;
    while (flag) {
        int ms;
        printf("Enter matrix size (odd number greater than 1):\n");
        scanf("%d", &ms);

        // Check if the input is valid
        if (ms % 2 != 0 && ms > 1) {
            flag = 0; // Exit the input loop
            printf("Matrix size: %d\n", ms);

            // Initialize starting position
            int row = 1;
            int col = (ms + 1) / 2;

            printf("Starting position: row = %d, col = %d\n", row, col);
            system("cls"); // Clear the console

            // Generate the magic square
            for (int i = 1; i <= ms * ms; i++) {
                gotoxy(col * 4, row * 2); // Adjusted spacing for larger numbers
                printf("%d", i);

                // Check if the current number is a multiple of matrix size
                if (i % ms == 0) {
                    row++; // Move directly below
                } else {
                    col--;
                    row--;
                }

                // Wrap around logic
                if (row < 1) {
                    row = ms;
                }
                if (col < 1) {
                    col = ms;
                }
            }
        } else {
            printf("Unacceptable matrix size. Try again.\n");
            flag = 1;
        }
    }
    return 0;
}
