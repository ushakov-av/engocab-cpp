/*
 * Example.cpp
 *
 *  Created on: 31 ���. 2014 �.
 *      Author: Lunix
 */

#include <iostream>

#include "Example.h"

using namespace std;

namespace engocab {

Example::Example(std::string wordExample, std::string translationExample, std::string phrase)
	: mWordExample(wordExample), mTranslationExample(translationExample), mPhrase(phrase) { }

std::ostream& operator<<(std::ostream& ostr, const Example& example) {
	ostr << "Example{ word = " << example.mWordExample << ", translation = " << example.mTranslationExample
			<< ", phrase = " << example.mPhrase << "}";
	return ostr;
}

}
