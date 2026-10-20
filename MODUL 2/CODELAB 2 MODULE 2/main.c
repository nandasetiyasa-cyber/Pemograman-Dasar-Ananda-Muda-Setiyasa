
#include <stdio.h>
#include <string.h>

#define BONUS_DAYS 7

int main()
{
    char studentName[50];
    char bookTitle[50];
    int borrowDays;
    int totalDays;

    printf("===================================\n");
    printf(" LIBRARY BOOK BORROWING APPLICATION\n");
    printf("===================================\n");

    printf("Enter student name : ");
    fgets(studentName, sizeof(studentName), stdin);

    studentName[strcspn(studentName, "\n")] = 0;

    printf("Enter book title : ");
    fgets(bookTitle, sizeof(bookTitle), stdin);

    bookTitle[strcspn(bookTitle, "\n")] = 0;

    printf("Enter borrow days : ");
    scanf("%d", &borrowDays);

    totalDays = borrowDays + BONUS_DAYS;

    printf("\n========== BORROW REPORT ==========\n");
    printf("Student Name : %s\n", studentName);
    printf("Book Title   : %s\n", bookTitle);
    printf("Borrow Days  : %d\n", borrowDays);
    printf("Bonus Days   : %d\n", BONUS_DAYS);
    printf("Total Days   : %d\n", totalDays);

    return 0;
}