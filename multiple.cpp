#include <iostream>
#include <string>
using namespace std;

class first
{
protected:
    int book_no;
    string book_name;

public:
    void get_data(void);
    void display(void);
};

void first::get_data(void)
{
    cout << "\nEnter book name :";
    cin >> book_name;
    cout << "\nEnter book no :";
    cin >> book_no;
}

void first::display(void)
{
    cout << " Book Name : " << book_name << endl;
    cout << " Book No : " << book_no << endl;
}

class second
{
protected:
    string author_name;
    string publisher;

public:
    void getdata(void);
    void putdata(void);
};

void second::getdata(void)
{
    cout << "\nEnter author name :";
    cin >> author_name;
    cout << "\nEnter publisher :";
    cin >> publisher;
}

void second::putdata(void)
{
    cout << " Author Name : " << author_name << endl;
    cout << " Publisher : " << publisher << endl;
}

class third : public first, public second
{
protected:
    int no_of_pages;
    int year_of_Publication;

public:
    void get__data(void);
    void put__data(void);
};

void third::get__data(void)
{
    get_data();
    getdata();
    cout << "\nEnter no of pages:";
    cin >> no_of_pages;
    cout << "\nEnter year of publication :";
    cin >> year_of_Publication;
}

void third::put__data(void)
{
    display();
    putdata();
    cout << " No of Pages : " << no_of_pages << endl;
    cout << " Year of publication : " << year_of_Publication << endl;
}

int main()
{
    third books[2];
    for (int i = 0; i < 2; i++)
    {
        books[i].get__data();
        books[i].put__data();
    }
}