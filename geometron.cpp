#include <iostream>

using namespace std;
class parameters{
protected:
    float width;
    float height;
public:
    void getParameters(double a,double b){
        width = a;
        height = b;
    }
};

class square: public parameters{
    public:
    double area(void){
        return width * height;
    }
};
class triangle: public parameters{
    public:
    double area(void){
        return (width*height)/2;
    }
};
int main(){
    int a,b,o;
    square s;
    triangle t;
    parameters *p1 = &s;
    parameters *p2 = &t;
    cout<<"Geometron v1.0 . (c) by PixeltronCode."<<endl;
    cout<<"Welcome, choose between (1)square or (2)triangle. Enter the number below:"<<endl;
    cin>>o;
    switch(o){
    case(1):
        cout<<"Enter the width and height of your right rectangle in cm's:"<<endl;
        cin>>a>>b;
        p1 -> getParameters(a,b);
        cout<<"The surface area of your geometrical object is: "<<s.area()<<"sm¡2"<<endl;
        break;
    case(2):
        cout<<"Enter the width and height of your triangle in cm's:"<<endl;
        cin>>a>>b;
        p2 -> getParameters(a,b);
        cout<<"The surface area of your triangle is:"<<t.area()<<"cm¡2"<<endl;
    }
    return 0;
}
