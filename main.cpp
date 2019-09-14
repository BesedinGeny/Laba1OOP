#include <iostream>

using namespace std;

class Number{
private:
    int Z;
    float R;
public:
    void Init(int a,float b){
        Z = a;
        R = b;
    }
    void Read(){
        cout << "Input Int part, then float part: " << endl;
        cin >> Z;
        cin >> R;
    }
    void Display(){
        cout << "Number is " << Z << " + " << R << endl;
    }
    Number Add(Number k){
        k.Z += this->Z;
        k.R += this->R;
        if (k.R >= 1.0){
            k.Z += 1;
            k.R -= 1;
        }
        return k;
    }
    Number Round(){
        Number answ;
        answ.Init(this->Z, this->Z);
        if (R >= 0.5){
            answ.Z += 1;
        }
        answ.R = 0;
        return answ;
    }

};

int main()
{
    Number one, two, three;
    one.Init(1, 0.5);
    two.Read();
    one.Display();
    two.Display();
    three = one.Add(two);
    three.Display();
    Number four = three.Round();
    three.Display();
    four.Display();
    return 0;
}
