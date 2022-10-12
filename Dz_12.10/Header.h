#pragma once
#include<iostream>
using namespace std;

class BaseException
{
protected:
    string str;
public:
    BaseException() {};
    BaseException(string s)
    {
        str = s;
    }
    virtual void Print()
    {
        cout << str << endl;
    }
};

class NullException : public BaseException
{
public:
    NullException() {};
    NullException(string s) : BaseException(s) {}
    void Print()
    {
        cout << "NullExeption\n";
        cout << str << endl;
    }
};

class SizeException :public BaseException
{
public:
    SizeException() {};
    SizeException(string s) :BaseException(s) {}
    void Print()
    {
        cout << "SizeException\n";
        cout << str << endl;
    }
};

class IndexException :public BaseException
{
public:
    IndexException() {};
    IndexException(string s) :BaseException(s) {}
    void Print()
    {
        cout << "IndexException\n";
        cout << str << endl;
    }
};
