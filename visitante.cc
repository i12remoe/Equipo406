#include "visitante.h"
#include "curso.h"
#include <vector>
#include <list>
#include <iostream>

void visitante::ver_curso(class Curso c){
    std::vector<int> v = c.get_valoracion();
    int nEle = v.size();
    int suma, media =0;
    for (int i=0; i<nEle ; i++){
        suma = suma + v[i];
    }
    media = (suma/nEle);

    std::cout << "La id del curso es " << c.get_id() << "." << std::endl;
    std::cout << "La descripción del curso es " << c.get_descripcion() << "." << std::endl;
    std::cout << "La fecha de inicio es "<< c.get_fecha_inicio() << ", y la fecha de finalización es "<< c.get_fecha_final() << "." << std::endl;
    std::cout << "La valoración media del curso es " << media << "." << std::endl;
    std::cout << "El aforo del curso es " << c.get_aforo() << "." << std::endl;

    std::list<std::string> l_participantes = c.get_lista_participantes();
    std::list<std::string> l_lista_espera = c.get_lista_participantes();
    std::list<std::string>::iterator i;

    i=l_participantes.begin();
    std::cout << "El curso tiene "<< l_participantes.size() << " participantes.\nLa lista de participantes es..." << std::endl;
    for(i; i!=l_participantes.end(); ++i){
        std::cout << *i << std::endl;
    }
    i=l_lista_espera.begin();
    std::cout << "El curso tiene "<< l_participantes.size() << " participantes.\nLa lista de nombres es..." << std::endl;
    for(i; i!=l_lista_espera.end(); ++i){
        std::cout << *i << std::endl;
    }
}