#include<iostream>
using namespace std;
class shape{
    public:
virtual void draw()=0;
};
class circle: public shape
{void draw();
};
class square: public shape {

void draw();
};

int main(){
shape *s1=new circle;
shape *s2=new square;
cout<<s1->draw(); //calls circle::draw
s2->draw(); //calls square::draw

}
