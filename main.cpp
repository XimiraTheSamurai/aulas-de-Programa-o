#include <iostream>

using namespace std;

class Ingresso{

protected:

float valor;

public:

//construtor

Ingresso(float valor)
{
    setValor(valor);
}
//metodo de impressão
virtual void imprime();

//set

void setValor(float valor)
{
    this->valor=valor;
}


};

class IngressoVip: public Ingresso{

public:

    IngressoVip():Ingresso(valor)
    {
        this->valor=Ingresso::valor+(Ingresso::valor*0.5);
    }

    void imprime()
    {
        cout<<"Valor do Ingresso VIP: R$ "<<this->valor<<endl;
    }



};

int main()
{
    float valor=100;
    Ingresso *iv= new IngressoVip()

    iv.imprime();

    return 0;
}
