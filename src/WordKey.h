/*
 * DictionaryKey.h
 *
 *  Created on: 31 окт. 2014 г.
 *      Author: Lunix
 */

#ifndef SRC_WORDKEY_H_
#define SRC_WORDKEY_H_

#include <string>

#include "PartOfSpeech.h"

namespace engocab {

class WordKey {

	std::string mWord;

	PartOfSpeech mPartOfSpeech;

	int mNumber;

public:
	WordKey();

	WordKey(const WordKey&) = default;

	WordKey(std::string enWord, PartOfSpeech partOfSpeech, int number);

	virtual ~WordKey() = default;

	bool operator==(const WordKey&);

};

}

#endif /* SRC_WORDKEY_H_ */
