#include <iostream>
using namespace std;

class Vec{
int x,y;
};

ostream& operator<<(ostream&out, const vec& v1) {
    out<<"[";
    out<<v1.getX()<<", ";
    out<<v1.getY()<<"]";
    return out;

}
int main(){
    vec v1{2,43};
    cout<<v1<<endl;
}
