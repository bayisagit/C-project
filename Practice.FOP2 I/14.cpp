#include <iostream>
#include <string.h>
using namespace std;
struct books{
    char title[50];
    char author[50];
    char subject[50];
    int bookid;
};
void printbook(struct books *book){
    cout<<"book.title "<<book->title<<endl;
    cout<<"book.author "<<book->author<<endl;
    cout<<"book.subject "<<book->subject<<endl;
    cout<<"book.book id "<<book->bookid<<endl;
}

int main(){
struct books book1;
struct books book2;
strcpy(book1.title, "emerging");
strcpy(book1.author , "bayisa");
strcpy(book1.subject , "ai");
       book1.bookid = 111;
strcpy(book2.title, "inclu");
strcpy(book2.author, "bona");
strcpy(book2.subject, "bio");
      (book2.bookid = 222);
printbook(&book1);
printbook(&book2);


    return 0;
}
