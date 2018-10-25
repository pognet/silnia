#include <stdio.h>

int licz_silnie(int podstawa) {
    if (podstawa == 0) {
        return 1;
    } else {
        int licznik;
        int silnia=1;

        for (licznik = 1; licznik <= podstawa; ++licznik) {
            silnia *= licznik;
        }
        return silnia;
    }
}

int main() {
   int podstawa;
   int wynik;

   printf("Podaj podstawę silni w przedziale 0 do 15: \n");
   scanf("%d", &podstawa);

   if(podstawa >= 0 && podstawa <= 15){
       wynik = licz_silnie(podstawa);
       printf("silnia : %d", wynik);

   }
   else {
       printf("Podałeś liczbę z poza zakresu! \n");
   }
    return 0;
}