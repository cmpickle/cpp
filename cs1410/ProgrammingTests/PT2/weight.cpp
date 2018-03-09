#include <iostream>
using namespace std;

struct weight
{
	int stone, pound, ounce;
};

weight make_weight(int ounce)
{
	weight temp;

	temp.stone = ounce / 224;
	ounce %= 224;
	temp.pound = ounce / 16;
	temp.ounce = ounce % 16;

	return temp;
}

weight make_weight(int stone, int pound, int ounce)
{
	return make_weight(stone * 224 + pound * 16 + ounce);
}

weight add(weight left, weight right)
{
	int v1 = left.stone * 224 + left.pound * 16 + left.ounce;
	int v2 = right.stone * 224 + right.pound * 16 + right.ounce;

	return make_weight(v1 + v2);
}

void print(weight& w)
{
	cout << w.stone << " stones, " << w.pound << " pounds, " << w.ounce << " ounces" << endl;
}

void read(weight* w)
{
	int stone, pound, ounce;

	cout << "Input the number of stones: " << endl;
	cin >> stone;
	cout << "Input the number of pounds: " << endl;
	cin >> pound;
	cout << "Input the number of ounces: " << endl;
	cin >> ounce;

	(*w) = make_weight(stone * 224 + pound * 16 + ounce);
}

//int main()
//{
//	weight w1 = make_weight(444);
//	print(w1);
//
//	weight w2 = make_weight(22, 17, 3);
//	print(w2);
//
//	weight w3;
//	read(&w3);
//	print(w3);
//
//	cout << "w1 + w2 = ";
//	weight temp = add(w1, w2);
//	print(temp);
//
//	cout << "w2 + w3 = ";
//	temp = add(w2, w3);
//	print(temp);
//
//	return 0;
//}