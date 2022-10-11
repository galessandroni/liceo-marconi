#include <iostream>

using namespace std;

int fattoriale(int k) {
  if (k > 0) {
    return k * fattoriale(k - 1);
  } else {
    return 1;
  }
}

int main() {
    int n;
    cout << "Inserire il numero di cui calcolare il fattoriale: ";
    cin >> n;
  int result = fattoriale(n);
  cout << result;
  return 0;
}