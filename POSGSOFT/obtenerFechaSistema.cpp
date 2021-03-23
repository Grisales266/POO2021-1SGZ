#include<iostream>
#include<string>
#include<stdio.h>
#include<time.h>

const  std::string currentDAteTime(){
    time_t      now = time(0);
    struct tm tstruct;
    char        buf[80];
    tstruct = *localtime(&now);
    strftime(buf,sizeof(buf),"%y-%m-%d",&tstruct);
    return buf;

}
int main(){
    std::string fecha;
    std::cout<<"Fecha actual del sistema:"<<currentDAteTime()<<std::endl;
    fecha = currentDAteTime();
    std::cout<<"Esta es la fecha "<<fecha<<std::endl;

    getchar();
}