#include <iostream>

using namespace std;

void drawPyramid(int rows){
    int i, spaces ,stars;

      for(i=1; i<=rows; i++)//контроль над рядом, начинаем отсчет от 1, чтобы первый ряд не оказался пустым
        {
          for(spaces=rows; spaces>=i; spaces--)//контроль над пробелами
            {
              cout<<"+";
            }

          for(stars=1; stars<=(2*i-1); stars++)//контроль над количеством звездочек в ряду
            {
              cout<<"*";
            }
          cout<<"\n";
        }
}
