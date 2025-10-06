/*
                        Operators and Operands in C
                       =============================

    Program Name: C Operators Demonstration
    Author: sft Hanif
    Description: Shows different types of operators in C programming

    Operators: Symbols that perform operations on operands
    Operands: Variables or values that operators act upon
    Expression: Combination of operators and operands

    Types of Operators:
    1. Arithmetic Operators
    2. Relational Operators
    3. Logical Operators
    4. Assignment Operators
    5. Increment/Decrement Operators
    6. Bitwise Operators
    7. Conditional (Ternary) Operator
*/

#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 3;
    int result;
    float floatResult;

    printf("=== OPERATORS AND OPERANDS IN C ===\n\n");

    // Initial values
    printf("Initial Values:\n");
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);

    // 1. ARITHMETIC OPERATORS
    printf("1. ARITHMETIC OPERATORS:\n");
    printf("   a + b = %d\n", a + b);  // Addition
    printf("   a - b = %d\n", a - b);  // Subtraction
    printf("   a * b = %d\n", a * b);  // Multiplication
    printf("   a / b = %d\n", a / b);  // Division
    printf("   a %% c = %d\n", a % c); // Modulus (remainder)
    printf("\n");

    // 2. RELATIONAL OPERATORS (return 1 for true, 0 for false)
    printf("2. RELATIONAL OPERATORS:\n");
    printf("   a == b : %d\n", a == b); // Equal to
    printf("   a != b : %d\n", a != b); // Not equal to
    printf("   a > b  : %d\n", a > b);  // Greater than
    printf("   a < b  : %d\n", a < b);  // Less than
    printf("   a >= b : %d\n", a >= b); // Greater than or equal to
    printf("   a <= b : %d\n", a <= b); // Less than or equal to
    printf("\n");

    // 3. LOGICAL OPERATORS
    printf("3. LOGICAL OPERATORS:\n");
    printf("   (a > b) && (a > c) : %d\n", (a > b) && (a > c)); // AND
    printf("   (a < b) || (a > c) : %d\n", (a < b) || (a > c)); // OR
    printf("   !(a == b) : %d\n", !(a == b));                   // NOT
    printf("\n");

    // 4. ASSIGNMENT OPERATORS
    printf("4. ASSIGNMENT OPERATORS:\n");
    int x = a; // Simple assignment
    printf("   x = a : x = %d\n", x);

    x += b; // x = x + b
    printf("   x += b : x = %d\n", x);

    x -= c; // x = x - c
    printf("   x -= c : x = %d\n", x);

    x *= 2; // x = x * 2
    printf("   x *= 2 : x = %d\n", x);

    x /= 2; // x = x / 2
    printf("   x /= 2 : x = %d\n", x);

    x %= 4; // x = x % 4
    printf("   x %%= 4 : x = %d\n", x);
    printf("\n");

    // 5. INCREMENT/DECREMENT OPERATORS
    printf("5. INCREMENT/DECREMENT OPERATORS:\n");
    int i = 5;
    printf("   i = %d\n", i);
    printf("   i++ (post-increment) : %d\n", i++); // Use then increment
    printf("   After i++, i = %d\n", i);
    printf("   ++i (pre-increment) : %d\n", ++i); // Increment then use

    printf("   i-- (post-decrement) : %d\n", i--); // Use then decrement
    printf("   After i--, i = %d\n", i);
    printf("   --i (pre-decrement) : %d\n", --i); // Decrement then use
    printf("\n");

    // 6. BITWISE OPERATORS
    printf("6. BITWISE OPERATORS:\n");
    int num1 = 5; // Binary: 0101
    int num2 = 3; // Binary: 0011

    printf("   num1 = %d (binary: 0101), num2 = %d (binary: 0011)\n", num1, num2);
    printf("   num1 & num2 (AND) : %d\n", num1 & num2);     // 0101 & 0011 = 0001 (1)
    printf("   num1 | num2 (OR)  : %d\n", num1 | num2);     // 0101 | 0011 = 0111 (7)
    printf("   num1 ^ num2 (XOR) : %d\n", num1 ^ num2);     // 0101 ^ 0011 = 0110 (6)
    printf("   ~num1 (NOT)       : %d\n", ~num1);           // ~0101 = 1010 (-6 in 2's complement)
    printf("   num1 << 1 (Left shift)  : %d\n", num1 << 1); // 0101 << 1 = 1010 (10)
    printf("   num1 >> 1 (Right shift) : %d\n", num1 >> 1); // 0101 >> 1 = 0010 (2)
    printf("\n");

    // 7. CONDITIONAL (TERNARY) OPERATOR
    printf("7. CONDITIONAL OPERATOR:\n");
    int max = (a > b) ? a : b; // If a > b then max = a, else max = b
    printf("   Maximum between a and b: %d\n", max);

    int isEven = (a % 2 == 0) ? 1 : 0; // 1 for Even, 0 for Odd
    printf("   Is number a even? (1=Yes, 0=No): %d\n", isEven);
    printf("\n");

    // 8. OPERATOR PRECEDENCE DEMONSTRATION
    printf("8. OPERATOR PRECEDENCE:\n");
    int expr1 = a + b * c;   // Multiplication first: 10 + (5 * 3) = 25
    int expr2 = (a + b) * c; // Parentheses first: (10 + 5) * 3 = 45
    int expr3 = a + b % c;   // Modulus first: 10 + (5 % 3) = 12

    printf("   a + b * c     = %d\n", expr1);
    printf("   (a + b) * c   = %d\n", expr2);
    printf("   a + b %% c     = %d\n", expr3);
    printf("\n");

    return 0;
}

/*
    ===============================
        OPERATOR PRECEDENCE TABLE:
    ===============================

    Highest to Lowest:
    1. () [] -> .     (Parentheses, Array, Structure)
    2. ! ~ ++ -- + - * & (type) sizeof  (Unary operators)
    3. * / %          (Multiplication, Division, Modulus)
    4. + -            (Addition, Subtraction)
    5. << >>          (Bitwise shift)
    6. < <= > >=      (Relational)
    7. == !=          (Equality)
    8. &              (Bitwise AND)
    9. ^              (Bitwise XOR)
    10. |             (Bitwise OR)
    11. &&            (Logical AND)
    12. ||            (Logical OR)
    13. ?:            (Conditional)
    14. = += -= etc.  (Assignment)

    Note: Use parentheses to make expressions clear!
*/