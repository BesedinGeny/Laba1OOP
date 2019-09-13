#include <iostream>

using namespace std;

typedef struct{
    int Z; // вещественная часть
    float R; // дробная часть
} Number;

int Init(Number *k, int a1, float a2){
    cout << "intitonalize" << endl;
    k->Z = a1;
    k->R = a2;
    return 0;
}

int Read(Number *k){
    cout << "Input Int part, then float part: " << endl;
    cin >> k->Z;
    cin >> k->R;
    return 0;
}

int Display(Number k){
    cout << "Number is " << k.Z << " + " << k.R << endl;
    return 0;
}

Number Add(Number k, Number t){
    Number Answ;
    Answ.R = k.R + t.R;
    Answ.Z = k.Z + t.Z;
    if (Answ.R >= 1.0) {
        Answ.R -= 1;
        Answ.Z += 1;
    }
    return Answ;
}

Number Round(Number k){
    Number answ;
    if (k.Z >= 0.5)
    {
        answ.R = k.R + 1;
        answ.Z = 0;
    }
    else
    {
        answ.R = k.R;
        answ.Z = 0;
    }
    return answ;
}

int main()
{
    Number example1, example2;
    Init(&example2, 0, 0.1);
    Read(&example1);
    Display(example1);
    Display(Add(example1, example2));
    Display(Round(example1));
    return 0;
}
