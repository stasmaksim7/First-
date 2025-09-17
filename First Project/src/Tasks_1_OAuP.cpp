// Задачи 1 по ОАиП

// Задание 1
//#include <iostream>
//using namespace std;
//int main() {
//	int a;
//	cout << "Введите:";
//	cin >> a;
//	cout << "Кол-во метров:" << a / 100 << endl;
//	cout << "Кол-во сантиметров:" << a % 100 << endl;
//	return 0
//}

// Задание 2
//#include <iostream>
//using namespace std;
//int main() {
//	int a,b;
//	cout << "Введите длину:" << endl;
//	cin >> a;
//	cout << "Введите ширину:" << endl;
//	cin >> b;
//	cout << "Площадь прямоугольника:" << a * b << endl;
//	return 0;
//}
//

// Задание 3
//#include <iostream>
//using namespace std;
//int main() {
//	float a = 0;
//	cout << "Введите температу в градусах цельсия:"<<endl;
//	cin >> a;
//	float b = (a * 1.8 ) + 32;
//	cout << "Температура по фарингейту:" << b << endl;
//	return 0;
//}

// Задание 4
//#include <iostream>
//using namespace std;
//int main() {
//	int a;
//	cout << "Введите число:" << endl;
//	cin >> a;
//	if (a % 2 == 0){
//		cout << "Число четное" << endl;
//	}
//	else {
//		cout << "Число нечетное" << endl;
//	}
//	return 0;
//}

// Задание 5
//#include <iostream>
//using namespace std;
//int main() {
//	int a;
//	cout << "Введите число:" << endl;
//	cin >> a;
//	if ((a % 3 == 0) && (a % 5 == 0)) {
//		cout << "Число делится и на 5, и на 3" << endl;
//	}
//	else if (a % 3 == 0) {
//		cout << "Число делится только на 3" << endl;
//	}
//	else if (a % 5 == 0) {
//		cout << "Число делится только на 5" << endl;
//	}
//	else {
//		cout << "Число не делится ни на 5, ни на 3" << endl;
//	}
//	return 0;
//}

// Задание 6
//#include <iostream>
//using namespace std;
//int main() {
//	int a;
//	cout << "Введите свой возраст:" << endl;
//	cin >> a;
//	if (a < 18) {
//		cout << "Ваш возраст меньше 18" << endl;
//	}
//	else if (a <= 60) {
//		cout << "Ваш возраст от 18 до 60 включительно" << endl;
//	}
//	else {
//		cout << "Ваш возраст больше 60" << endl;
//	}
//	return 0;
//}

// Задание 7
//#include <iostream>
//using namespace std;
//int main() {
//	int a;
//	cout << "Введите число:" << endl;
//	cin >> a;
//	for (int i = 1;i <= a;i++) {
//		cout << i*i << endl;
//	}
//	return 0;
//}

// Задание 8
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	int flag = 1;
//	int k = 0;
//	string Ls[] = {"e","y","u","i","o","a","E","Y","U","I","O","A"};
//	while (flag != 0) {
//		string a;
//		cout << "Введите букву:"<< endl;
//		cin >> a;
//		if (a == "0"){
//			flag = 0;
//			break;
//		}
//
//		for (int i = 0; i < 12; i++) {
//			if (Ls[i] == a) {
//				k += 1;
//			}
//		}
//	}
//	cout << "Кол-во гл:" << k << endl;
//	return 0;
//}

// Задание 9
//#include <iostream>
//using namespace std;
//int main() {
//	int n;
//	cout << "Введите кол-во элементов:";
//	cin >> n;
//	int S = 0;
//	for (int i = 1; i < (n+1); i++) {
//		if ((i % 2 == 0) && (i % 5 == 0)) {
//			S += i;
//		}
//		else if (i % 2 == 0){
//			S += i;
//		}
//		else if (i % 5 == 0){
//			S += i;
//		}
//	}
//	cout << "Сумма всех элементов:" << S;
//	return 0;
//}

// Задание 10
//#include <iostream>
//using namespace std;
//int main(){
//	int a;
//	cout << "Введите число:";
//	cin >> a;
//	if (a == 0) {
//		cout << "Равно нулю";
//	}
//	else if (a > 0){
//		cout << "Полож";
//	}
//	else if (a < 0){
//		cout << "Отриц";
//	}
//	return 0;
//}

// Задание 11
//#include <iostream>
//using namespace std;
//int main() {
//	int k = 32;
//	for (char i = ' '; i <= '~';i++) {
//		cout << k << "-й элемент: "<< i << endl;
//		k++;
//	}
//	return 0;
//}
























