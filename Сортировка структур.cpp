/*#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

struct Point {
    int x;
    int y; 
    int i;

    Point(int x, int y, int i){
        x = x;
        y = y;
        i = i;
    }
    Point(){}
    double Dist(const Point &b) {
        return sqrt((b.x - x)*(b.x - x) + (b.y - y)*(b.y - y));
    }

};

void swap(Point* p, int n1, int n2) {
    Point temp = p[n1];
    p[n1] = p[n2];
    p[n2] = temp;
}

int Miny(Point* p, int n) {
    int np = 0;
    for (int i = 1; i < n; ++i) {
        if (p[i].y < p[np].y)
            np = p[i].i;
    }
    return np;
}

int main() {
    int n;
    cin >> n;
    Point* pnts = new Point[n];
    for (int i = 0; i < n; ++i) {
        cin >> pnts[i].x >> pnts[i].y;
        pnts[i].i = i;
    }
    int miny = Miny(pnts, n);
    swap(pnts, 0, miny);

    return 0;
}*/