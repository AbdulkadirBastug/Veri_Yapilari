
#include "Liste.hpp"
#include <iostream>
#include<iomanip>

Liste::Liste()                              //Kurucu fonksiyon olusturuluyor.
{
    ilk=0;
    dugumSayisi=0;
     
   
}
Liste::~Liste()                             // yıkıcı fonksiyon oluşturuluyor.   
  {
        Dugum* gecici = ilk;

        for(int i=0;i<dugumSayisi;i++)
        {
            Dugum* silinecek = gecici;

            gecici= gecici->sonraki;
            delete silinecek;
        }



    }
 Dugum* Liste:: dugumGetir(int sira)        //istenilen düğümü getiriyor.
    {
        if(sira<0||sira>=dugumSayisi)       //siranın düğümsayısından büyük verya 0 dan küçük olma durumuna bakıyor.
            return 0;
        
        Dugum* gec= ilk;
        
        for(int i=0;i<sira;i++)             //bi sonraki düğüme atlıyor.
        {
            gec=gec->sonraki;
        }
        return gec;                         //o sıradaki düğümü geri donduruyor.
    }
void Liste::ekle(string veri,int sira)      //Listeye ekleme yapıyor.
{
    
    Dugum* yeni = new Dugum(veri);
    

        if(ilk==0)                          //eğer liste boşsa ilk düğüme atanıyor eklenilen.
        {
            
            ilk = yeni;
            ilk->sonraki=yeni;
            ilk->onceki=yeni;
            
            
        }
        else
        {
            
            Dugum* son = dugumGetir(dugumSayisi-1);// son düğüm ve ilk düğümün yeni düğümle bağllantıları yapıldı.
            if(son==0) return;
            son->sonraki=yeni;
            yeni->onceki=son;
            yeni->sonraki=ilk;
            ilk->onceki=yeni;
            Dugum* gec=yeni;        
            for(int i=0;i<(dugumSayisi-sira);i++)//eklenmek istenilen yerdeki düğümün boşaltmak için diğer düğümler sağa doğru kopyalanıyor.
            {
                gec->veri=gec->onceki->veri;
                gec=gec->onceki;
             }
            gec->veri=yeni->veri;
        }
        dugumSayisi++;
}
void Liste::yazdir()                            //Liste yazdırılıyor.
{
    using namespace std;
    Dugum* gecici = ilk;
    cout<<"-------------------------------"<<endl; 
    cout<<setw(15)<<"Adres:"<<setw(15)<<"Veri:"<<setw(15)<<"Sonraki:"<<setw(15)<<"Onceki:"<<endl; 
    cout<<"-------------------------------"<<endl;  
    for(int i=0;i<dugumSayisi;i++)
    {
        cout<<setw(15)<<gecici<<setw(15)<<gecici->veri<<setw(15)<<gecici->sonraki<<setw(15)<<gecici->onceki<<endl;
        cout<<"-------------------------------"<<endl;
        gecici= gecici->sonraki;  
    }
          
}

void Liste::cikar(int sira)                     
{

     Dugum* silinecek = dugumGetir(sira);       //Silinecek elemanın olduğu yere soldan sağa kopyalanıyor ve son düğüm siliniyor.
        
        if(silinecek==0) return;
    for(int i=0;i<(dugumSayisi-sira-1);i++)
    {
        silinecek->veri=silinecek->sonraki->veri;
        silinecek=silinecek->sonraki;

    }
    silinecek->onceki->sonraki=ilk;
    ilk->onceki=silinecek->onceki;
    delete silinecek;
    dugumSayisi--;
}
