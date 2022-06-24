#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

int count();
void display(int);
void giv_author(char *);
void adbook();
void which1(int);
void allbook();

struct library
{
    int an;
    char title[50];
    char author[30];
    int price;
    int flag;
} geclib[50] = {
    1, "Letting Go", "Phillip Roth", 17, 1,
    2, "Fear Of Flying", "Erica Jong", 18, 1,
    3, "Encyclopedia Brown, Boy Detective ", " Donald J. Sobol", 6, 1,
    4, "When Breath Becomes Air", "Paul Kalanithi", 10, 0,
    5, "The Adventures of Tom Sawyer", "Mark Twain", 9, 0,
    6, "In the Heart of the Sea", "Nathaniel Philbrick", 18, 1,
    7, "Little Women", "Little Women", 550, 0};

int main()
{
    int ans = 1, an;
    char auth[30];
    printf("Selection Number\n");
    printf("1. Add Book Information \n");
    printf("2. Display Book Information\n");
    printf("3. List All Books Of Given Author\n");
    printf("4. List The Title Of Specified Book\n");
    printf("5. List The Count Of Books In The Library\n");
    printf("6. List The Books In The Order Of Accession Number\n");
    printf("7. Exit\n");
    while (ans != 7)
    {
        printf("\nEnter Your Choice : ");
        scanf("%d",&ans);
        switch (ans)
        {
        case 1:
            adbook();
            break;
        case 2:
            printf("\nList Of Title Specified Books: ");
            scanf("%d", &an);
            display(an);
            break;
        case 3:
            while (getchar() != '\n');
            printf("Enter The Name Of The Author: ");
            gets(auth);
            giv_author(auth);
            break;
        case 4:
            printf("\nEnter The Accession Number Of Book: ");
            scanf("%d", &an);
            which1(an);

            break;
        case 5:
            printf("\nTotal Number Of Books : %d", count());
            break;
        case 6:
            allbook();

            break;
        case 7:
            return 0;
        default:
            printf("\nWrong choice, Try Again!!");
        }
    }
    return 0;
}

int count()
{
    int i = 0;
    while (geclib[i].an)
        i++;
    return i;
}

void display(int i)
{
    i--;
    printf("\n\n");
    printf("\nAccession Number : %d", geclib[i].an);
    printf("\nTitle : %s", geclib[i].title);
    printf("\nAuthor : %s", geclib[i].author);
    printf("\nPrice : %d", geclib[i].price);
    if (geclib[i].flag)
        printf("\nStatus : Issued");
    else
        printf("\nStatus : Available");
}

void giv_author(char *author)
{
    int i = 0;
    printf("\nBooks of \"%s\" are following : \n\n", author);
    while (geclib[i].an)
    {
        if (!(strcmp(author, geclib[i].author)))
            display(geclib[i].an);
        i++;
    }
}

void adbook()
{
    int next = count();
    geclib[next].an = next + 1;

    while (getchar() != '\n')
        ;
    printf("\nEnter The Title Of The Book: ");
    gets(geclib[next].title);
    printf("\nEnter The Author Name Of The Book: ");
    gets(geclib[next].author);
    printf("\nEnter The Price Of The Book: ");
    scanf("%d", &geclib[next].price);
    geclib[next].flag = 1;
}

void which1(int an)
{
    int i = 0;
    while (geclib[i].an)
    {
        if (geclib[i].an == an)
        {
            printf("\n\nTitle Of The Book : %s\n", geclib[i].title);
            return;
        }
    }
    printf("No Any Book Found \n");
}

void allbook()
{
    int i = 0;
    while (geclib[i].an)
    {
        display(i + 1);
        i++;
    }
}
