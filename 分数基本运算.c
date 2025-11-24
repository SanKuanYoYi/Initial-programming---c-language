#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerator;
    int denominator;
} Fraction;

typedef struct {
    char add;
    char sub;
    char mul;
    char div;
} Operation;

Fraction addFractions(Fraction f1, Fraction f2);
Fraction subtractFractions(Fraction f1, Fraction f2);
Fraction multiplyFractions(Fraction f1, Fraction f2);
Fraction divideFractions(Fraction f1, Fraction f2);
int gcd(int a, int b);
void simplifyFraction(Fraction* f);
void printFraction(Fraction f);

int main() {
    Fraction f1, f2, result;
    Operation opt = {'+', '-', '*', '/'};

    scanf("%d/%d %d/%d", &f1.numerator, &f1.denominator, &f2.numerator,
          &f2.denominator);

    simplifyFraction(&f1);
    simplifyFraction(&f2);

    result = addFractions(f1, f2);
    printFraction(f1);
    printf(" %c ", opt.add);
    printFraction(f2);
    printf(" = ");
    printFraction(result);
    printf("\n");

    result = subtractFractions(f1, f2);
    printFraction(f1);
    printf(" %c ", opt.sub);
    printFraction(f2);
    printf(" = ");
    printFraction(result);
    printf("\n");

    result = multiplyFractions(f1, f2);
    printFraction(f1);
    printf(" %c ", opt.mul);
    printFraction(f2);
    printf(" = ");
    printFraction(result);
    printf("\n");

    result = divideFractions(f1, f2);
    printFraction(f1);
    printf(" %c ", opt.div);
    printFraction(f2);
    printf(" = ");
    if (f2.numerator == 0) {
        printf("Inf\n");
    } else {
        printFraction(result);
        printf("\n");
    }

    return 0;
}

Fraction addFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator *
                       f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    simplifyFraction(&result);
    return result;
}

Fraction subtractFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator *
                       f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    simplifyFraction(&result);
    return result;
}

Fraction multiplyFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    simplifyFraction(&result);
    return result;
}

Fraction divideFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    simplifyFraction(&result);
    return result;
}

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplifyFraction(Fraction* f) {
    if (f->numerator == 0) {
        f->denominator = 1;
        return;
    }

    int common = gcd(f->numerator, f->denominator);
    f->numerator /= common;
    f->denominator /= common;

    if (f->denominator < 0) {
        f->numerator = -f->numerator;
        f->denominator = -f->denominator;
    }
}

void printFraction(Fraction f) {
    int is_negative = (f.numerator < 0);
    int num = abs(f.numerator);
    int den = f.denominator;

    if (num == 0) {
        printf("0");
        return;
    }

    if (is_negative) {
        printf("(");
    }

    int integer_part = num / den;
    int fractional_numerator = num % den;

    if (is_negative) {
        printf("-");
    }

    if (integer_part > 0) {
        printf("%d", integer_part);
        if (fractional_numerator > 0) {
            printf(" %d/%d", fractional_numerator, den);
        }
    } else {
        printf("%d/%d", fractional_numerator, den);
    }

    if (is_negative) {
        printf(")");
    }
}
