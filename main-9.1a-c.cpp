#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <cstdlib>

using namespace std;

//defines type Point
struct Point {
    double x;
    double y;
};

//prints point p to output stream os
void print_point(ostream &os, Point p){
    os<<"("<<p.x<<","<<p.y<<")"<<endl;
}

//reads point p from input stream is
istream& read_point(istream &is, Point &p){
    is>>p.x>>p.y;
    return is;
}

int main()
{
    ifstream ifs;
    //opening input file
    ifs.open("input.txt");

    //checking if file reads
    if (ifs.fail()){
        cout<<"Error Occurred"<<endl;
        exit(1);
    }
    //reads then prints point p
    Point p;
    while (read_point(ifs,p)){
        print_point(cout,p);
    }
    ifs.close();
    return 0;
}
