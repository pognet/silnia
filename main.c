#include <stdio.h>
#include <stdbool.h>

long licz_silnie(int podstawa) {
//    if (podstawa == 0) {
//        return 1;
//    } else
    {
        long licznik;
        long silnia=1;

        for (licznik = 2; licznik <= podstawa; ++licznik) {
            silnia *= licznik;
        }
        return silnia;
    }
}

bool test_licz_silnie() {
    if (licz_silnie(0) == 1)
        if (licz_silnie(1) == 1)
            if (licz_silnie(2) == 2)
                if (licz_silnie(5) == 120){
                printf("test_licz_silnie() działa");
                return true;
    } else {
        printf("test_licz_silnie nie działa!");
        return false;
    }
}

int main() {
    test_licz_silnie();
//   long podstawa;
//   long wynik;
//
//   printf("Podaj podstawę silni w przedziale 0 do 15: \n");
//   scanf("%ld", &podstawa);
//
//   if(podstawa >= 0 && podstawa <= 15){
//       wynik = licz_silnie(podstawa);
//       printf("silnia : %ld", wynik);
//
//   }
//   else {
//       printf("Podałeś liczbę z poza zakresu! \n");
//   }
//    return 0;
}