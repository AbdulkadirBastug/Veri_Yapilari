/*
 * @file        dosya.hpp
 * @description dosya.cpp nin kütüphanesi
 * @course      1.Oğretim C Grubu
 * @assignment  1.Odev
 * @date        14.11.2021
 * @author      Abdulkadir Baştuğ abdulkadir.bastug@ogr.sakarya.edu.tr 
 */
#ifndef dosya_hpp
#define dosya_hpp
#include<iostream>
#include<fstream>
#include<string>
#include "Liste.hpp"
using namespace std;
class dosya
{
public:
       void dosyaoku();
       int bulundu;
        string satir;
        string isim;
        string karakter;
        string ekle="E";
        string sil="S";
        Liste* a=new Liste();
        void yazdir();
    
    
};


#endif




