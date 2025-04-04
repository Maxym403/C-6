// ДЗ 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <windows.h>
//void Line(int len, char sym, int color, bool horizontal) {
  //  SetColor(color);
   // if (horizontal) {
  //     for (int i = 0; i < len; i++) {
   //         cout << sym;
  //      }
  //      cout << "\n";
 //   }
 //   else {
 //       for (int i = 0; i < len; i++) {
 //           cout << sym << "\n";
  //      }
 //   }
//}
//int main() {
   // Line(20, '@', 12, true);
//}


//void SetColor(int color) {
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//void Rectangle(int width, int height, char border, char filling, int borderColor = 7, int fillColor = 7) {
    //for (int i = 0; i < height; i++) {
       // for (int j = 0; j < width; j++) {
           // if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
              //  SetColor(borderColor);
              //  cout << border;
           // }
           // else {
              //  SetColor(fillColor);
              //  cout << filling;
            //}
        
       // }
      //  cout << "\n";
   // }
//}
//int main() {
    //Rectangle(10, 5, '*', '-', 12, 14);
//}
//int cube (int num) {
    //return num * num * num;
//}
//int main() {
   // int num;
   // cout << "Введіть число: ";
   // cin >> num;
   // cout << cube(num) << "\n";
//}


//bool audit(int n) {
//    if (n <= 1)  return false;
//    for (int i = 2; i * i <=n; i++) {
 //       if (n % i == 0) return false;
//   }
//    return true;
//}

//int main() {
//  int num;
//  cout << "Введіть число\n";
//  cin >> num;

//  if (audit(num)){
//      cout << "Є просте число\n";
//  }
//  else {
//      cout << "Є просте число\n";
//  }

//int parameters(int a, int b, int sum = 0) {
  //  for (int i = a + 1; i < b; i++) {
  //      sum += i;
  //  }
  //  return sum;
//}

//int mine() {
 //   int a;
  //  int b;
  //  int result = parameters(a, b);
  //  cout << "Введіть a\n";
 //  cin >> a;
 //   cout << "Введіть b\n";
 //   cin >> b;

 //   cout << result << "\n";
//}

//bool intercalary(int year) {
  //  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//int date_total(int day, int month, int year) {
   // int monthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   // for (int y = 0; y < year; y++) {
      //  day += intercalary(y) ? 366 : 365;
       // for (int m = 0; m < month - 1; m++) {
         //   day += monthDays[m];
         //   if (m == 1 && intercalary(year)) day++;
       // }

   // }
   // return ;
//}

 //int date_between(int d1, int m1, int y1, int d2, int m2, int y2) {
   //  int time1 = date_total(y1, m1, d1);
   //  int time2 = date_total(y2, m2, d2);

   //  return abs(time2 - time1);

// }
//
 //int mine() {
   //  int d1 = 23, m1 = 6, y1 = 1993;
    // int d2 = 21, m2 = 5, y2 = 2025;
   //  cout << date_between(d1, m1, y1, d2, m2, y2) << "\n";
//}


//void setConsoleColor() {
   // int color = 1 + rand() % 15; 
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}

//void Draw(int x, int y, int value) {
  //  const char* faces[6] = {
     //   "╔═════╗\n"
     //   "║     ║\n"
     //   "║  ●  ║\n"
     //   "║     ║\n"
    //    "╚═════╝\n",


     //   "╔═════╗\n"
      //  "║ ●   ║\n"
      //  "║     ║\n"
      //  "║   ● ║\n"
      //  "╚═════╝\n",


     //   "╔═════╗\n"
     //   "║ ●   ║\n"
      //  "║  ●  ║\n"
      //  "║   ● ║\n"
      //  "╚═════╝\n",

      //  "╔═════╗\n"
      //  "║ ● ● ║\n"
     //   "║     ║\n"
     //   "║ ● ● ║\n"
     //   "╚═════╝\n",

     //   "╔═════╗\n"
     //   "║ ● ● ║\n"
     //   "║     ║\n"
      //  "║ ● ● ║\n"
      //  "╚═════╝\n",

    //    "╔═════╗\n"
    //    "║ ● ● ║\n"
    //    "║  ●  ║\n"
    //    "║ ● ● ║\n"
    //    "╚═════╝\n",
    //    "╔═════╗\n"
    //    "║ ● ● ║\n"
    //    "║ ● ● ║\n"
     //   "║ ● ● ║\n"
    //    "╚═════╝\n",
   // };
//
   // cout << faces[value - 1] << "\n";
//}
//int mine() {
  //  srand(time(0));

  //  int x = rand() % 10; 
   // int y = rand() % 5;
  //  int value = 1 + rand() % 6; 

   // Draw(x, y, value);
//}



