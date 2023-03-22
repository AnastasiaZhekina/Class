#pragma once
class Counter {
    int num;
public:
    Counter(int n) : num(n){}
    Counter();
    void add();
    void subtract();
    int getx();
};