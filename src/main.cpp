#include <iostream>

int main(){
  std::cout << "Average number of floors" << std::endl;
  float average = 0.0f;
  int arrShop[1];
  int arrFitClub[2];
  int arrCottage[3];
  int arrApartment[15];
  int arrSkyscraper[50];

  float general = (sizeof(arrShop)/sizeof(arrShop[0])) + 
   (sizeof(arrFitClub)/sizeof(arrFitClub[0])) + 
    (sizeof(arrCottage)/sizeof(arrCottage[0])) +
     (sizeof(arrApartment)/sizeof(arrApartment[0])) + 
      (sizeof(arrSkyscraper)/sizeof(arrSkyscraper[0]));

  average = general / 5;
  std::cout << "general " << general << std::endl;
  std::cout << "average " << average << std::endl;

  return 0;
}

// С помощью массивов объявите 5 зданий, 
// каждый элемент которых будет обозначать отдельный этаж. 
// Это могут быть совершенно разные здания: фитнес-клуб (2 этажа), 
// магазин (1 этаж), коттедж (3 этажа), квартирный дом (15) 
// и небоскрёб (50 этажей). Используя среднее арифметическое число, 
// узнайте итоговую этажность вашего “квартала”.

