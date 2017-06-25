#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
class sCalculator{
public:
    double user_input;
    int p;
    double sum = 0;
    double a = 1;
    int i = 0;
    void get_user_input(double get_input);
    double add(void);
    double substraction(void);
    double multiply(void);
    double factorial(void);
    double root(void);
    double power(int on_power);
};

void sCalculator::get_user_input(double get_input){
    user_input = get_input;
}
double sCalculator::add(void){
    sum += user_input;
    return sum;
}
double sCalculator::substraction(void){
    sum -= user_input;
    return sum;
}
double sCalculator::multiply(void){
    a = a * user_input;
    return a;
}
double sCalculator::factorial(void){
    while(i < user_input){
        i++;
        a *= i;
    }
return a;

}
double sCalculator::root(void){
    if(user_input > 0){
        sum = sqrt(user_input);
        return sum;
    }
    else {
        cout<<"The entered number must be higher than 0 (zero)!. Try again!"<<endl;
    }
}
double sCalculator::power(int on_power){
    p = on_power;
    sum = pow(user_input, p);
    return sum;
}

int main(){
    int user_c;
    int input = 1;
    sCalculator sCalculator1;
    cout<<"Scientific(console) Calculator v1.0, (c) by PixeltronCode"<<endl<<"You're welcome, choose on of the options below:"<<endl;
    //User guide and menu:>>
    again:cout<<"1. Add numbers;"<<endl<<"2. Substract numbers; "<<endl<<"3. Multiply numbers;"<<endl<<"4. Factorial of !n;"<<endl<<"5. Square root of the number n;"<<endl<<"6. n powerd on a;"<<endl;
    int l=0;
    while(l<50){
        cout<<"-";
        l++;
    }
    cout<<endl;
    cin>>user_c;
    switch(user_c){
    case(1):
        while(input != 0) {
            cout<<"Enter your numbers, you can quit entering 0(zero):"<<endl;
            cin>>input;
            sCalculator1.get_user_input(input);
            cout<<"Result = "<<sCalculator1.add()<<endl;
        }
        break;
    case(2):
        while(input != 0){
            cout<<"Enter your numbers, you can quit entering 0(zero):"<<endl;
            cin>>input;
            sCalculator1.get_user_input(input);
            cout<<"Result = "<<sCalculator1.substraction()<<endl;
        }

        break;
        case(3):
        while(input != 0){
            cout<<"Enter your numbers, you can quit entering 0(zero):"<<endl;
            cin>>input;
            sCalculator1.get_user_input(input);
            cout<<"Result = "<<sCalculator1.multiply()<<endl;
        }

        break;
        case(4):
            cout<<"Enter one number:"<<endl;
            cin>>input;
            sCalculator1.get_user_input(input);
            cout<<"Result = "<<sCalculator1.factorial()<<endl;

        break;
        case(5):
            cout<<"Enter one number:"<<endl;
            cin>>input;
            sCalculator1.get_user_input(input);
            cout<<"Result = "<<sCalculator1.root()<<endl;
        break;
        case(6):
            int power;
            cout<<"Enter one number and the power:"<<endl;
            cin>>input>>power;
            sCalculator1.get_user_input(input);
            cout<<"Result = "<<sCalculator1.power(power)<<endl;

        break;
        default:
            cout<<"That option isn't mentioned. Try again!"<<endl;
    }
}
