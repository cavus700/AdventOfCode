#pragma once
#include "AoCDay.h"

class Day6 : public AoCDay
{
public:
	Day6();
	~Day6();

	void startA(vector<string> input);
	void startB(vector<string> input);

private:
	struct letterCounter {
		explicit letterCounter() {
			letters = vector<int>(26, 0);
		}

		void add(char letter) {
			if (letter < 'a' || letter > 'z')
				throw exception("No lower case letter detected");

			letters[letter - 'a']++;
		}
		vector<int> letters;
	};
};

