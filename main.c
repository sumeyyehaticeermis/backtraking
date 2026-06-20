#include <stdio.h>
#include <string.h>



void harmanla_ve_bul (char *s1, char *s2, char *sonuc_dizisi, int m,int n, int indis) {
    
   
    if (m == strlen (s1) && n== strlen (s2)) {
        sonuc_dizisi [indis] = '\0';
        printf ("bulunan harmanlama: %s\n",sonuc_dizisi);
        return;
    }
    
    
    
    if (m< strlen(s1)){
        
        sonuc_dizisi[indis] = s1[m];
        
        harmanla_ve_bul(s1,s2,sonuc_dizisi,m+1,n, indis+1);
    }
  
    
    if (n < strlen(s2)) {
        sonuc_dizisi[indis] = s2[n];
        
        harmanla_ve_bul(s1, s2, sonuc_dizisi, m, n + 1, indis + 1);
    }
}
    int main(void) {
        
        char s1[]= "XY";
        char s2[]= "Z";
        
        
        char gecici_sonuc [10];
        printf("--- backtraking ile tum olasiliklar \n");
        
        
        harmanla_ve_bul(s1,s2,gecici_sonuc,0,0,0);
        return 0;
        
    }

