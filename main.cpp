#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace  std;

int main(void)
{
  int num, guess, tries=0;
  srand(time(0));
  num = rand() % 100 + 1;
  cout << "Guess my number" << endl;
  do
  {
    cout << "Enter a guess between 1 and 100: " << endl; cin >> guess;
    tries++;
    if (guess>num)
    cout << "Too high!";
    else if (guess<num)
    cout << "Too low!";
    else cout << endl << "Correct! You got it in " << tries << " guesses!";
  } while (guess!=num);
  return 0;
}
