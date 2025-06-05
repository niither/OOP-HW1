#include "Book.h"

// getters
string Book::getTitle() {
    return title;
}
int Book::getPages() {
    return pages;
}
int Book::getCurrent_page() {
    return current_page;
}
bool Book::getIs_open() {
    return is_open;
}
// setters
void Book::setTitle(string nTitle) {
    title = nTitle;
}
void Book::setPages(int nPages) {
    pages = (unsigned)nPages;
}
void Book::setCurrent_page(int nCurrent_page) {
    if (nCurrent_page > pages || nCurrent_page < 0) {
        cout << "Incorrect current page\n";
    }
    else {
        current_page = nCurrent_page;
    }
}
void Book::setIs_open(bool nIs_open) {
    is_open = nIs_open;
}

void Book::Open() {
    if (!is_open) {
        cout << title << " is opened\n";
        is_open = true;
    }
    else {
        cout << title << " is already open\n";
    }
}
void Book::Read() {
    if (is_open && current_page < pages) {
        cout << "Reading " << title << "\n";
        current_page++;
        cout << "Current page: " << current_page << "\n";
    }
    else {
        cout << "Cannot read: book is closed or not enough pages left\n";
    }
}
void Book::Close() {
    if (is_open) {
        cout << title << " is closed\n";
        is_open = false;
    }
    else {
        cout << title << " is already closed";
    }
}