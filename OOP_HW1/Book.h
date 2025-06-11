#include "Header.h"

class Book {
private:
    string title;
    int pages;
    int current_page = 0;
    bool is_open;

public:
    // getters
    string getTitle();
    int getPages();
    int getCurrent_page();
    bool getIs_open();
    // setters
    void setTitle(string title);
    void setPages(int pages);
    void setCurrent_page(int current_page);
    void setIs_open(bool is_open);

    void Open();
    void Read();
    void Close();
};