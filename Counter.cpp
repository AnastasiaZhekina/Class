#include "Counter.h"


Counter::Counter() {
    num = 1;
}
    void Counter::add() { num = num + 1; }
    void Counter::subtract() { num = num - 1; }
    int Counter::getx() { return num; }

