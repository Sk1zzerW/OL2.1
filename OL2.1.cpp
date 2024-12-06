#include <iostream>


int main() {
    double distance, minutes, seconds;

    std::cout << "калькулятор быстроты\n";
    std::cout << "введите дистанцию (м) = ";
    std::cin >> distance;

    std::cout << "время (мин. сек. (через точку)) ";
    std::cin >> minutes;

    seconds = (minutes - static_cast<int>(minutes)) * 100;
    minutes = static_cast<int>(minutes);

    double totalSeconds = minutes * 60 + seconds;
    double speed = (distance / 1000.0) / (totalSeconds / 3600.0);

    std::cout << "дистанция: " << distance << " м\n";
    std::cout << "время: " << static_cast<int>(minutes) << " мин "
        << static_cast<int>(seconds) << " сек = "
        << totalSeconds << " сек\n";
    std::cout << "ваша скорость  "
        << speed << " км/ч.\n";

    return 0;
}