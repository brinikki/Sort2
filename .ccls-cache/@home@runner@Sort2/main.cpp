#include <iostream>
using namespace std;
# include <vector>

int main()
{

  int amount;
  int i;
  int counter;

  cout << endl;
  cout << "\033[34mHow many numbers are in the sequence?\033[0m ";
  cin >> amount;

  vector <int> vec(amount + 1);
  cout << endl;
 
  for (i = 1; i <= amount; i++)
  {
    cout << "Enter number: ";
    cin >> vec.at(i);
    cout << endl;
  }

  cout << "\033[34mThe sequence in ascending order is: \033[0m| ";
 
  for (counter = 0; counter <= 100000000; counter++)
  {
    for (i = 1; i <= amount; i++)
    {
      if (counter == vec.at(i))
      {
        cout << vec.at(i) << " | " ;
      }
    }
  }
 
  return 0;
}