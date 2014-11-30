/*
 * DictionaryKey.cpp
 *
 * author Alexander V. Ushakov
 */

#include <iostream>
#include <sstream>

#include "WordKey.h"

using namespace std;

namespace engocab {

WordKey::WordKey(const std::string& word, PartOfSpeech partOfSpeech, int number) : mWord(word),
		mPartOfSpeech(partOfSpeech), mNumber(number) { }

bool WordKey::operator ==(const WordKey& other) {
	if (this == &other) {
		return true;
	}
	if (mNumber != other.mNumber) return false;
	if (mWord != other.mWord) return false;
	if (mPartOfSpeech != other.mPartOfSpeech) return false;

	return true;
}

bool WordKey::operator ==(const WordKey& other) const {
	return static_cast<WordKey>(*this) == other;
}

ostream& operator<<(ostream& ostr, const WordKey& wordKey)
{
	ostr << "WordKey{ word = " << wordKey.mWord << ", partOfSpeech = " << partOfSpeechToString(wordKey.mPartOfSpeech)
			<< ", number = " << wordKey.mNumber << " }";
	return ostr;
}

} /* namespace engocab */
