#include "histogram.h"

#include <cassert>

int
main() {
}
Третий тест будет проверять случай массива одинаковых чисел:

#include "histogram.h"

#include <cassert>

void
test_positive() {
    double min = 0;
    double max = 0;
    find_minmax({5,5,5}, min, max);
    assert(min == 5);
    assert(max == 5);
}

int
main() {
    test_positive();
}

