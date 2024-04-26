
// Generated from Grammar.g4 by ANTLR 4.13.1


#include "GrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GrammarLexerStaticData final {
  GrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrammarLexerStaticData(const GrammarLexerStaticData&) = delete;
  GrammarLexerStaticData(GrammarLexerStaticData&&) = delete;
  GrammarLexerStaticData& operator=(const GrammarLexerStaticData&) = delete;
  GrammarLexerStaticData& operator=(GrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag grammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GrammarLexerStaticData *grammarlexerLexerStaticData = nullptr;

void grammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (grammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(grammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "NEWLINE", "SPACE", "VARIABLE_NAME", 
      "INTEGER", "UNARY_OPERATOR", "BINARY_OPERATOR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'()'", "'{'", "'}'", "'bool'", "'void'", "';'", 
      "'='", "'print'", "'('", "')'", "'if'", "'else'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "NEWLINE", 
      "SPACE", "VARIABLE_NAME", "INTEGER", "UNARY_OPERATOR", "BINARY_OPERATOR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,20,124,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,0,1,
  	0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,
  	1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,
  	1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,4,14,91,8,14,11,
  	14,12,14,92,1,15,1,15,1,15,1,15,1,16,4,16,100,8,16,11,16,12,16,101,1,
  	17,1,17,4,17,106,8,17,11,17,12,17,107,1,17,3,17,111,8,17,1,18,1,18,1,
  	19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,3,19,123,8,19,0,0,20,1,1,3,2,5,
  	3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,1,0,7,2,0,10,10,13,13,2,0,9,9,32,32,2,0,65,
  	90,97,122,1,0,49,57,1,0,48,57,3,0,38,38,42,42,45,45,3,0,42,43,45,45,47,
  	47,131,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,1,41,1,0,0,0,3,
  	45,1,0,0,0,5,50,1,0,0,0,7,53,1,0,0,0,9,55,1,0,0,0,11,57,1,0,0,0,13,62,
  	1,0,0,0,15,67,1,0,0,0,17,69,1,0,0,0,19,71,1,0,0,0,21,77,1,0,0,0,23,79,
  	1,0,0,0,25,81,1,0,0,0,27,84,1,0,0,0,29,90,1,0,0,0,31,94,1,0,0,0,33,99,
  	1,0,0,0,35,110,1,0,0,0,37,112,1,0,0,0,39,122,1,0,0,0,41,42,5,105,0,0,
  	42,43,5,110,0,0,43,44,5,116,0,0,44,2,1,0,0,0,45,46,5,109,0,0,46,47,5,
  	97,0,0,47,48,5,105,0,0,48,49,5,110,0,0,49,4,1,0,0,0,50,51,5,40,0,0,51,
  	52,5,41,0,0,52,6,1,0,0,0,53,54,5,123,0,0,54,8,1,0,0,0,55,56,5,125,0,0,
  	56,10,1,0,0,0,57,58,5,98,0,0,58,59,5,111,0,0,59,60,5,111,0,0,60,61,5,
  	108,0,0,61,12,1,0,0,0,62,63,5,118,0,0,63,64,5,111,0,0,64,65,5,105,0,0,
  	65,66,5,100,0,0,66,14,1,0,0,0,67,68,5,59,0,0,68,16,1,0,0,0,69,70,5,61,
  	0,0,70,18,1,0,0,0,71,72,5,112,0,0,72,73,5,114,0,0,73,74,5,105,0,0,74,
  	75,5,110,0,0,75,76,5,116,0,0,76,20,1,0,0,0,77,78,5,40,0,0,78,22,1,0,0,
  	0,79,80,5,41,0,0,80,24,1,0,0,0,81,82,5,105,0,0,82,83,5,102,0,0,83,26,
  	1,0,0,0,84,85,5,101,0,0,85,86,5,108,0,0,86,87,5,115,0,0,87,88,5,101,0,
  	0,88,28,1,0,0,0,89,91,7,0,0,0,90,89,1,0,0,0,91,92,1,0,0,0,92,90,1,0,0,
  	0,92,93,1,0,0,0,93,30,1,0,0,0,94,95,7,1,0,0,95,96,1,0,0,0,96,97,6,15,
  	0,0,97,32,1,0,0,0,98,100,7,2,0,0,99,98,1,0,0,0,100,101,1,0,0,0,101,99,
  	1,0,0,0,101,102,1,0,0,0,102,34,1,0,0,0,103,105,7,3,0,0,104,106,7,4,0,
  	0,105,104,1,0,0,0,106,107,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,
  	111,1,0,0,0,109,111,7,4,0,0,110,103,1,0,0,0,110,109,1,0,0,0,111,36,1,
  	0,0,0,112,113,7,5,0,0,113,38,1,0,0,0,114,123,7,6,0,0,115,116,5,61,0,0,
  	116,123,5,61,0,0,117,118,5,38,0,0,118,123,5,38,0,0,119,120,5,124,0,0,
  	120,123,5,124,0,0,121,123,5,94,0,0,122,114,1,0,0,0,122,115,1,0,0,0,122,
  	117,1,0,0,0,122,119,1,0,0,0,122,121,1,0,0,0,123,40,1,0,0,0,6,0,92,101,
  	107,110,122,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grammarlexerLexerStaticData = staticData.release();
}

}

GrammarLexer::GrammarLexer(CharStream *input) : Lexer(input) {
  GrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *grammarlexerLexerStaticData->atn, grammarlexerLexerStaticData->decisionToDFA, grammarlexerLexerStaticData->sharedContextCache);
}

GrammarLexer::~GrammarLexer() {
  delete _interpreter;
}

std::string GrammarLexer::getGrammarFileName() const {
  return "Grammar.g4";
}

const std::vector<std::string>& GrammarLexer::getRuleNames() const {
  return grammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& GrammarLexer::getChannelNames() const {
  return grammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& GrammarLexer::getModeNames() const {
  return grammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& GrammarLexer::getVocabulary() const {
  return grammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GrammarLexer::getSerializedATN() const {
  return grammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& GrammarLexer::getATN() const {
  return *grammarlexerLexerStaticData->atn;
}




void GrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  grammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(grammarlexerLexerOnceFlag, grammarlexerLexerInitialize);
#endif
}