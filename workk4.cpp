#include <iostream>
using namespace std;
int main() {
  char ch;
 float ga = 0;
  int round = 0;
  do{
    cout << "Enter the letter grade(Enter 'X' to exit)" << endl;
    cin >> ch;
    if (ch == 'x' || ch == 'X' ) 
      break;
    else if (ch == 'a'|| ch == 'A')
      ga += 4;
    else if (ch == 'b' || ch == 'B')
      ga += 3;
    else if (ch == 'c' || ch == 'C')
      ga += 2;
    else if (ch == 'd' || ch == 'D')
      ga += 1;
    else if (ch == 'f' || ch == 'F')
      ga += 0;
    else {
      cout << "Enter A B C D F Only OK?" << endl;
      round--;
    }
    round++;
  } while(ch != 'x' && ch !='X');
  cout << "Total Grade Points : " << ga << endl;
  cout << "GPA : " << ga/round << endl;
  return 0;
}
