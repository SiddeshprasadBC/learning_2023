//if else
#include <stdio.h>

int find_biggest_num(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// ternary operater
#include <stdio.h>

int find_biggest_num(int a, int b) {
    return (a > b) ? a : b;
}
