#include <clocale>
#include <format>
#include <iostream>

int main() {
  std::setlocale(LC_ALL, "Russian");
  int cows = 33;
  std::wcout << std::format(
      L"{0} коровы, {0} коровы, {0} коровы - свежая строка\n", cows);
}
