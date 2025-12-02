//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() {
    int dd, mm, yyyy;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("Enter a date: \n");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    printf("%02d-%s-%04d", dd, months[mm-1], yyyy);
    return 0;
}