#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iomanip>
#include<iostream>
using namespace std;

class Computadora
{
    string system;
    string name;
    float ram;
    int hdd;
public:
    Computadora();
    Computadora(const string &system, const string &name, float ram, int hdd);
    void setSystem(const string &v);
    string getSystem();
    void setName(const string &v);
    string getName();
    void setRam(float v);
    float getRam();
    void setHdd(int v);
    int getHdd();
    friend ostream& operator<<(ostream &out, const Computadora &c){
        
        out<<left;
        out<< setw(10) <<c.system;
        out<< setw(10) <<c.name;
        out<< setw(8) <<c.ram;
        out<< setw(8) <<c.hdd;
        out<<endl;

        return out;
    }
    friend istream& operator>>(istream &in, Computadora &c){
        

        cout<<"System: ";
        getline(cin, c.system);
        

        cout<<"Nombre: ";
        getline(cin, c.name);        

        cout<<"RAM: ";
        cin>>c.ram;

        cout<<"HDD: ";
        cin>>c.hdd; 
        
        return in;
    }
    bool operator==(const Computadora& c)
    {
        return system==c.system;
    }
    bool operator==(const Computadora& c) const
    {
        return system==c.system;
    }
};


#endif