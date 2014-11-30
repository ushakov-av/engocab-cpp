/*
 * WordRecord.cpp
 *
 * author Alexander V. Ushakov
 */

#include <string>

#include "WordRecord.h"

using namespace std;

namespace engocab {

engocab::WordRecord::WordRecord(const WordKey& wordKey) :  mIndex(-1), mWordKey(wordKey) {
}

engocab::WordRecord::WordRecord(const string& id, int index, const WordKey& wordKey,
		const string& translation, const string& tip, const string& description)
	: mId(id), mIndex(index), mWordKey(wordKey), mTranslation(translation), mTip(tip), mDescription(description) {
}


} /* namespace engocab */
