#include <iostream>


using namespace std;

int a=99;

int main()
{
cout << "Welcome to the 99 Bottles of Beer Song Program!" << endl;
cout << "Progam programmed in 2010 by Xavier Galarza." << endl;
system("PAUSE");
while(1)
{
if( a >= 3) {
cout << a << " bottles of beer on the wall " << a << " bottles of beer." << endl;
cout << " " << endl;
a--;

cout << "Take one down and pass it around, " << a << " bottles of beer on the wall." << endl;
}
else {
a--;
cout << "Take one down and pass it around, " << a << " bottle of beer on the wall." << endl;
cout << " " << endl;
cout << "No more bottles of beer on the wall, no more bottles of beer. " << endl;
cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
system("PAUSE");
break;
}
}
}
