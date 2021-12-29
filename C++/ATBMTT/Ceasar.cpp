#include <iostream>
using namespace std;

string encrypt(string text, int s)
{
	string result = "";

	for (int i=0;i<text.length();i++)
	{
		// M� h�a n?u l� ch? hoa
		if (isupper(text[i]))
			result += char(int(text[i]+s-65)%26 +65);

	// M� h�a n?u l� ch? thu?ng
	else
		result += char(int(text[i]+s-97)%26 +97);
	}

	return result;
}

string decrypt(string text, int s)
{
	string result = "";

	for (int i=0;i<text.length();i++)
	{
		// M� h�a n?u l� ch? hoa
		if (isupper(text[i]))
			result += char(int(text[i]-s-65)%26 +65);

	// M� h�a n?u l� ch? thu?ng
	else
		result += char(int(text[i]-s-97)%26 +97);
	}

	return result;
}
int main()
{
	string text="AWOMANGIVESANDFO";
	int s = 11;
	cout << "Text : " << text;
	cout << "\nShift: " << s;
	cout << "\nCipher: " << encrypt(text, s)<<endl;
		cout << "\nText: " << decrypt(encrypt(text, s), s)<<endl;
  system("pause");
}

