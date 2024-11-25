#ifndef ZLOMEK_ZLOMEK_H
#define ZLOMEK_ZLOMEK_H

#include <ostream>

using std::ostream;

class zlomek {
public:
    zlomek();

    zlomek(int, int);

    zlomek(const zlomek &);

    ~zlomek();

    int getCitatel() const;

    int getJmenovatel() const;

    void setCitatel(int);

    bool setJmenovatel(int);

    bool setZlomek(int, int);

    bool prevraceniZlomku();

    bool kraceniZlomku();

    friend ostream &operator<<(ostream &, const zlomek &);

    zlomek &operator=(const zlomek &);

    zlomek &operator+=(const zlomek &);

    zlomek &operator-=(const zlomek &);

    zlomek &operator*=(const zlomek &);

    zlomek &operator/=(const zlomek &);

    zlomek &operator+(const zlomek &) const;

    zlomek &operator-(const zlomek &) const;

    zlomek &operator*(const zlomek &) const;

    zlomek &operator/(const zlomek &) const;

    bool operator==(const zlomek &) const;

private:
    int citatel;
    int jmenovatel;

    void vymena(int &, int &);

    int gcd(int, int) const;
};


#endif
