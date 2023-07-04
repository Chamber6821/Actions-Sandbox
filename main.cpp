#include <ranges>
#include <string>

int main() {
  using namespace std::views;

  auto generated =                                          //
      iota(0, 4)                                            //
      | transform([](auto x) { return std::to_string(x); }) //
      | transform([](auto x) { return "." + x; })           //
      | join                                                //
      | drop(1); // drop the first extra dot
}
