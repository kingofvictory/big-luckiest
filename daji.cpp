#include <iostream>

int main()
{
  std::string start{"\e[1;33;4;41m"};
  std::string end{"\e[m"};

    std::cout << start << "牛年大吉！"       << end << "\n";
    std::cout << start << "  牛年吉祥！"     << end << "\n";
    std::cout << start << "    心想事成！"   << end << "\n";
    std::cout << start << "      牛气冲天！" << end << "\n";
    std::cout << start << "       牛运势！"  << end << "\n";
    std::cout << start << "     牛运气！"    << end << "\n";
    std::cout << start << "    牛气象！"     << end << "\n";
    std::cout << start << "  牛势力！"       << end << "\n";
    std::cout << start << "牛！"             << end << "\n";

    return 0;
}