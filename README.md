### Magic Square Generator 

---

#### **Overview**

This is a C program that generates a **magic square** of a given odd size greater than 1. A magic square is a grid where the numbers are arranged in such a way that the sum of each row, column, and diagonal is the same.

The program uses dynamic cursor positioning to display the square neatly in the console.

---

#### **Features**
- **Magic Square Generation**: Creates a valid magic square for any odd integer size greater than 1.
- **Dynamic Cursor Placement**: Uses the `gotoxy` function to position numbers in the console for better visualization.
- **Input Validation**: Ensures the user provides an acceptable matrix size.
- **Interactive Interface**: Allows repeated input attempts until valid data is entered.

---

#### **Requirements**
- A Windows-based system (uses `windows.h` for console operations).
- A C compiler like GCC, Visual Studio, or similar.

---

#### **How to Compile and Run**
1. **Compile the Program**:
   Use any C compiler. For example:
   ```bash
   gcc -o magic_square magic_square.c
   ```

2. **Run the Program**:
   ```bash
   magic_square.exe
   ```

3. **Input the Matrix Size**:
   - Enter an odd integer greater than 1.
   - The program will validate the input and generate the magic square.

---

#### **How It Works**
1. The user is prompted to input the matrix size.
2. If the size is valid:
   - The program starts placing numbers from 1 to \( n \times n \) (where \( n \) is the matrix size).
   - Numbers are placed using the following logic:
     - Start at the middle column of the first row.
     - Move one row up and one column left for the next number.
     - If moving up or left goes out of bounds, wrap around to the opposite side.
     - If the position is already filled, place the number directly below the last placed number.
3. The completed square is displayed in the console.

---

#### **Example**
Input:
```
Enter matrix size:
5
```

Output (in console):
```
  17   24    1    8   15
  23    5    7   14   16
   4    6   13   20   22
  10   12   19   21    3
  11   18   25    2    9
```

---

#### **Notes**
- **Error Handling**: If an invalid matrix size (e.g., even number or less than 1) is entered, the program prompts the user to try again.
- **Spacing Adjustments**: The cursor placement is adjusted to ensure numbers align properly for different matrix sizes.
- **Cross-Platform Limitation**: The program is designed for Windows. To make it cross-platform, consider replacing `windows.h` and `SetConsoleCursorPosition` with platform-independent alternatives.

---

#### **Future Improvements**
- Add support for even-sized magic squares using different algorithms.
- Make the program cross-platform using libraries like `ncurses`.
- Enhance the visual representation by adding grid lines or colors.

---

#### **Author**
Developed by [Omar](#) as part of a hands-on programming exercise.
