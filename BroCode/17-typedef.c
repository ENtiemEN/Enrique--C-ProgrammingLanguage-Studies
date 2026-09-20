/*
    typedef = reserved keyword that gives an existing datatype a "nickname".
    Helps simplify complex types and improves code readability.

    `typedef existing_type new_name;`
*/
#include <stdio.h>

//typedef char String[50];
//typedef char* String; // we can declare a string like that

typedef char Initials[3]; // we need a null terminator at the end

int main() {
    Initials user1 = "EJ";
    Initials user2 = "DA";
    Initials user3 = "MQ";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);

    return 0;
}