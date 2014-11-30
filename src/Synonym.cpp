/*
 * Synonym.cpp
 *
 * author Alexander V. Ushakov
 */

#include "Synonym.h"
#include "PartOfSpeech.h"

namespace engocab {

Synonym::Synonym(const std::string id, const WordKey& wordKey) : mId(id), mWordKey(wordKey) { }

bool Synonym::operator ==(const Synonym& other) {
	if (this == &other) {
		return true;
	}
	return mId == other.mId && mWordKey == other.mWordKey;
}

} /* namespace engocab */


