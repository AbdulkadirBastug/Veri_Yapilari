/*
 * @file        Liste.hpp
 * @description Liste.cpp nin kütüphanesi
 * @course      1.Oğretim C Grubu
 * @assignment  1.Odev
 * @date        14.11.2021
 * @author      Abdulkadir Baştuğ abdulkadir.bastug@ogr.sakarya.edu.tr 
 */
#ifndef Liste_hpp
#define Liste_hpp
#include "Dugum.hpp"
class Liste
{
public:
    Liste();
    ~Liste();
    void ekle(string veri,int sira);
    void yazdir();
    void cikar(int sira);

   Dugum* dugumGetir(int sira);
    Dugum* ilk;
    int dugumSayisi;
};

#endif