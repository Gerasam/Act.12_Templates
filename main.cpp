#include<iostream>
#include"ArregloDinamico.h"
#include"computadora.h"

using namespace std;

void mostrar(ArregloDinamico<string> &a);

main()
{
    ArregloDinamico<Computadora> pcs;

    Computadora pc0("ios","mac",8.0,2000);
    Computadora pc1("Windows","hp",8.0,1000);
    Computadora pc2("Linux","Asus",16.180,2000);
    Computadora pc4("Windowsxp","compac",4.0,500);

    pcs<<pc0<<pc1<<pc2<<pc2<<pc2<<pc4;
    Computadora pc3("Linux","Asus",16.180,2000);


    ArregloDinamico<Computadora*> ptrs = pcs.buscar_todos(pc3);

    if(ptrs.size()>0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *c = ptrs[i];
            cout<<*c<<endl;
        }
    }
    else
    {
        cout<<"No exiten coincidencias"<<endl;
    }
    

    /*
    Computadora *ptr = pcs.buscar(pc3);

    if(ptr!=nullptr){
        cout<<*ptr<<endl;
    }
    else
    {
        cout<<"NO existe";
    }*/

    
    /*
    ArregloDinamico<string> ad;
    ad.insertar_final("Que_hubo");
    ad.insertar_final("Que_tal");
    ad.insertar_inicio("Que_onda");
    ad.insertar_inicio("Hola");
    mostrar(ad);
    ad.insertar("Que_gusto_de_verte",2);
    mostrar(ad);
    /*
    ad.eliminar_inicio();
    ad.eliminar_final();
    ad.eliminar(1);
    mostrar(ad);
    string *v = ad.buscar("Que_onda");
    cout<<endl<< *v <<" ";
    */

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