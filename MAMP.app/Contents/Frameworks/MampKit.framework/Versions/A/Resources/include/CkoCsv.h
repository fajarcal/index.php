// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.93

// Generic/internal class name =  Csv
// Wrapped Chilkat C++ class name =  CkCsv

@class CkoStringBuilder;


@interface CkoCsv : NSObject {

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

@property (nonatomic) BOOL AutoTrim;
@property (nonatomic) BOOL Crlf;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSString *Delimiter;
@property (nonatomic) BOOL EnableQuotes;
@property (nonatomic) BOOL EscapeBackslash;
@property (nonatomic) BOOL HasColumnNames;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSNumber *NumColumns;
@property (nonatomic, readonly, copy) NSNumber *NumRows;
@property (nonatomic, copy) NSString *UncommonOptions;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: DeleteColumn
- (BOOL)DeleteColumn: (NSNumber *)index;
// method: DeleteColumnByName
- (BOOL)DeleteColumnByName: (NSString *)columnName;
// method: DeleteRow
- (BOOL)DeleteRow: (NSNumber *)index;
// method: GetCell
- (NSString *)GetCell: (NSNumber *)row 
	col: (NSNumber *)col;
// method: GetCellByName
- (NSString *)GetCellByName: (NSNumber *)row 
	columnName: (NSString *)columnName;
// method: GetColumnName
- (NSString *)GetColumnName: (NSNumber *)index;
// method: GetIndex
- (NSNumber *)GetIndex: (NSString *)columnName;
// method: GetNumCols
- (NSNumber *)GetNumCols: (NSNumber *)row;
// method: InsertColumn
- (BOOL)InsertColumn: (NSNumber *)index;
// method: LoadFile
- (BOOL)LoadFile: (NSString *)path;
// method: LoadFile2
- (BOOL)LoadFile2: (NSString *)path 
	charset: (NSString *)charset;
// method: LoadFromString
- (BOOL)LoadFromString: (NSString *)csvData;
// method: RowMatches
- (BOOL)RowMatches: (NSNumber *)row 
	matchPattern: (NSString *)matchPattern 
	bCaseSensitive: (BOOL)bCaseSensitive;
// method: SaveFile
- (BOOL)SaveFile: (NSString *)path;
// method: SaveFile2
- (BOOL)SaveFile2: (NSString *)path 
	charset: (NSString *)charset;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveToSb
- (BOOL)SaveToSb: (CkoStringBuilder *)sb;
// method: SaveToString
- (NSString *)SaveToString;
// method: SetCell
- (BOOL)SetCell: (NSNumber *)row 
	col: (NSNumber *)col 
	content: (NSString *)content;
// method: SetCellByName
- (BOOL)SetCellByName: (NSNumber *)row 
	columnName: (NSString *)columnName 
	content: (NSString *)content;
// method: SetColumnName
- (BOOL)SetColumnName: (NSNumber *)index 
	columnName: (NSString *)columnName;
// method: SortByColumn
- (BOOL)SortByColumn: (NSString *)columnName 
	bAscending: (BOOL)bAscending 
	bCaseSensitive: (BOOL)bCaseSensitive;
// method: SortByColumnIndex
- (BOOL)SortByColumnIndex: (NSNumber *)index 
	bAscending: (BOOL)bAscending 
	bCaseSensitive: (BOOL)bCaseSensitive;

@end
