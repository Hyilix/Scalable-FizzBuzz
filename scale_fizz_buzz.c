#include <stdio.h>

/* vvv Define black magic vvv */
// NOTE: Add here anything to be added to the FizzBuzz, it will be handled automatically
#define ENUM_LIST \
    X(Fizz, 3) \
    X(Buzz, 5) \
    X(Suzz, 7) \    # Example of adding another value
    X(Dizz, 11) \   # Example of adding another value

// Generate an enum like the one above
#define X(name, val) name = val,
enum list {
    ENUM_LIST
};
#undef X

// Generate an enum containing the size
#define X(name, val) + 1
enum {
    COND_COUNT = ENUM_LIST
};
#undef X

#define X(name, val) #name,
const char *oper_type_strs[] = {
    ENUM_LIST
};
#undef X

#define X(name, val) val,
const int oper_type_ints[] = {
    ENUM_LIST
};
#undef X
/* ^^^ Define black magic ^^^ */

// Functions
char is_multiple(int number, int divider) {
    return number % divider == 0;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        printf("%d: ", i);
        char conditions_met = 0;
        for (int j = 0; j < COND_COUNT; j++) {
            if (is_multiple(i, oper_type_ints[j])) {
                printf("%s", oper_type_strs[j]);
                conditions_met = 1;
            }
        }
        if (!conditions_met) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
