#include <iostream>

using namespace std;

typedef struct{
    float frequency; // частота
    float Length; //длина
} Wave;

int Init(Wave *k, float a1, float a2){
    cout << "intitonalized" << endl;
    k->frequency = a1;
    k->Length = a2;
    return 0;
}

int Read(Wave *k){
    cout << "Input Int part, then float part: " << endl;
    cin >> k->frequency;
    cin >> k->Length;
    return 0;
}

int Display(Wave k){
    cout << "Wave`s frequency is " << k.frequency << " and length is " << k.Length << endl;
    return 0;
}

Wave Add(Wave k, Wave t){
    Wave Answ;
    Answ.Length = k.Length + t.Length;
    Answ.frequency = k.frequency + t.frequency;

    return Answ;
}

float Period(Wave k){
   return 1. / k.frequency;
}



int main()
{
    Wave example1, example2;
    Init(&example2, 0, 0.1);
    Read(&example1);
    Display(example1);
    Display(Add(example1, example2));
    cout << "Period of Wave 1 is " << Period(example1) << endl;

    return 0;
}
