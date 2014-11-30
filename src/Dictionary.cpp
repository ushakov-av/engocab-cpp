/*
 * Dictionary.cpp
 *
 *  Created on: 31 окт. 2014 г.
 *      Author: Lunix
 */

#include <unordered_map>

#include "Dictionary.h"
#include "WordContainer.h"

using namespace std;

namespace engocab {

void engocab::Dictionary::addContainer(WordContainer& container) {
	mWordContainers.insert(make_pair(container.getWordKey(), container));
}

bool Dictionary::contains(const WordKey& wordKey) {
	return mWordContainers.find(wordKey) != mWordContainers.end();
}

WordRecord* Dictionary::getWordRecord(const WordKey& wordKey, const std::string& recordId) {
	auto search = mWordContainers.find(wordKey);
	if (search != mWordContainers.end()) {
		WordContainer& container = search->second;
		for (auto& wordRecord : container.getRecords()) {
			if (wordRecord.getId() == recordId) {
				return &wordRecord;
			}
		}
	}
	return nullptr;
}

} /* namespace engocab */


