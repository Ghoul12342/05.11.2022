#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	////1
	//const int n = 10;
	//int mas[n];
	//srand(time(nullptr));
	//for (int i = 0; i < n; i++) {
	//	mas[i] = rand()%51-20;//%51 дает диапазон от 0 до 50
	//	//rand выдает случайное число от -32768 до 32767
	//	cout << mas[i] << " ";
	//}
	//cout << endl;
	//for (int i = n - 1; i >= 0; i -= 2) {
	//	cout << mas[i] << " ";
	//}
	//2
	//const int size = 10;
	//int arr[size];
	//srand(time(nullptr));
	//for (int i = 0; i < size; i++) {
	//	arr[i] = rand() % 41 - 20;
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//int k = 0;
	//for (int i = 0; i < size; i++) {
	//	if (arr[i] < 0) {
	//		k++;
	//	}
	//}
	//cout << "k (<0) = " << k << endl;
	//Сам2
	//const int size = 10;
	//int arr[size];
	//srand(time(nullptr));
	//for (int i = 0; i < size; i++) {
	//	arr[i] = rand() % 31 - 10;
	//	if (arr[i] % 3 == 0) {
	//		cout << arr[i] << " ";
	//	}
	//}
	//cout << endl;
	//Сам3
	//const int size = 10;
	//int arr[size];
	//srand(time(nullptr));
	//for (int i = 0; i < size; i++) {
	//	arr[i] = rand() % 51 - 30;
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//int pr = 1;
	//for (int i = 0; i < size; i++) {
	//	if (arr[i] % 7 == 0) {
	//		pr = pr * arr[i];
	//	}
	//}
	//cout << pr << endl;
	//Сам4
	//const int size = 10;
	//int arr[size];
	//srand(time(nullptr));
	//for (int i = 0; i < size; i++) {
	//	arr[i] = rand() % 61 - 10;
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//int sum;
	//double sr;
	//int k;
	//for (int i = 0; i < size; i++) {
	//	if (arr[i] > 0) {
	//		k++;
	//		sum = sum + i;
	//	}
	//}
	//sr = sum / k;
	//cout << "СР = " << sr << endl;
}