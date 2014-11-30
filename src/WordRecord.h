/*
 * WordRecord.h
 *
 *  Created on: 31 окт. 2014 г.
 *      Author: Lunix
 */

#ifndef SRC_WORDRECORD_H_
#define SRC_WORDRECORD_H_

#include <string>
#include <vector>

#include "WordKey.h"
#include "Example.h"
#include "Synonym.h"

namespace engocab {

class WordRecord {

	std::string mId;

	int mIndex;

	WordKey mWordKey;

	std::string mTranslation;

	std::string mTip;

	std::string mDescription;

	std::vector<Example> mExamples;

	std::vector<Synonym> mSynonyms;

	std::vector<std::string> mTags;

public:
	WordRecord(const WordKey&);

	WordRecord(const std::string& id, int index, const WordKey& wordKey,
			const std::string& translation, const std::string& tip, const std::string& description);

	virtual ~WordRecord() = default;

	bool operator==(const WordRecord&);

	friend std::ostream& operator<<(std::ostream&, const WordRecord&);

	void addExample(const Example&);

	void addTag(const std::string);

	const std::string& getId() { return mId; }

	const int getIndex() { return mIndex; }

	const WordKey& getWordKey() { return mWordKey; }

	const std::string& getTranslation() { return mTranslation; }

	const std::string& getTip() { return mTip; }

	const std::string& getDescription() { return mDescription; }

	const std::vector<Example>& getExamples() { return mExamples; }

	const std::vector<Example>& getExamples() const { return mExamples; }

	const std::vector<Synonym>& getSynonyms() { return mSynonyms; }

	const std::vector<std::string>& getTags() { return mTags; }

	const std::vector<std::string>& getTags() const { return mTags; }




};

} /* namespace engocab */

#endif /* SRC_WORDRECORD_H_ */
