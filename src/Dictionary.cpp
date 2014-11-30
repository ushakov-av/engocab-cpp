/*
 * Dictionary.cpp
 *
 * author Alexander V. Ushakov
 */

#include <unordered_map>
#include <memory>

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
		unique_ptr<WordContainer> container_ptr(new WordContainer(wordKey));
		mWordContainers.insert(make_pair(wordKey, *container_ptr));
	}

	auto& container = (mWordContainers.find(wordKey))->second;
	container.addWordRecord(wordRecord);
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


