#include <iostream>

using namespace std;

typedef struct{
    int Z; // вещественная часть
    float R; // дробная часть
} Number;

int Init(Number *k){
    cout << "intitonalize" << endl;
    k->Z = 1;
    k->R = 0.1;
    return 1;
}

int Read(Number *k){
    cout << "Input Int part, then float part: " << endl;
    cin >> k->Z;
    cin >> k->R;
    return 1;
}

int Display(Number k){
    cout << "Number is " << k.Z << "+" << k.R << endl;
    return 1;
}



int main()
{
    Number example;
    Init(&example);
    Read(&example);
    Display(example);
    return 0;
}
