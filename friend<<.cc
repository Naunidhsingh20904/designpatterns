#include <iostream>
using namespace std;

class Vec{
int x,y;
friend ostream& operator<<(ostream&out, const Vec& v1);
public:
Vec(int x, int y):
x{x}, y{y} {}
};

ostream& operator<<(ostream&out, const Vec& v1) {
    out<<"[";
    out<<v1.x<<", ";
    out<<v1.y<<"]";
    return out;

}
int main(){
    Vec v1{2,43};
    cout<<v1<<endl;
}
