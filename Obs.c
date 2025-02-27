#include <stdio.h>
#define kisi 5
int main() {
    int secim,i,j,giren = 0;
    float ortalama,ogrenci_ortalama = 0,sinif_toplam = 0,sinif_ortalama = 0;
    int vize[kisi], final[kisi];
    int bir,bir_iki;
    int iki, iki_iki;
    int uc, uc_iki;
    int dort,sinav_girmeyen;
    int bes,bes_iki = 0,bes_uc = 0;

    for(j = 0; j < kisi; j++){
    vize[j] = -1;
    final[j] = -1;
    }


    while (1) {
        printf("[1] Bilgi Girisi \n[2] Listeleme \n[3] Ortalama Hesapla \n[4] Notu Girilmeyen Ogrencileri Listele\n[5] Istatistik Bilgisi\n[6] Cikis\n");

        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Butun ogrencilerin notlarini girmek icin 1'i, sadece bir kisinin vize ve final notlarini girmek icin 2'yi tuslayiniz, ana menuye donmek icin 3'u tuslayiniz\n");
                printf("Seciminiz? ");
                scanf("%d", &bir);
                while(bir != 1 && bir != 2 && bir != 3){
                    printf("Gecersiz secim yaptiniz ");
                    scanf("%d", &bir);
                }
                      if(bir == 1){
                        for(i = 0;i<kisi; i++){
                            printf("120 kisiye ait vize ve final notlarini giriniz: ");
                            scanf("%d %d", &vize[i], &final[i]);
                        while(vize[i] < 0 || vize[i] > 100 || final[i] < 0 || final[i] > 100){
                            printf("Vize ya da Final notu 0'dan kucuk ve 100'den buyuk olamaz: ");
                            scanf("%d %d", &vize[i], &final[i]);
                        }

                    }
                
                }  
                    else if(bir == 2){
                        printf("Not girmek istediginiz kisinin numarasini giriniz (1 - %d arasindan): ", kisi);
                        scanf("%d", &bir_iki);
                    while(bir_iki < 0 || bir_iki > kisi){
                        printf("Gecersiz secim yaptiniz ");
                        scanf("%d", &bir_iki);
                    }
                    if (bir_iki >= 1 && bir_iki <= kisi) {
                        printf("%d. kisinin vize ve final notlarini giriniz: ", bir_iki);
                        scanf("%d %d", &vize[bir_iki - 1], &final[bir_iki - 1]);
                        while(vize[bir_iki - 1] < 0 || vize[bir_iki - 1] > 100 || final[bir_iki - 1] < 0 || final[bir_iki - 1] > 100){
                            printf("Vize ya da Final notu 0'dan kucuk ve 100'den buyuk olamaz: ");
                            scanf("%d %d", &vize[bir_iki - 1], &final[bir_iki - 1]);
                        }
                        printf("%d. kisinin vize notu: %d, final notu: %d olarak kaydedildi\n", bir_iki, vize[bir_iki - 1], final[bir_iki - 1]);
                    } 
                      }
                    else if(bir == 3){
                        break;
                    }

            
                
                break;


            case 2:
                printf("Tum ogrencilerin listesi icin 1'i, sadece bir ogrencinin bilgilerini goruntulemek icin 2'yi tuslayiniz ,ana menuye donmek icin 3'u tuslayiniz\n");
                printf("Seciminiz? ");
                scanf("%d", &iki);

                while(iki != 1 && iki != 2 && iki != 3){
                    printf("Gecersiz secim yaptiniz ");
                    scanf("%d", &iki);
                }

                if(iki == 1){
                    for(i = 0; i < kisi; i++){
                        if(vize[i] != -1 && final[i] != -1){
                            printf("%d. ogrenci: vize notu: %d, final notu: %d\n", i + 1, vize[i], final[i]);
                        }
                        else{
                            printf("%d. ogrencinin sinav sonucu bulunamiyor\n",i+1);
                        }
                    }
                }
                else if(iki == 2){
                    printf("Istediginiz kisinin numarasini giriniz (1 - %d arasindan) ", kisi);
                    scanf("%d", &iki_iki);
                    while(iki_iki < 0 || iki_iki > kisi){
                        printf("Gecersiz secim yaptiniz ");
                        scanf("%d", &iki_iki);
                    }
                        if(vize[iki_iki - 1] == -1 && final[iki_iki - 1] == -1){
                            printf("Kisinin sinav sonucu bulunmuyor\n");
                            } else if(vize[iki_iki - 1] != -1 && final[iki_iki - 1] != -1){
                                printf("%d. ogrenci: vize notu: %d, final notu: %d\n", iki_iki, vize[iki_iki - 1], final[iki_iki - 1]);
                                }
                                else{
                                    printf("Gecersiz secim yaptiniz \n");
                                }                   
                            }
                        
                
                else if(iki == 3){
                    break;
                }
                break;

            case 3:
                printf("Tum ogrencilerin ortalamalarini goruntulemek icin 1'i ,bir kisinin ortalamasini goruntulemek icin 2'yi, ana menuye donmek icin 3'u tuslayiniz\n");
                printf("Seciminiz? ");
                scanf("%d", &uc);

                while(uc != 1 && uc != 2 && uc != 3){
                    printf("Gecersiz secim yaptiniz ");
                    scanf("%d", &uc);
                }
                if(uc == 1){
                    for (i = 0; i < kisi; i++) {
                        if(vize[i] != -1 && final[i] != -1){
                            ortalama = vize[i] * 0.4 + final[i] * 0.6;
                            printf("%d. ogrencinin ortalamasi: %f\n", i + 1, ortalama);
                        }
                        else{
                            printf("%d. ogrencinin sinav sonuclari bulunamiyor\n",i + 1);   
                        }
                            
                    }    
                }
                else if(uc == 2){
                    printf("Istediginiz kisinin numarasini giriniz (1 - %d arasindan) ", kisi);
                    scanf("%d", &uc_iki);
                    while(uc_iki < 0 || uc_iki > kisi){
                        printf("Gecersiz secim yaptiniz ");
                        scanf("%d", &uc_iki);
                    }
                    if (vize[uc_iki - 1] == -1 && final[uc_iki - 1] == -1){
                        printf("Kisinin sinav sonuclari bulunmuyor\n");
                    }else if(vize[uc_iki - 1] != -1 && final[uc_iki - 1] != -1){
                        ortalama = vize[uc_iki - 1] * 0.4 + final[uc_iki - 1] * 0.6;
                        printf("Sectiginiz ogrencinin ortalamasi = %f\n",ortalama);
                    } 
                    else {
                        printf("gecersiz secim yaptiniz ");
                    }                                                    

                }
                else if(uc == 3){

                    break;
                }
                break;

            case 4:
                printf("Sinava girmeyen ogrencileri listelemek icin 1'i, ana menuye donmek icin 2'yi tuslayiniz\n");
                printf("Seciminiz? ");
                scanf("%d", &dort);

             while (dort != 1 && dort != 2) {
                    printf("Gecersiz secim yaptiniz! ");
                     scanf("%d", &dort);
                }

                    if (dort == 1) {
                        for (i = 0; i < kisi; i++) {
                            if (vize[i] == -1 && final[i] == -1) {
                                printf("%d. ogrenci vize ve finale girmedi \n", i + 1);
                                sinav_girmeyen = 1;
                            }
                        }
                        if(!sinav_girmeyen){
                            printf("Sinava girmeyen ogrenci yok! \n");
                        }
                    } else if (dort == 2) {
                        break;
                    }
                        break;

            case 5:
                printf("Tum sinifin not ortalamasinin gormek icin 1'i, sinava giren kisi sayisini gormek icin 2'yi, sinava girmeyen kisi sayisini goruntulemek icin 3'u, ana menuye donmek icin 4'u tuslayiniz.\n");
                printf("Seciminiz? ");
                scanf("%d", &bes);

                while (bes != 1 && bes != 2 && bes != 3 && bes != 4) {
                    printf("Gecersiz secim yaptiniz! ");
                    scanf("%d", &bes);
                }

                if(bes == 1){
                    for (i = 0; i < kisi; i++) {
                        if (vize[i] != -1 && final[i] != -1) {
                            float ogrenci_ortalama = vize[i] * 0.4 + final[i] * 0.6;
                            sinif_toplam += ogrenci_ortalama;
                            giren++;
                        }
                    }
                        
                        if(giren > 0){
                          sinif_ortalama = sinif_toplam / giren;
                          printf("Sinifin not ortalamasi = %f\n", sinif_ortalama);
                        }
                        else {
                            printf("Sinava giren ogrenci bulunmuyor \n");
                        }
                    
                } 
                    
                else if(bes == 2){
                    bes_iki = 0;
                    for(i = 0; i < kisi; i++){
                        if(vize[i] != -1 && final[i] != -1){
                            bes_iki++;
                        }
                    }
                    printf("Sinava giren ogrenci sayisi = %d \n",bes_iki);
                }
                else if(bes == 3){
                   bes_uc = 0;
                   for(i = 0; i < kisi; i++){
                        if(vize[i] == -1 && final[i] == -1){
                            bes_uc++;
                        }
                    }
                    printf("Sinava girmeyen ogrenci sayisi = %d \n",bes_uc); 
                }
                if(bes == 4){
                    break;
                }
                break;
            case 6:
                printf("Cikis yapiliyor...\n");
                return 0; 

            default:
                printf("Gecersiz bir secim yaptiniz!\n");
                break;
        }
    }
    return 0;
}
