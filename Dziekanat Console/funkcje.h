#include <iostream>
#include <string>

using namespace std;


class User
{
    public:
    string first_name;
};

class Lecturer : public User
{

public:

string first_name;
string last_name;
string title;
string birth_date;
string login;
int brith_date;


};

class Student:public User
{
public:
string first_name;
string last_name;
string field_of_study;
int group;
int year_of_study;
int birth_date;

};

class Admin : public User
{
public:
string first_name;
string last_name;

};

class Older_student : public Student
{
    string nic;
};
/*class group
{

};*/
