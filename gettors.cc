#include <iostream>
using namespace std;


class vec{
    int x,y;
    public:
    vec(int x, int y): x{x}, y{y} {}
    int getX() const{
        return x;
    }
    int getY() const{
        return y;
    }
};
ostream& operator<<(ostream&out, const vec& v1){
    out<<"[";
    out<<v1.getX()<<", ";
    out<<v1.getY()<<"]";
    return out;

}

int main(){
    vec v1{2,43};
    cout<<v1<<endl;
}