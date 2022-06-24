#include<stdio.h>
int rec_func(int number);
int non_rec_func(int number);
int  main()
{
    int number, rec, non_rec;
    printf("Enter a five digits integer: ");
    scanf("%d", &number);
	rec = rec_func(number);
    non_rec = non_rec_func(number);
    printf("\n Calculate sum using recursion: %d",rec);
    printf("\n Calculate sum without recursion: %d",non_rec);
}
int rec_func(int number)
{
    if (number==0)
    {
        return 0;
    }

    return (number%10+rec_func(number/10));
}
int non_rec_func(int number)
{
    int res, count=0;
    while(number!=0)
    {
        res=number%10;
        count+=res;   
        number=number/10;
    }
    return count;
}
