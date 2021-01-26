//header file for Textbook class

#ifndef TEXTBOOK_H
#define TEXTBOOK_H

class Textbook{
private:
	std::string title;
	int num_pages;

public:
	std::string get_title();
	int get_num_pages();

	void set_title(std::string);
	void set_num_pages(int);
	
	void print_textbook();
};

#endif
