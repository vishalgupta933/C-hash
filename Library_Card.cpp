
#include<cstdio>

struct LibraryCard
{
    const char *title;
    const char *author;
    const char *publisher;
    const char *subject;
    const char *isbn;
    const char *world_cat;
    short int decimal1;
    short int decimal2;
    short int pub_year;
    short int acq_year;
    short int quantity_left;
};
int main()
{
    LibraryCard C1 = {
        "Sherloc Homes", "Stephen Rolls", "J.K Brools", "The Investigate", "1589628 251425111", "2578425",
        410, 512, 1998, 2002, 300
    };
    printf("Title : %s\n",C1.title);
    printf("Author : %s\n",C1.author);
    printf("Publisher : %s\n",C1.publisher);
    printf("Subject : %s\n",C1.subject);
    printf("ISBN : %s\n",C1.isbn);
    printf("World Cat : %s\n",C1.world_cat);
    printf("Dewey Decimal : %d.%d\n",C1.decimal1,C1.decimal2);
    printf("Published Year : %d\n",C1.pub_year);
    printf("acquired Year: %d\n",C1.acq_year);
    printf("Quantity Left: %d\n",C1.quantity_left);
    return 0;

}
