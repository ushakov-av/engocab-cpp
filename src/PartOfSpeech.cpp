/*
 * PartOfSpeech.cpp
 *
 * author Alexander V. Ushakov
 */

#include "PartOfSpeech.h"

namespace engocab {

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



