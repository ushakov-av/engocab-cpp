/*
 * Dictionary.cpp
 *
 * author Alexander V. Ushakov
 */

#include <unordered_map>

#include "Dictionary.h"
#include "WordContainer.h"

using namespace std;

namespace engocab {

void engocab::Dictionary::addContainer(WordContainer& container) {
	mWordContainers.insert(make_pair(container.getWordKey(), container));
}

void engocab::Dictionary::addRecord(const WordRecord& wordRecord) {
	const auto& wordKey = wordRecord.getWordKey();
	auto search = mWordContainers.find(wordKey);

	if (search == mWordContainers.end()) {
		WordContainer container(wordKey);
		container.addWordRecord(wordRecord);
		mWordContainers.insert(make_pair(wordKey, container));
	} else {
		auto& container = (mWordContainers.find(wordKey))->second;
		container.addWordRecord(wordRecord);
	}
}

bool Dictionary::contains(const WordKey& wordKey) {
	return mWordContainers.find(wordKey) != mWordContainers.end();
}

void Dictionary::removeRecord(const WordRecord& record) {
	const auto& wordKey = record.getWordKey();
	auto search = mWordContainers.find(wordKey);

	if (search != mWordContainers.end()) {
		auto& container = search->second;
		auto& records = container.getRecords();
		for (auto it = begin(records); it != end(records); ++it) {
			if (it->getId() == record.getId()) {
				records.erase(it);
			}
		}
		if (container.getRecords().size() == 0) {
			mWordContainers.erase(wordKey);
		}
	}
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


