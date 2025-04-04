// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.93

// Generic/internal class name =  Log
// Wrapped Chilkat C++ class name =  CkLog



@interface CkoLog : NSObject {

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

@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: Clear
- (void)Clear: (NSString *)initialTag;
// method: EnterContext
- (void)EnterContext: (NSString *)tag;
// method: LeaveContext
- (void)LeaveContext;
// method: LogData
- (void)LogData: (NSString *)tag 
	message: (NSString *)message;
// method: LogDataBase64
- (void)LogDataBase64: (NSString *)tag 
	data: (NSData *)data;
// method: LogDataBase64_2
- (void)LogDataBase64_2: (NSString *)tag 
	pByteData: (NSData *)pByteData 
	szByteData: (NSNumber *)szByteData;
// method: LogDataHex
- (void)LogDataHex: (NSString *)tag 
	data: (NSData *)data;
// method: LogDataHex2
- (void)LogDataHex2: (NSString *)tag 
	pByteData: (NSData *)pByteData 
	szByteData: (NSNumber *)szByteData;
// method: LogDataMax
- (void)LogDataMax: (NSString *)tag 
	message: (NSString *)message 
	maxNumChars: (NSNumber *)maxNumChars;
// method: LogDateTime
- (void)LogDateTime: (NSString *)tag 
	gmt: (BOOL)gmt;
// method: LogError
- (void)LogError: (NSString *)message;
// method: LogHash2
- (void)LogHash2: (NSString *)tag 
	hashAlg: (NSString *)hashAlg 
	pByteData: (NSData *)pByteData 
	szByteData: (NSNumber *)szByteData;
// method: LogInfo
- (void)LogInfo: (NSString *)message;
// method: LogInt
- (void)LogInt: (NSString *)tag 
	value: (NSNumber *)value;
// method: LogInt64
- (void)LogInt64: (NSString *)tag 
	value: (NSNumber *)value;
// method: LogTimestamp
- (void)LogTimestamp: (NSString *)tag;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;

@end
