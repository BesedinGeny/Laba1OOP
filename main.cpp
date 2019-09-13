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
    return 1;
}

int Read(Number *k){
    cout << "Input Int part, then float part: " << endl;
    cin >> k->Z;
    cin >> k->R;
    return 1;
}

int Display(Number k){
    cout << "Number is " << k.Z << " + " << k.R << endl;
    return 1;
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

int main()
{
    Number example1, example2;
    Init(&example2, 0, 0.1);
    Read(&example1);
    Display(example1);
    Display(Add(example1, example2));
    return 0;
}
