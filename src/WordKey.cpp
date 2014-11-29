/*
 * DictionaryKey.cpp
 *
 *  Created on: 31 ���. 2014 �.
 *      Author: Lunix
 */

#include "WordKey.h"

namespace engocab {

WordKey::WordKey(std::string word, PartOfSpeech partOfSpeech, int number) : mWord(word),
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

} /* namespace engocab */
