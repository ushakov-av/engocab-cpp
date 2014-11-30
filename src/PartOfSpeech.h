#ifndef SRC_PARTOFSPEECH_H_
#define SRC_PARTOFSPEECH_H_

#include <string>
#include <exception>

namespace engocab {

enum PartOfSpeech {
	Noun, Verb, PhrasalVerb, Adverb, Adjective, Preposition
};


std::string partOfSpeechToString(PartOfSpeech pos) {
	switch (pos) {
	case Noun:
		return "Noun";
	case Verb:
		return "Verb";
	case PhrasalVerb:
		return "Phrasal verb";
	case Adverb:
		return "Adverb";
	case Adjective:
		return "Adjective";
	case Preposition:
		return "Preposition";
	}
	return "";
}


}

#endif
