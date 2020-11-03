#include<iostream>
#include"ArregloDinamico.h"

using namespace std;

void mostrar(ArregloDinamico<string> &a);

main()
{
    ArregloDinamico<string> ad;
    ad.insertar_final("Que_hubo");
    ad.insertar_final("Que_tal");
    ad.insertar_inicio("Que_onda");
    ad.insertar_inicio("Hola");
    mostrar(ad);
    ad.insertar("Que_gusto_de_verte",2);
    mostrar(ad);
    ad.eliminar_inicio();
    ad.eliminar_final();
    ad.eliminar(1);
    mostrar(ad);

    return 0;
}
void mostrar(ArregloDinamico<string> &a)
{
    cout<<endl;
    for (size_t i = 0; i < a.size(); i++)
    {
        cout<<"("<<a[i]<<") ";
    }
}