/*
 * @file        Dugum.hpp
 * @description Dugum.cpp nin kütüphanesi
 * @course      1.Oğretim C Grubu
 * @assignment  1.Odev
 * @date        14.11.2021
 * @author      Abdulkadir Baştuğ abdulkadir.bastug@ogr.sakarya.edu.tr 
 */
#ifndef Dugum_hpp
#define Dugum_hpp
#include<string>
using namespace std;
class Dugum
{
public:
       
    Dugum(string veri);
    string veri; 
    Dugum* sonraki;
    Dugum* onceki;
    
};


#endif