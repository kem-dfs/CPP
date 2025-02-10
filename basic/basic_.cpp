/**
 * expression is a sequence of operators and their operands, that specifies a computation
 * each cpp expression is characterized by two independent properties: type and value category
 * value categories: classify expression by their values (lvalue, rvalue, glvalue, prvalue, xvalue)
 * 
 */

 /**
  * the compiler handling of data alignment
  * pervent data misalignment
  * multiples of size in bytes of the data type
  * 
  * alignas specifier to specify custom alignment of variables and user defined types 
  * alignof to obtain the alignment of a specified type or variable 
  * 
  */

  // lvalues_and_rvalues2.cpp
int main()
{
    int i, j, *p;

    // Correct usage: the variable i is an lvalue and the literal 7 is a prvalue.
    i = 7;

    // Incorrect usage: The left operand must be an lvalue (C2106).`j * 4` is a prvalue.
    7 = i; // C2106
    j * 4 = 7; // C2106

    // Correct usage: the dereferenced pointer is an lvalue.
    *p = i;

    // Correct usage: the conditional operator returns an lvalue.
    ((i < 3) ? i : j) = 7;

    // Incorrect usage: the constant ci is a non-modifiable lvalue (C3892).
    const int ci = 7;
    ci = 9; // C3892
}