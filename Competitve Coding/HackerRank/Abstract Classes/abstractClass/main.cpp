#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Book
{
    protected:
        string title;
        string author;
    public:
        Book (string t,string a)
        {
            title=t;
            author=a;
        }
        virtual void display()=0;
};

class MyBook
{
    private:
        string title;
        string author;
        int price;

    public:
        MyBook (string t, string a, int p)
        {
            title = t;
            author = a;
            price = p;
        }

    void display ()
    {
        cout << "Title: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPrice: " << price;
    }

};

int main() {
    freopen("input.txt", "r", stdin);
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
