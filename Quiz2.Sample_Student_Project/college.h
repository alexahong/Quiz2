/** @file college.h
* @brief
* this is the header file for college.h that will load all classes and hours into a file
* and can also remove classes.
* it will determine what your GPA is from your grades and credit hours.
* @author Matthew Aberegg
*/

//********************
//Matthew Aberegg
//Project 3
//CS 2401
//10/8/2015
//********************

#include <iostream>
#include <fstream>
#include <string>
#include "course.h"
#include "node.h"


#ifndef COLLEGE_H
#define COLLEGE_H


class College{
	public:
	College(std::string s);
	~College();
	College(const College& other);
	College& operator =(const College& other);
	void add(course& c);
	void remove(std::string coursename);
	void display(std::ostream& outs);
	double hours();
	double gpa();
	void save(std::ostream& outs);
	void load(std::istream& ins);
	private:
	std::string name;
	node * head;




};
#endif
