#include <iostream>

using namespace std;

//////1
struct Person {
	int ID;
	char firstName[30];
	char lastName[30];
};
/////////2
void DisplayArrayofPerson(Person n[]) {
	for (int i = 0; i <= n[i].ID; i++)
	{
		cout << n[i].ID << " ";
		cout << n[i].firstName << " ";
		cout << n[i].lastName << " ";
		cout << endl;
	}
}
///////4
void Fun4(Person* n, int ID, const char firstName[], const char lastName[]) {
	n->ID = ID;
	strcpy_s(n->firstName, firstName);
	strcpy_s(n->lastName, lastName);
	DisplayArrayofPerson(n);


}
////////
void FindNameByLastName(Person n[]) {
	char find[30];
	cout << "-------------------------" << endl;
	cout << "Enter last name to search: ";
	cin >> find;
	int nnum = 1;
	if (*find >= 97 && *find <= 122) { // переведення 1 літери з маленької на велику(якщо така є)
		*find -= 32;
	}
	while (find[nnum] != NULL) { // переведення усіх маленьких літер від другої до останьої з великих на маленькі(якщо такі є) 
		if (find[nnum] >= 65 && find[nnum] <= 90)
			find[nnum] += 32;
		nnum += 1;
	}
	int nr = 0;
	int k = 0;
	int num = 0;
	int kil[30];
	int numm = 0;
	nnum = 1;
	int h = 0;
	while (find[num] != NULL) //  йде перевірка скільки символів у прізвищі яку ввели
	{
		num++;
	}
	cout << "last name for search: " << find << endl;
	for (; h <= n[h].ID; h++) // йде перевірка усіх інших прізвищ у базі на кіл-сть їх символів
	{
		while (n[h].lastName[numm] != NULL)
		{
			numm++;
			kil[h] = nnum++;;
		}
		numm = 0; // скидання до 0 для того, щоб цикл почав йти заново, а не зупинився на 1 прізвищі
		nnum = 1; // для правильного відображнная кількостьі символів у прізвищі, якщо буде 0 то підрахунок буде на 1 символ менше
	}
	for (int i = 0; i <= n[i].ID; i++) // цикл для кожного прізвища у базі 
	{
		if (num == kil[i]) // якщо кіл-сть символів у введеному прізвищі, співпадає з кілкістью у якомусь з випадків то починається код нижче
		{
			int num2 = kil[i] - 1;
			for (int j = 0; j <= n[j].ID; j++) // написав j щоб "і" залишилось при своєму числі і перевірка шла у корректного прізвища
			{
				if (n[i].lastName[k] == find[k] && n[i].lastName[num2] == find[num2]) { // йде перевірка кожної літери по черзі і також середньої літери
					nr = i; // записування яка це по порядку була людина, щоб її потім вивести з бази
					k++; // пересування літер вправо на один для перевірки 
				}
				else
				{
					k = 0; // сбрасування літер до самого початку

				}
				if (nr > 0 && k == h) {
					j = 100;
				}

			}
		}
	};
	cout << n[nr].ID << " " << n[nr].firstName << " " << n[nr].lastName;

}

int main()
{
	////////4
	Person* n = new Person;
	// Fun4(n, 1, "qwerty", "ytrewq");
	//////3
	Person* DynamicznaTablica = new Person[100];


	Person baza[100] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
	baza[0].ID = 1;
	strcpy_s(baza[0].firstName, "Alexey");
	strcpy_s(baza[0].lastName, "Petrov");
	baza[1].ID = 2;
	strcpy_s(baza[1].firstName, "Oleksandr");
	strcpy_s(baza[1].lastName, "Mikheev");
	baza[2].ID = 3;
	strcpy_s(baza[2].firstName, "Vladyslav");
	strcpy_s(baza[2].lastName, "Levov");
	baza[3].ID = 4;
	strcpy_s(baza[3].firstName, "Igor");
	strcpy_s(baza[3].lastName, "Kim");
	baza[4].ID = 5;
	strcpy_s(baza[4].firstName, "Viktoria");
	strcpy_s(baza[4].lastName, "Kronova");
	baza[5].ID = 6;
	strcpy_s(baza[5].firstName, "Stanislav");
	strcpy_s(baza[5].lastName, "Kronov");
	baza[6].ID = 7;
	strcpy_s(baza[6].firstName, "Petro");
	strcpy_s(baza[6].lastName, "Kovalov");
	baza[7].ID = 8;
	strcpy_s(baza[7].firstName, "Slava");
	strcpy_s(baza[7].lastName, "Kostin");
	baza[8].ID = 9;
	strcpy_s(baza[8].firstName, "Vasylysa");
	strcpy_s(baza[8].lastName, "Kostiv");



	DisplayArrayofPerson(baza);

	FindNameByLastName(baza);







}
