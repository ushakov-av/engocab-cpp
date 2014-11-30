#include <iostream>

#include "PartOfSpeech.h"
#include "WordKey.h"
#include "WordRecord.h"
#include "WordContainer.h"
#include "Dictionary.h"

using namespace engocab;
using namespace std;

int main() {

	WordKey wordKey("hello", PartOfSpeech::Noun, 1);
	WordKey wordKey2("hello2", PartOfSpeech::Noun, 1);

	if (wordKey == wordKey2) {
		cout << "equals" << endl;
	}

	WordRecord wordRecord("089112b4-288e-4e49-99f2-42472404ce3a", 1,
			wordKey, "привет", "some tip", "hello is used for greeting");

	Example example("hello hello", "привет привет", "");

	wordRecord.addExample(example);
	wordRecord.addTag("basic4000");
	wordRecord.addTag("longman3000");


	WordRecord wordRecord2("0da3edf3-2153-4d7b-93fe-9f58f4d75d6e", 2,
				wordKey, "привет 2", "some tip 2", "hello is used for greeting 2");

	WordContainer container(wordKey);

	container.addWordRecord(wordRecord);
	container.addWordRecord(wordRecord2);

	Dictionary dictionary;
	dictionary.addContainer(container);

	cout << "dictionary contains wordKey " << dictionary.contains(wordKey) << endl;
	cout << "dictionary contains wordKey2 " << dictionary.contains(wordKey2) << endl;

	WordRecord* record1 = dictionary.getWordRecord(wordKey, "089112b4-288e-4e49-99f2-42472404ce3a");
	if (record1 != nullptr) {
		cout << *record1 << endl;
	}

	WordRecord* record2 = dictionary.getWordRecord(wordKey, "non-existent");
	if (record2 == nullptr) {
		cout << "not found" << endl;
	}


	return 0;
}
