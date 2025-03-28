// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.93

// Generic/internal class name =  Xml
// Wrapped Chilkat C++ class name =  CkXml

@class CkoStringBuilder;
@class CkoBinData;


@interface CkoXml : NSObject {

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

@property (nonatomic) BOOL Cdata;
@property (nonatomic, copy) NSString *Content;
@property (nonatomic, copy) NSNumber *ContentInt;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSString *DocType;
@property (nonatomic) BOOL EmitBom;
@property (nonatomic) BOOL EmitCompact;
@property (nonatomic) BOOL EmitXmlDecl;
@property (nonatomic, copy) NSString *Encoding;
@property (nonatomic, copy) NSNumber *I;
@property (nonatomic, readonly) BOOL IsBase64;
@property (nonatomic, copy) NSNumber *J;
@property (nonatomic, copy) NSNumber *K;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSNumber *NumAttributes;
@property (nonatomic, readonly, copy) NSNumber *NumChildren;
@property (nonatomic) BOOL SortCaseInsensitive;
@property (nonatomic) BOOL Standalone;
@property (nonatomic, copy) NSString *Tag;
@property (nonatomic, copy) NSString *TagNsPrefix;
@property (nonatomic, readonly, copy) NSString *TagPath;
@property (nonatomic, copy) NSString *TagUnprefixed;
@property (nonatomic, readonly, copy) NSNumber *TreeId;
@property (nonatomic, copy) NSString *UncommonOptions;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AccumulateTagContent
- (NSString *)AccumulateTagContent: (NSString *)tag 
	skipTags: (NSString *)skipTags;
// method: AddAttribute
- (BOOL)AddAttribute: (NSString *)name 
	value: (NSString *)value;
// method: AddAttributeInt
- (BOOL)AddAttributeInt: (NSString *)name 
	value: (NSNumber *)value;
// method: AddChildTree
- (BOOL)AddChildTree: (CkoXml *)tree;
// method: AddOrUpdateAttribute
- (void)AddOrUpdateAttribute: (NSString *)name 
	value: (NSString *)value;
// method: AddOrUpdateAttributeI
- (void)AddOrUpdateAttributeI: (NSString *)name 
	value: (NSNumber *)value;
// method: AddStyleSheet
- (void)AddStyleSheet: (NSString *)styleSheet;
// method: AddToAttribute
- (void)AddToAttribute: (NSString *)name 
	amount: (NSNumber *)amount;
// method: AddToChildContent
- (void)AddToChildContent: (NSString *)tag 
	amount: (NSNumber *)amount;
// method: AddToContent
- (void)AddToContent: (NSNumber *)amount;
// method: AppendToContent
- (BOOL)AppendToContent: (NSString *)str;
// method: BEncodeContent
- (BOOL)BEncodeContent: (NSString *)charset 
	db: (NSData *)db;
// method: ChildContentMatches
- (BOOL)ChildContentMatches: (NSString *)tagPath 
	pattern: (NSString *)pattern 
	caseSensitive: (BOOL)caseSensitive;
// method: ChilkatPath
- (NSString *)ChilkatPath: (NSString *)cmd;
// method: Clear
- (void)Clear;
// method: ContentMatches
- (BOOL)ContentMatches: (NSString *)pattern 
	caseSensitive: (BOOL)caseSensitive;
// method: Copy
- (void)Copy: (CkoXml *)node;
// method: CopyRef
- (void)CopyRef: (CkoXml *)node;
// method: DecodeContent
- (NSData *)DecodeContent;
// method: DecodeEntities
- (NSString *)DecodeEntities: (NSString *)str;
// method: DecryptContent
- (BOOL)DecryptContent: (NSString *)password;
// method: EncryptContent
- (BOOL)EncryptContent: (NSString *)password;
// method: ExtractChildByIndex
- (CkoXml *)ExtractChildByIndex: (NSNumber *)index;
// method: ExtractChildByName
- (CkoXml *)ExtractChildByName: (NSString *)tagPath 
	attrName: (NSString *)attrName 
	attrValue: (NSString *)attrValue;
// method: FindChild
- (CkoXml *)FindChild: (NSString *)tagPath;
// method: FindChild2
- (BOOL)FindChild2: (NSString *)tagPath;
// method: FindNextRecord
- (CkoXml *)FindNextRecord: (NSString *)tagPath 
	contentPattern: (NSString *)contentPattern;
// method: FindOrAddNewChild
- (CkoXml *)FindOrAddNewChild: (NSString *)tagPath;
// method: FirstChild
- (CkoXml *)FirstChild;
// method: FirstChild2
- (BOOL)FirstChild2;
// method: GetAttributeName
- (NSString *)GetAttributeName: (NSNumber *)index;
// method: GetAttributeValue
- (NSString *)GetAttributeValue: (NSNumber *)index;
// method: GetAttributeValueInt
- (NSNumber *)GetAttributeValueInt: (NSNumber *)index;
// method: GetAttrValue
- (NSString *)GetAttrValue: (NSString *)name;
// method: GetAttrValueInt
- (NSNumber *)GetAttrValueInt: (NSString *)name;
// method: GetBinaryContent
- (NSData *)GetBinaryContent: (BOOL)unzipFlag 
	decryptFlag: (BOOL)decryptFlag 
	password: (NSString *)password;
// method: GetChild
- (CkoXml *)GetChild: (NSNumber *)index;
// method: GetChild2
- (BOOL)GetChild2: (NSNumber *)index;
// method: GetChildAttrValue
- (NSString *)GetChildAttrValue: (NSString *)tagPath 
	attrName: (NSString *)attrName;
// method: GetChildBoolValue
- (BOOL)GetChildBoolValue: (NSString *)tagPath;
// method: GetChildContent
- (NSString *)GetChildContent: (NSString *)tagPath;
// method: GetChildContentByIndex
- (NSString *)GetChildContentByIndex: (NSNumber *)index;
// method: GetChildContentSb
- (BOOL)GetChildContentSb: (NSString *)tagPath 
	sb: (CkoStringBuilder *)sb;
// method: GetChildExact
- (CkoXml *)GetChildExact: (NSString *)tag 
	content: (NSString *)content;
// method: GetChildIntValue
- (NSNumber *)GetChildIntValue: (NSString *)tagPath;
// method: GetChildTag
- (NSString *)GetChildTag: (NSNumber *)index;
// method: GetChildTagByIndex
- (NSString *)GetChildTagByIndex: (NSNumber *)index;
// method: GetChildWithAttr
- (CkoXml *)GetChildWithAttr: (NSString *)tagPath 
	attrName: (NSString *)attrName 
	attrValue: (NSString *)attrValue;
// method: GetChildWithContent
- (CkoXml *)GetChildWithContent: (NSString *)content;
// method: GetChildWithTag
- (CkoXml *)GetChildWithTag: (NSString *)tagPath;
// method: GetNthChildWithTag
- (CkoXml *)GetNthChildWithTag: (NSString *)tag 
	n: (NSNumber *)n;
// method: GetNthChildWithTag2
- (BOOL)GetNthChildWithTag2: (NSString *)tag 
	n: (NSNumber *)n;
// method: GetParent
- (CkoXml *)GetParent;
// method: GetParent2
- (BOOL)GetParent2;
// method: GetRoot
- (CkoXml *)GetRoot;
// method: GetRoot2
- (void)GetRoot2;
// method: GetSelf
- (CkoXml *)GetSelf;
// method: GetXml
- (NSString *)GetXml;
// method: GetXmlBd
- (BOOL)GetXmlBd: (CkoBinData *)bd;
// method: GetXmlSb
- (BOOL)GetXmlSb: (CkoStringBuilder *)sb;
// method: HasAttribute
- (BOOL)HasAttribute: (NSString *)name;
// method: HasAttrWithValue
- (BOOL)HasAttrWithValue: (NSString *)name 
	value: (NSString *)value;
// method: HasChildWithContent
- (BOOL)HasChildWithContent: (NSString *)content;
// method: HasChildWithTag
- (BOOL)HasChildWithTag: (NSString *)tagPath;
// method: HasChildWithTagAndContent
- (BOOL)HasChildWithTagAndContent: (NSString *)tagPath 
	content: (NSString *)content;
// method: InsertChildTreeAfter
- (void)InsertChildTreeAfter: (NSNumber *)index 
	tree: (CkoXml *)tree;
// method: InsertChildTreeBefore
- (void)InsertChildTreeBefore: (NSNumber *)index 
	tree: (CkoXml *)tree;
// method: LastChild
- (CkoXml *)LastChild;
// method: LastChild2
- (BOOL)LastChild2;
// method: LoadBd
- (BOOL)LoadBd: (CkoBinData *)bd 
	autoTrim: (BOOL)autoTrim;
// method: LoadSb
- (BOOL)LoadSb: (CkoStringBuilder *)sb 
	autoTrim: (BOOL)autoTrim;
// method: LoadXml
- (BOOL)LoadXml: (NSString *)xmlData;
// method: LoadXml2
- (BOOL)LoadXml2: (NSString *)xmlData 
	autoTrim: (BOOL)autoTrim;
// method: LoadXmlFile
- (BOOL)LoadXmlFile: (NSString *)path;
// method: LoadXmlFile2
- (BOOL)LoadXmlFile2: (NSString *)path 
	autoTrim: (BOOL)autoTrim;
// method: NewChild
- (CkoXml *)NewChild: (NSString *)tagPath 
	content: (NSString *)content;
// method: NewChild2
- (void)NewChild2: (NSString *)tagPath 
	content: (NSString *)content;
// method: NewChildAfter
- (CkoXml *)NewChildAfter: (NSNumber *)index 
	tag: (NSString *)tag 
	content: (NSString *)content;
// method: NewChildBefore
- (CkoXml *)NewChildBefore: (NSNumber *)index 
	tag: (NSString *)tag 
	content: (NSString *)content;
// method: NewChildInt2
- (void)NewChildInt2: (NSString *)tagPath 
	value: (NSNumber *)value;
// method: NextInTraversal2
- (BOOL)NextInTraversal2: (CkoStringBuilder *)sbState;
// method: NextSibling
- (CkoXml *)NextSibling;
// method: NextSibling2
- (BOOL)NextSibling2;
// method: NumChildrenAt
- (NSNumber *)NumChildrenAt: (NSString *)tagPath;
// method: NumChildrenHavingTag
- (NSNumber *)NumChildrenHavingTag: (NSString *)tag;
// method: PreviousSibling
- (CkoXml *)PreviousSibling;
// method: PreviousSibling2
- (BOOL)PreviousSibling2;
// method: PruneAttribute
- (NSNumber *)PruneAttribute: (NSString *)attrName;
// method: PruneTag
- (NSNumber *)PruneTag: (NSString *)tag;
// method: QEncodeContent
- (BOOL)QEncodeContent: (NSString *)charset 
	db: (NSData *)db;
// method: RemoveAllAttributes
- (BOOL)RemoveAllAttributes;
// method: RemoveAllChildren
- (void)RemoveAllChildren;
// method: RemoveAttribute
- (BOOL)RemoveAttribute: (NSString *)name;
// method: RemoveChild
- (void)RemoveChild: (NSString *)tagPath;
// method: RemoveChildByIndex
- (void)RemoveChildByIndex: (NSNumber *)index;
// method: RemoveChildWithContent
- (void)RemoveChildWithContent: (NSString *)content;
// method: RemoveFromTree
- (void)RemoveFromTree;
// method: RemoveStyleSheet
- (NSNumber *)RemoveStyleSheet: (NSString *)attrName 
	attrValue: (NSString *)attrValue;
// method: SaveBinaryContent
- (BOOL)SaveBinaryContent: (NSString *)path 
	unzipFlag: (BOOL)unzipFlag 
	decryptFlag: (BOOL)decryptFlag 
	password: (NSString *)password;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveXml
- (BOOL)SaveXml: (NSString *)path;
// method: Scrub
- (void)Scrub: (NSString *)directives;
// method: SearchAllForContent
- (CkoXml *)SearchAllForContent: (CkoXml *)after 
	contentPattern: (NSString *)contentPattern;
// method: SearchAllForContent2
- (BOOL)SearchAllForContent2: (CkoXml *)after 
	contentPattern: (NSString *)contentPattern;
// method: SearchForAttribute
- (CkoXml *)SearchForAttribute: (CkoXml *)after 
	tag: (NSString *)tag 
	attr: (NSString *)attr 
	valuePattern: (NSString *)valuePattern;
// method: SearchForAttribute2
- (BOOL)SearchForAttribute2: (CkoXml *)after 
	tag: (NSString *)tag 
	attr: (NSString *)attr 
	valuePattern: (NSString *)valuePattern;
// method: SearchForContent
- (CkoXml *)SearchForContent: (CkoXml *)after 
	tag: (NSString *)tag 
	contentPattern: (NSString *)contentPattern;
// method: SearchForContent2
- (BOOL)SearchForContent2: (CkoXml *)after 
	tag: (NSString *)tag 
	contentPattern: (NSString *)contentPattern;
// method: SearchForTag
- (CkoXml *)SearchForTag: (CkoXml *)after 
	tag: (NSString *)tag;
// method: SearchForTag2
- (BOOL)SearchForTag2: (CkoXml *)after 
	tag: (NSString *)tag;
// method: SetBinaryContent
- (BOOL)SetBinaryContent: (NSData *)data 
	zipFlag: (BOOL)zipFlag 
	encryptFlag: (BOOL)encryptFlag 
	password: (NSString *)password;
// method: SetBinaryContent2
- (BOOL)SetBinaryContent2: (NSData *)pByteData 
	szByteData: (NSNumber *)szByteData 
	zipFlag: (BOOL)zipFlag 
	encryptFlag: (BOOL)encryptFlag 
	password: (NSString *)password;
// method: SetBinaryContentFromFile
- (BOOL)SetBinaryContentFromFile: (NSString *)path 
	zipFlag: (BOOL)zipFlag 
	encryptFlag: (BOOL)encryptFlag 
	password: (NSString *)password;
// method: SortByAttribute
- (void)SortByAttribute: (NSString *)attrName 
	ascending: (BOOL)ascending;
// method: SortByAttributeInt
- (void)SortByAttributeInt: (NSString *)attrName 
	ascending: (BOOL)ascending;
// method: SortByContent
- (void)SortByContent: (BOOL)ascending;
// method: SortByTag
- (void)SortByTag: (BOOL)ascending;
// method: SortRecordsByAttribute
- (void)SortRecordsByAttribute: (NSString *)sortTag 
	attrName: (NSString *)attrName 
	ascending: (BOOL)ascending;
// method: SortRecordsByContent
- (void)SortRecordsByContent: (NSString *)sortTag 
	ascending: (BOOL)ascending;
// method: SortRecordsByContentInt
- (void)SortRecordsByContentInt: (NSString *)sortTag 
	ascending: (BOOL)ascending;
// method: SwapNode
- (BOOL)SwapNode: (CkoXml *)node;
// method: SwapTree
- (BOOL)SwapTree: (CkoXml *)tree;
// method: TagContent
- (NSString *)TagContent: (NSString *)tag;
// method: TagEquals
- (BOOL)TagEquals: (NSString *)tag;
// method: TagIndex
- (NSNumber *)TagIndex: (NSString *)tagPath;
// method: TagNsEquals
- (BOOL)TagNsEquals: (NSString *)ns;
// method: TagUnpEquals
- (BOOL)TagUnpEquals: (NSString *)unprefixedTag;
// method: UnzipContent
- (BOOL)UnzipContent;
// method: UnzipTree
- (BOOL)UnzipTree;
// method: UpdateAt
- (BOOL)UpdateAt: (NSString *)tagPath 
	autoCreate: (BOOL)autoCreate 
	value: (NSString *)value;
// method: UpdateAttrAt
- (BOOL)UpdateAttrAt: (NSString *)tagPath 
	autoCreate: (BOOL)autoCreate 
	attrName: (NSString *)attrName 
	attrValue: (NSString *)attrValue;
// method: UpdateAttribute
- (BOOL)UpdateAttribute: (NSString *)attrName 
	attrValue: (NSString *)attrValue;
// method: UpdateAttributeInt
- (BOOL)UpdateAttributeInt: (NSString *)attrName 
	value: (NSNumber *)value;
// method: UpdateChildContent
- (void)UpdateChildContent: (NSString *)tagPath 
	value: (NSString *)value;
// method: UpdateChildContentInt
- (void)UpdateChildContentInt: (NSString *)tagPath 
	value: (NSNumber *)value;
// method: ZipContent
- (BOOL)ZipContent;
// method: ZipTree
- (BOOL)ZipTree;

@end
