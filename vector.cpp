#include<iostream>
using namespace std;

class Vector{

    float x, y, z;

 public:

     Vector(){
         x=y=z=0; }

     Vector(float a) {
         x=a;
         y=x=0; }

      Vector(float a, float b) {
         x=a;
         y=b;
         z=0; }

     Vector(float a, float b, float c) {
         x=a;
         y=b;
         z=c; }

    Vector operator+(Vector A) {
        return Vector(x+A.x, y+A.y, z+A.z); }

    Vector operator-(Vector A) {
         return Vector(x-A.x, y-A.y, z-A.z) ; }

  //  float operator.(Vector A) {
    //     return (x* A.x+ y*A.y +z*A.z) ;  }

     Vector operator*(Vector A) {
         return Vector(y*A.z-z*A.y, z*A.x-x*A.z, x*A.y-y*A.x) ;}

 //    Vector operator*(float a) {
 //        return Vector(a*x, a*y, a*z); }

      void print() {
         cout<< "(" << x << ", " << y << ", " << z << ")" ; }
};

    Vector A, B;

void oop (Vector C, string s)
{
    A.print();
    cout<< s;
    B.print();
    cout<< " = ";
    C.print();
    cout<< endl;
}

int main() {

    A= Vector(1,2,3);
    B= Vector(3,5,7);

    oop(A+B, " + ");
    oop(A-B, " - ");
    oop(A*B, " x ");

	return 0; }
