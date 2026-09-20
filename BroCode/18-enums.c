/*
    enum = A user-defined data type that consists of a set of named integer constants.
    Benefit -> Replaces numbers with readable names
*/
#include <stdio.h>

// If you doesn't assing a value. The default would be i.e. SUNDAY=0 an so on
// enum Day{
//     SUNDAY,
//     MONDAY,
//     TUESDAY,
//     WEDNESDAY,
//     THURSDAY,
//     FRIDAY,
//     SATURDAY
// };

// Another way to define a `enum` and not to use as `enum Day today = _`
typedef enum{    
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6,
    SUNDAY = 7
}Day;

typedef enum{
    SUCCESS,
    FAILURE,
    PENDING
} Status;

void connectStatus(Status status);

int main() {
    Day today = SATURDAY;
    printf("%d\n", today);
    
    if(today == SATURDAY || today == SUNDAY){
        printf("It's the weekend\n");
    }else{
        printf("It's a weekday\n");
    }

    Status status = SUCCESS;
    connectStatus(status);

    return 0;
}

void connectStatus(Status status){
    switch (status)
    {
    case SUCCESS:
        printf("Connection was successfull\n");
        break;
    case FAILURE:
        printf("Could not connect");
        break;
    case PENDING:
        printf("Connecting...");
        break;
    default:
        break;
    }
}