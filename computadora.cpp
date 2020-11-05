#include"computadora.h"

Computadora::Computadora()
{

}
Computadora::Computadora(const string &system, const string &name, float ram, int hdd)
{
    this->system = system;
    this->name = name;
    this->ram = ram;
    this->hdd = hdd;
}
void Computadora::setSystem(const string &v){
    system = v;
}
string Computadora::getSystem(){
    return system;
}
void Computadora::setName(const string &v){
    name = v;
}
string Computadora::getName(){
    return name;
}
void Computadora::setRam(float v){
    ram = v;
}
float Computadora::getRam(){
    return ram;
}
void Computadora::setHdd(int v){
    hdd = v;
}
int Computadora::getHdd(){
    return hdd;
}