#ifndef PERMANENTNY_H
#define PERMANENTNY_H


class Permanentny
{
public:
    Permanentny();
    virtual ~Permanentny();
public:
    virtual void zapisz(int id) = 0;
    virtual void usun(int id) = 0;
};

#endif // PERMANENTNY_H
