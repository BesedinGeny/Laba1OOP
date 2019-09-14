#include <iostream>

using namespace std;

class Wave{
private:
    float frequency;
    float Length;
public:
    void Init(float a,float b){
        frequency = a;
        Length = b;
    }
    void Read(){
        cout << "Input Int part, then float part: " << endl;
        cin >> frequency;
        cin >> Length;
    }
    void Display(){
        cout << "Number is " << frequency << " + " << Length << endl;
    }
    Wave Add( Wave t){
        Wave Answ;
        Answ.Length = this->Length + t.Length;
        Answ.frequency = this->frequency + t.frequency;

        return Answ;
    }

    float Period(){
       return 1. / frequency;
    }
};

int main()
{
    Wave one, two, three;
    one.Init(1, 0.5);
    two.Read();
    one.Display();
    two.Display();
    three = one.Add(two);
    three.Display();
    cout << "Periof of third wave is " << three.Period();
    return 0;
}
