
#include "dosya.hpp"
#include <string>
#include<iostream>
using namespace std;
void dosya::dosyaoku()
{
    ifstream dosyaOku("doc/Veri.txt");
  

  if ( dosyaOku.is_open() ){        

    while(getline(dosyaOku, satir))          //Satır sonuna kadar okuma döngüsü.
    {
        
        karakter=satir.substr(0,1);         //okuduğu satırın ilk harifini alıyor.
        int sayi=stoi(satir.substr(2));     //stringin 2. değerinden sonraki değeri inte çevriyor ve sayiya atıyor.
      if(karakter==ekle)
        {  
            satir.erase(satir.end() - 1);   //stringin sonuncu değerini siliyor.
            bulundu=satir.find('#');        //# nin indisini bulup bulunduya atıyor.
            isim=satir.substr(bulundu+1);   
             a->ekle(isim,sayi);            //listeye isim stringinde sayıncı yere elemanı ekliyor.
           
        }
        else
        {
            a->cikar(sayi);               // sayıncı elemanı çıkarıyor.
        }
    }      
    

    dosyaOku.close();
  }
}
void dosya::yazdir()                      //ekrana yazdırılıyor.
{
    a->yazdir();
}
