#include <iostream>
using namespace std;

int main() {
  int ch, res;
  cout << "Задание № 1" << endl;
  cout << "Введите пятизначное число: " << endl;
  cin >> ch;
  for (int i = 0; i < 5; i++)
  {
   res = ch % 10;
   cout << res << endl;
   ch = ch / 10;
  }
  cout << "Задание № 2" << endl;

  char a;
  cout << "Введите латинскую букву нижнего регистра: " << endl;
  cin >> a;
  a = toupper(a);
  cout << a << endl;

  cout << "Задание № 3" << endl;
 int b; float sum, res2;
  cout << "Введите размер массива: " << endl;
  cin >> b;
  int arr [b];
  for (int i = 0; i < b; i++)
 {
  cout << "Введите элемент маассива № " << i + 1 << endl;
  cin >> arr[i];
  sum += arr[i];
 }
 
res2 = sum / b;
cout << "Среднее арифметическое массива = " << res2;




  
  
}