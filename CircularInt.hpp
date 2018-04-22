//
// Created by אריה גרוס on 27 מרץ 2018.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CircularInt {
public:
    int firstNum;
    int lastNum;
    int currectNum;
    void refix();

    CircularInt(int const firstNu, int const lastNu);
    CircularInt(const CircularInt & other);
    ~CircularInt();

    CircularInt& operator=(const int &rhs);
    CircularInt& operator=(const CircularInt &rhs);
    CircularInt& operator+=(const int &rhs);
    CircularInt& operator+=(const CircularInt &rhs);
    CircularInt& operator-=(const int &rhs);
    CircularInt& operator-=(const CircularInt &rhs);
    CircularInt& operator*=(const int &rhs);
    CircularInt& operator*=(const CircularInt &rhs);
    CircularInt& operator/=(const int &rhs);
    CircularInt& operator/=(const CircularInt &rhs);
    CircularInt& operator%=(const int &rhs);
    CircularInt& operator%=(const CircularInt &rhs);

    bool operator==(const int &rhs);
    bool operator==(const CircularInt &rhs);
    CircularInt& operator++();
    CircularInt operator++(int);
    CircularInt& operator--();
    CircularInt operator--(int);

    CircularInt operator+(const int &rhs);
    CircularInt operator+(const CircularInt &rhs);
    CircularInt operator-();
    CircularInt operator-(const int &rhs);
    CircularInt operator-(const CircularInt &rhs);
    CircularInt operator*(const int &rhs);
    CircularInt operator*(const CircularInt &rhs);
    CircularInt operator/(const int &rhs);
    CircularInt operator/(const CircularInt &rhs);
    CircularInt operator%(const int &rhs);
    CircularInt operator%(const CircularInt &rhs);

    friend ostream& operator<<(ostream& os, const CircularInt& dt);
    friend CircularInt operator-(int lhs, const CircularInt& rhs);

};




