/*
 * Dictionary.h
 *
 *  Created on: 31 окт. 2014 г.
 *      Author: Lunix
 */

#ifndef SRC_DICTIONARY_H_
#define SRC_DICTIONARY_H_

#include <unordered_map>
#include <list>
#include <set>

#include "PartOfSpeech.h"
#include "WordRecord.h"
#include "WordKey.h"

namespace engocab {

class Dictionary {

	std::unordered_map<WordKey, WordContainer> mWordContainers;

public:

	Dictionary() = default;

	virtual ~Dictionary() = default;

	void addContainer(const WordContainer&);

	void addRecord(const WordRecord&);

	bool contains(const WordKey&);

	void removeRecord(const WordRecord& record);

	WordRecord& getWordRecord(const WordKey&, std::string);

	std::set<WordContainer&> getContainers();

};

}

#endif /* SRC_DICTIONARY_H_ */
