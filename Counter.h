#ifndef COUNTER_H
#define COUNTER_H


class Counter {
    int num;
public:
    Counter(int n) : num(n){}
    Counter();
    void add();
    void subtract();
    int getx();
};
#endif // !COUNTTER_H
