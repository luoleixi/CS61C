#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
    unsigned n) {
    int cnt = x;
    cnt = cnt >> n;
    if (cnt & 1) {
        return 1;
    }
    else {
        return 0;
    }
    return -1;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned* x,
    unsigned n,
    unsigned v) {
    // YOUR CODE HERE
    unsigned cnt = *x;
    cnt = cnt >> n;
    unsigned tmp = *x - (cnt << n);
    if (v)cnt = cnt | 1;
    else cnt = cnt & ((~0) - 1);
    cnt = cnt << n;
    *x = cnt + tmp;
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned* x,
    unsigned n) {
    // YOUR CODE HERE
    unsigned cnt = *x;
    cnt = cnt >> n;
    unsigned tmp = *x - (cnt << n);
    unsigned flag = cnt & 1;
    if (flag) cnt = cnt & ((~0) - 1);
    else cnt = cnt | 1;
    cnt = cnt << n;
    *x = cnt + tmp;
}

