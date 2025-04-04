// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.93

// Generic/internal class name =  StringBuilder
// Wrapped Chilkat C++ class name =  CkStringBuilder

@class CkoBinData;


@interface CkoStringBuilder : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

@property (nonatomic, copy) NSNumber *IntValue;
@property (nonatomic, readonly) BOOL IsBase64;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSNumber *Length;
// method: Append
- (BOOL)Append: (NSString *)value;
// method: AppendBd
- (BOOL)AppendBd: (CkoBinData *)binData 
	charset: (NSString *)charset 
	offset: (NSNumber *)offset 
	numBytes: (NSNumber *)numBytes;
// method: AppendEncoded
- (BOOL)AppendEncoded: (NSData *)binaryData 
	encoding: (NSString *)encoding;
// method: AppendInt
- (BOOL)AppendInt: (NSNumber *)value;
// method: AppendInt64
- (BOOL)AppendInt64: (NSNumber *)value;
// method: AppendLine
- (BOOL)AppendLine: (NSString *)value 
	crlf: (BOOL)crlf;
// method: AppendSb
- (BOOL)AppendSb: (CkoStringBuilder *)sb;
// method: AppendUuid
- (BOOL)AppendUuid: (BOOL)lowerCase;
// method: Clear
- (void)Clear;
// method: Contains
- (BOOL)Contains: (NSString *)str 
	caseSensitive: (BOOL)caseSensitive;
// method: ContainsWord
- (BOOL)ContainsWord: (NSString *)word 
	caseSensitive: (BOOL)caseSensitive;
// method: ContentsEqual
- (BOOL)ContentsEqual: (NSString *)str 
	caseSensitive: (BOOL)caseSensitive;
// method: ContentsEqualSb
- (BOOL)ContentsEqualSb: (CkoStringBuilder *)sb 
	caseSensitive: (BOOL)caseSensitive;
// method: Decode
- (BOOL)Decode: (NSString *)encoding 
	charset: (NSString *)charset;
// method: DecodeAndAppend
- (BOOL)DecodeAndAppend: (NSString *)value 
	encoding: (NSString *)encoding 
	charset: (NSString *)charset;
// method: Encode
- (BOOL)Encode: (NSString *)encoding 
	charset: (NSString *)charset;
// method: EndsWith
- (BOOL)EndsWith: (NSString *)substr 
	caseSensitive: (BOOL)caseSensitive;
// method: EntityDecode
- (BOOL)EntityDecode;
// method: GetAfterBetween
- (NSString *)GetAfterBetween: (NSString *)searchAfter 
	beginMark: (NSString *)beginMark 
	endMark: (NSString *)endMark;
// method: GetAfterFinal
- (NSString *)GetAfterFinal: (NSString *)marker 
	removeFlag: (BOOL)removeFlag;
// method: GetAsString
- (NSString *)GetAsString;
// method: GetBefore
- (NSString *)GetBefore: (NSString *)marker 
	removeFlag: (BOOL)removeFlag;
// method: GetBetween
- (NSString *)GetBetween: (NSString *)beginMark 
	endMark: (NSString *)endMark;
// method: GetDecoded
- (NSData *)GetDecoded: (NSString *)encoding;
// method: GetEncoded
- (NSString *)GetEncoded: (NSString *)encoding 
	charset: (NSString *)charset;
// method: GetHash
- (NSString *)GetHash: (NSString *)algorithm 
	encoding: (NSString *)encoding 
	charset: (NSString *)charset;
// method: GetNth
- (NSString *)GetNth: (NSNumber *)index 
	delimiterChar: (NSString *)delimiterChar 
	exceptDoubleQuoted: (BOOL)exceptDoubleQuoted 
	exceptEscaped: (BOOL)exceptEscaped;
// method: GetRange
- (NSString *)GetRange: (NSNumber *)startIndex 
	numChars: (NSNumber *)numChars 
	removeFlag: (BOOL)removeFlag;
// method: LastNLines
- (NSString *)LastNLines: (NSNumber *)numLines 
	bCrlf: (BOOL)bCrlf;
// method: LoadFile
- (BOOL)LoadFile: (NSString *)path 
	charset: (NSString *)charset;
// method: Obfuscate
- (void)Obfuscate;
// method: Prepend
- (BOOL)Prepend: (NSString *)value;
// method: PunyDecode
- (BOOL)PunyDecode;
// method: PunyEncode
- (BOOL)PunyEncode;
// method: RemoveAccents
- (BOOL)RemoveAccents;
// method: RemoveAfterFinal
- (BOOL)RemoveAfterFinal: (NSString *)marker;
// method: RemoveBefore
- (BOOL)RemoveBefore: (NSString *)marker;
// method: RemoveCharsAt
- (BOOL)RemoveCharsAt: (NSNumber *)startIndex 
	numChars: (NSNumber *)numChars;
// method: Replace
- (NSNumber *)Replace: (NSString *)value 
	replacement: (NSString *)replacement;
// method: ReplaceAfterFinal
- (BOOL)ReplaceAfterFinal: (NSString *)marker 
	replacement: (NSString *)replacement;
// method: ReplaceAllBetween
- (BOOL)ReplaceAllBetween: (NSString *)beginMark 
	endMark: (NSString *)endMark 
	replacement: (NSString *)replacement 
	replaceMarks: (BOOL)replaceMarks;
// method: ReplaceBetween
- (NSNumber *)ReplaceBetween: (NSString *)beginMark 
	endMark: (NSString *)endMark 
	value: (NSString *)value 
	replacement: (NSString *)replacement;
// method: ReplaceFirst
- (BOOL)ReplaceFirst: (NSString *)value 
	replacement: (NSString *)replacement;
// method: ReplaceI
- (NSNumber *)ReplaceI: (NSString *)value 
	replacement: (NSNumber *)replacement;
// method: ReplaceNoCase
- (NSNumber *)ReplaceNoCase: (NSString *)value 
	replacement: (NSString *)replacement;
// method: ReplaceWord
- (NSNumber *)ReplaceWord: (NSString *)value 
	replacement: (NSString *)replacement;
// method: SecureClear
- (void)SecureClear;
// method: SetNth
- (BOOL)SetNth: (NSNumber *)index 
	value: (NSString *)value 
	delimiterChar: (NSString *)delimiterChar 
	exceptDoubleQuoted: (BOOL)exceptDoubleQuoted 
	exceptEscaped: (BOOL)exceptEscaped;
// method: SetString
- (BOOL)SetString: (NSString *)value;
// method: Shorten
- (BOOL)Shorten: (NSNumber *)numChars;
// method: StartsWith
- (BOOL)StartsWith: (NSString *)substr 
	caseSensitive: (BOOL)caseSensitive;
// method: ToCRLF
- (BOOL)ToCRLF;
// method: ToLF
- (BOOL)ToLF;
// method: ToLowercase
- (BOOL)ToLowercase;
// method: ToUppercase
- (BOOL)ToUppercase;
// method: Trim
- (BOOL)Trim;
// method: TrimInsideSpaces
- (BOOL)TrimInsideSpaces;
// method: Unobfuscate
- (void)Unobfuscate;
// method: WriteFile
- (BOOL)WriteFile: (NSString *)path 
	charset: (NSString *)charset 
	emitBom: (BOOL)emitBom;
// method: WriteFileIfModified
- (BOOL)WriteFileIfModified: (NSString *)path 
	charset: (NSString *)charset 
	emitBom: (BOOL)emitBom;

@end
