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
void Book::setTitle(string title) {
    this->title = title;
}
void Book::setPages(int pages) {
    this->pages = (unsigned)pages;
}
void Book::setCurrent_page(int current_page) {
    if (current_page > pages || current_page < 0) {
        cout << "Incorrect current page\n";
    }
    else {
        this->current_page = current_page;
    }
}
void Book::setIs_open(bool is_open) {
    this->is_open = is_open;
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