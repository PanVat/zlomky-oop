#include "zlomek.h"
#include <cstdlib>

void zlomek::vymena(int &a, int &b) {
    int &pom = a;
    a = b;
    b = pom;
}

int zlomek::gcd(int a, int b) const {
    return b == 0 ? a : gcd(b, (a % b));
}

int zlomek::getCitatel() const {
    return this->citatel;
}

int zlomek::getJmenovatel() const {
    return this->jmenovatel;
}

void zlomek::setCitatel(int citatel) {
    this->citatel = citatel;
}

bool zlomek::setJmenovatel(int jmenovatel) {
    if (jmenovatel == 0) {
        return false;
    }
    this->jmenovatel = jmenovatel;
    return true;
}

bool zlomek::setZlomek(int citatel, int jmenovatel) {
    if (!setJmenovatel(jmenovatel)) {
        return false;
    }
    setCitatel(citatel);
    return true;
}

zlomek::~zlomek() {

}

zlomek::zlomek() {
    this->setZlomek(1, 1);
}

zlomek::zlomek(int citatel, int jmenovatel) {
    if (!setZlomek(citatel, jmenovatel)) {
        setZlomek(1, 1);
    }
}

zlomek::zlomek(const zlomek &z) {
    setZlomek(z.getCitatel(), z.getJmenovatel());
}

ostream &operator<<(ostream &os, const zlomek &z) {
    os << ((z.getCitatel() > 0 && z.getJmenovatel() < 0) ||
           (z.getCitatel() < 0 && z.getJmenovatel() > 0) ? "-" : "");
    os << abs(z.getCitatel()) << "/" << abs(z.getJmenovatel());
    return os;
}