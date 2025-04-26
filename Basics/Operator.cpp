#include<iostream>
using namespace std;

int main(){
    // Operators :- Operators are symbols that operate on operands / values and return a result.

    // Unary operator
    int c = 5;
    int d = -10;
    cout << "Unary Operators:" << endl;
    cout << "Initial value of c: " << c << endl;
    
    // Increment
    cout << "Post-increment (c++): " << c++ << endl;
    cout << "After post-increment, c: " << c << endl;
    cout << "Pre-increment (++c): " << ++c << endl;
    
    // Decrement
    cout << "Post-decrement (c--): " << c-- << endl;
    cout << "After post-decrement, c: " << c << endl;
    cout << "Pre-decrement (--c): " << --c << endl;
    
    cout << "Negation of d: " << -d << endl;
    cout << endl;
    

    // 1) Arithmetic Operators
    int a;
    int b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Arithmetic Operators" << endl;
    cout << "Sum = " << (a + b) << endl;
    cout << "Subtraction = " << (a - b) << endl;
    cout << "Product = " << (a * b) << endl;
    cout << "Division = " << (a / b) << endl;
    cout << "Modulo = " << (a % b) << endl;
    cout << endl;

    // 2) Relational Operators
    cout << "Relational Operators" << endl;
    cout << "0 = false, 1 = true" << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << endl;

    // 3) Logical Operators
    cout << "Logical Operators" << endl;
    cout << "AND (&&):" << endl;
    cout << "true && true: " << (true && true) << endl;
    cout << "false && true: " << (false && true) << endl;
    cout << "true && false: " << (true && false) << endl;
    cout << "false && false: " << (false && false) << endl;
    cout << endl;
    cout << "OR (||):" << endl;
    cout << "true || true: " << (true || true) << endl;
    cout << "false || true: " << (false || true) << endl;
    cout << "true || false: " << (true || false) << endl;
    cout << "false || false: " << (false || false) << endl;
    cout << endl;
    cout << "NOT (!):" << endl;
    cout << "!true: " << (!true) << endl;
    cout << "!false: " << (!false) << endl;
    cout << endl;

    // 4) Bitwise Operators
    cout << "Bitwise Operators (with a = " << a << " and b = " << b << "):" << endl;
    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "a ^ b: " << (a ^ b) << endl;
    cout << "~a: " << (~a) << endl;
    cout << "a << 1: " << (a << 1) << endl;
    cout << "a >> 1: " << (a >> 1) << endl;
    cout << endl;

    // 5) Assignment Operators
    cout << "Assignment Operators:" << endl;
    int x = 10;
    cout << "Initial value of x: " << x << endl;
    x += 5;
    cout << "x += 5: " << x << endl;
    x -= 2;
    cout << "x -= 2: " << x << endl;
    x *= 3;
    cout << "x *= 3: " << x << endl;
    x /= 4;
    cout << "x /= 4: " << x << endl;
    x %= 3;
    cout << "x %= 3: " << x << endl;
    cout << endl;

    // 6) Ternary Operator
    cout << "Ternary Operator:" << endl;
    string result = (a > b) ? "a is greater" : "b is greater or equal";
    cout << result << endl;

    return 0;
}
