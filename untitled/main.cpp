#include <QCoreApplication>
#include <iostream>
#include "draw.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int rows;
    cout<<"Enter the number of rows"<<endl;
    cin >> rows;


   drawPyramid(rows);


    return a.exec();
}
