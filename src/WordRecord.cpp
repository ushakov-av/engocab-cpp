/*
 * WordRecord.cpp
 *
 * author Alexander V. Ushakov
 */

#include <string>

#include "WordRecord.h"

using namespace std;

namespace engocab {

engocab::WordRecord::WordRecord(const WordKey& wordKey) :  mIndex(-1), mWordKey(wordKey) { }

engocab::WordRecord::WordRecord(const string& id, int index, const WordKey& wordKey,
		const string& translation, const string& tip, const string& description)
	: mId(id), mIndex(index), mWordKey(wordKey), mTranslation(translation), mTip(tip), mDescription(description) {
}

bool WordRecord::operator ==(const WordRecord& other) {
	if (this == &other) {
		return true;
	}
	return mId == other.mId;
}

ostream& operator<<(ostream& ostr, const WordRecord& wordRecord)
{
	ostr << "WordRecord{ id = " << wordRecord.mId << ", index = " << wordRecord.mIndex
			<< ", wordKey = " << wordRecord.mWordKey << ", translation = " << wordRecord.mTranslation
			<< ", tip = " << wordRecord.mTip << ", description = " << wordRecord.mDescription;

	ostr << ", examples = [ ";
	for (const auto& example : wordRecord.getExamples()) {
		ostr << example << " ";
	}

	ostr << ", tags = [ ";
	for (const auto& tag : wordRecord.getTags()) {
		ostr << tag << " ";
	}
	ostr << "]";

	ostr << "}";
	return ostr;
}

void engocab::WordRecord::addExample(const Example& example) {
	mExamples.push_back(example);
}

void engocab::WordRecord::addTag(const std::string& tag) {
	mTags.push_back(tag);
}




} /* namespace engocab */


