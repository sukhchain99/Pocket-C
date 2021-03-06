#include <stdio.h>

typedef struct Keywords
{
    char* __auto;
    char* __break;
    char* __case;
    char* __char;
    char* _const;
    char* __continue;
    char* __default;
    char* __do;
    char* __double;
    char* __else;
    char* __enum;
    char* __extern;
    char* __float;
    char* __for;
    char* __goto;
    char* __if;
    char* __int;
    char* __long;
    char* __register;
    char* __return;
    char* __short;
    char* _signed;
    char* __sizeof;
    char* __static;
    char* __struct;
    char* __switch;
    char* __typedef;
    char* __union;
    char* __unsigned;
    char* __void;
    char* _volatile;
    char* __while;
} KEYWORDS;

/*
 * Begining of OPERATORS
 */

typedef struct Arithmetic
{
    char* __addition;
    char* __subtraction;
    char* __multiplication;
    char* __division;
    char* __modulus;
    char* __pre_increment;
    char* __post_increment;
    char* __pre_decrement;
    char* __post_decrement;
} ARITHMETIC;

typedef struct Relational
{
    char* __equal;
    char* __not_equal;
    char* __greater;
    char* __lesser;
    char* __greater_or_equal;
    char* __lesser_or_equal;

} RELATIONAL;

typedef struct Logical
{
    char* __and;
    char* __or;
    char* __not;
} LOGICAL;

typedef struct Bitwise
{
    char* __and;
    char* __or;
    char* __not;
    char* __xor;
    char* __left_shift;
    char* __right_shift;
} BITWISE;

typedef struct Assignment
{
    char* __assign;
    char* __add_assign;
    char* __subtract_assign;
    char* __multiply_assign;
    char* __divide_assign;
    char* __modulus_assign;
    char* __left_shift_assign;
    char* __right_shift_assign;
    char* __and_assign;
    char* __or_assign;
    char* __xor_assign;
} ASSIGNMENT;

typedef struct Misc
{
    char* __sizeof;
    char* __reference;
    char* __pointer;
    char* __ternary;
    char* __comma;
    char* __semicolon;
    char* __dot;
    char* __arrow;
    char* __type_conversion;
    char* __bracket;
} MISC;

typedef struct Operators
{
    ARITHMETIC arithmetic;
    RELATIONAL relational;
    LOGICAL logical;
    BITWISE bitwise;
    ASSIGNMENT assignment;
    MISC misc;
} OPERATORS;

/*
 * End of OPERATORS
 */

typedef struct Tokens
{
    KEYWORDS keywords;
    OPERATORS operators;
} TOKENS;

