

#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	string startupMessage = "Enter 20 numbers \n";
	string currentInput = "Enter number ";
	string partTwoStartupMessage = "Now enter 10 new numbers \n";
	string partTwoInputMessage = "How many times should i rotate these numbers? \n";
	vector <int> vectorOne;
	vector<int> vectorTwo;
	vector<int> vectorThree;
	vector<int> vectorFour;
	vector<int> vectorFive;
	int input;
	int rotation;
	void partOne(vector<int> vectorOne, vector<int> vectorTwo, vector<int> three, vector<int> vectorFour);
	void partTwo(vector<int> vectorFive, int rotation);

	cout << startupMessage;
	for (int i = 0; i < 20; i++)
	{
		cout << currentInput + to_string(i + 1) + "\n";
		cin >> input;
		if (i < 10) {
			vectorOne.push_back(input);
		}
		else {
			vectorTwo.push_back(input);
		}
	}
	partOne(vectorOne, vectorTwo, vectorThree, vectorFour);
	cout << partTwoStartupMessage;

	for (int i = 0; i < 10; i++)
	{
		cout << currentInput + to_string(i + 1) + "\n";
		cin >> input;
		vectorFive.push_back(input);
	}
	cout << partTwoInputMessage;
	cin >> rotation;
	partTwo(vectorFive, rotation);


}

void partOne(vector<int> vectorOne, vector<int> vectorTwo, vector<int> vectorThree, vector<int> vectorFour) {
	string one;
	string two;
	string three;
	string four;
	for (int i = 0; i < vectorOne.size(); i++)
	{
		int sum;
		int product;
		
		sum = vectorOne[i] + vectorTwo[i];
		product = vectorOne[i] * vectorTwo[i];

		vectorThree.push_back(sum);
		vectorFour.push_back(product);

		if (i == 9) {
			one = one + to_string(vectorOne[i]);
			two = two + to_string(vectorTwo[i]);
			three = three + to_string(vectorThree[i]);
			four = four + to_string(vectorFour[i]);
		}
		else {
			one = one + to_string(vectorOne[i]) + ",";
			two = two + to_string(vectorTwo[i]) + ",";
			three = three + to_string(vectorThree[i]) + ",";
			four = four + to_string(vectorFour[i]) + ",";
		}
	}
	cout << one + "\n" << two + "\n" << three + "\n" << four + "\n";
}

void partTwo(vector<int> vectorFive, int rotation) {
	string five;
	rotate(vectorFive.begin(), vectorFive.begin() + vectorFive.size() - rotation, vectorFive.end());
	for (int i = 0; i < vectorFive.size(); i++)
	{
		if (i == vectorFive.size() - 1) {
			five = five + to_string(vectorFive[i]);
		}
		else {
			five = five + to_string(vectorFive[i]) + ",";
		}
	}

	cout << five;
}


