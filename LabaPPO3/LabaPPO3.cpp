#include <iostream>

enum Letters : int {
	H = 65 + 7,
	e = 97 + 4,
	l = 97 + 11,
	o = 97 + 14,
	W = 65 + 22,
	r = 97 + 17,
	d = 97 + 3,
	space = 32,
	excl = 33
};

char Letters_to_char(int character) {
	return static_cast<char>(character);
}

char Repeat_letter_twitce(int letter)  {
	std::cout << Letters_to_char(letter);
		return Letters_to_char(letter);
}

int main() {
	std::cout << Letters_to_char(Letters::H) << Letters_to_char(Letters::e); 
	std::cout << Repeat_letter_twitce(Letters::l) << Letters_to_char(Letters::o) <<
		Letters_to_char(Letters::space) << Letters_to_char(Letters::W) << Letters_to_char(Letters::o) << Letters_to_char(Letters::r) <<
		Letters_to_char(Letters::l) << Letters_to_char(Letters::d) << Letters_to_char(Letters::excl);
}
