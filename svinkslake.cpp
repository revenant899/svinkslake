//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//double step(double base, int exponent) {
//    return pow(base, exponent); // використовуємо функцію pow з бібліотеки cmath
//}
//
//int main() {
//    double base;
//    int exponent;
//
//    cout << "Введіть основу степеня: ";
//    cin >> base;
//
//    cout << "Введіть показник степеня: ";
//    cin >> exponent;
//
//    double result = step(base, exponent);
//    cout << base << "**" << exponent << "=" << result << endl;
//
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int sum(int num1, int num2) {
//    int sum = 0;
//    int start = min(num1, num2);
//    int end = max(num1, num2);
//
//    for (int i = start; i <= end; i++) {
//        sum += i;
//    }
//
//    return sum;
//}
//
//int main() {
//    int a, b;
//
//    cout << "Введіть перше число: ";
//    cin >> a;
//
//    cout << "Введіть друге число: ";
//    cin >> b;
//
//    int result = sum(a, b);
//    cout << "Сума чисел між " << a << " і " << b << "=" << result << endl;
//
//    return 0;
//}
//



//#include <iostream>
//
//using namespace std;
//
//bool isPerfect(int num) {
//    int sum = 0;
//
//    for (int i = 1; i <= num / 2; i++) {
//        if (num % i == 0) {
//            sum += i;
//        }
//    }
//
//    return sum == num;
//}
//
//void doskonal(int start, int end) {
//    cout << "Досконалі числа у діапазоні від " << start << " до " << end << ":" << endl;
//
//    for (int i = start; i <= end; i++) {
//        if (isPerfect(i)) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//    int start, end;
//
//    cout << "Введіть початок інтервалу: ";
//    cin >> start;
//
//    cout << "Введіть кінець інтервалу: ";
//    cin >> end;
//
//    doskonal(start, end);
//
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//void pc5(string r, string s) {
//    cout << "Ваша карта: " << r << " " << s << endl;
//}
//
//int main() {
//    string r, s;
//
//    cout << "Введіть ранг карти (6, 7, 8, 9 , 10, J, Q, K, A): ";
//    cin >> r;
//
//    cout << "Введіть масть карти (Чірва, Бубна, Хресто, Піка): ";
//    cin >> s;
//
//    pc5(r, s);
//
//    return 0;
//}




//#include <iostream>
//
//using namespace std;
//
//bool LuckyNum(int number) {
//    int f = 0;
//    int s = 0;
//
//    for (int i = 0; i < 3; i++) {
//        f += number % 10;
//        number /= 10;
//    }
//
//    for (int i = 0; i < 3; i++) {
//        s += number % 10;
//        number /= 10;
//    }
//
//    return f == s;
//}
//
//int main() {
//    int number;
//
//    cout << "Введіть шестизначне число: ";
//    cin >> number;
//
//    if (number < 100000 || number > 999999) {
//        cout << "Число не є шестизначним!" << endl;
//    }
//    else {
//        if (LuckyNum(number)) {
//            cout << "Число є щасливим!" << endl;
//        }
//        else {
//            cout << "Число не є щасливим." << endl;
//        }
//    }
//
//    return 0;
//}