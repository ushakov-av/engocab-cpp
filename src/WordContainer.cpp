/*
 * WordContainer.cpp
 *
 *  Created on: 31 ���. 2014 �.
 *      Author: Lunix
 */

#include "WordContainer.h"

namespace engocab {

engocab::WordContainer::WordContainer(const WordKey& wordKey) : mWordKey(wordKey) { }

void engocab::WordContainer::addWordRecord(const WordRecord& wordRecord) {
	mRecords.push_back(wordRecord);
}

bool engocab::WordContainer::operator ==(const WordContainer& wordContainer) {
	return mWordKey == wordContainer.getWordKey();
}



}


