// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.93

// Generic/internal class name =  JavaKeyStore
// Wrapped Chilkat C++ class name =  CkJavaKeyStore

@class CkoPfx;
@class CkoCert;
@class CkoCertChain;
@class CkoPrivateKey;
@class CkoBinData;
@class CkoJsonObject;
@class CkoStringBuilder;
@class CkoPem;
@class CkoXmlCertVault;


@interface CkoJavaKeyStore : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *NumPrivateKeys;
@property (nonatomic, readonly, copy) NSNumber *NumSecretKeys;
@property (nonatomic, readonly, copy) NSNumber *NumTrustedCerts;
@property (nonatomic) BOOL RequireCompleteChain;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic) BOOL VerifyKeyedDigest;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AddPfx
- (BOOL)AddPfx: (CkoPfx *)pfx 
	alias: (NSString *)alias 
	password: (NSString *)password;
// method: AddPrivateKey
- (BOOL)AddPrivateKey: (CkoCert *)cert 
	alias: (NSString *)alias 
	password: (NSString *)password;
// method: AddSecretKey
- (BOOL)AddSecretKey: (NSString *)encodedKeyBytes 
	encoding: (NSString *)encoding 
	algorithm: (NSString *)algorithm 
	alias: (NSString *)alias 
	password: (NSString *)password;
// method: AddTrustedCert
- (BOOL)AddTrustedCert: (CkoCert *)cert 
	alias: (NSString *)alias;
// method: ChangePassword
- (BOOL)ChangePassword: (NSNumber *)index 
	oldPassword: (NSString *)oldPassword 
	newPassword: (NSString *)newPassword;
// method: FindCertChain
- (CkoCertChain *)FindCertChain: (NSString *)alias 
	caseSensitive: (BOOL)caseSensitive;
// method: FindPrivateKey
- (CkoPrivateKey *)FindPrivateKey: (NSString *)password 
	alias: (NSString *)alias 
	caseSensitive: (BOOL)caseSensitive;
// method: FindTrustedCert
- (CkoCert *)FindTrustedCert: (NSString *)alias 
	caseSensitive: (BOOL)caseSensitive;
// method: GetCertChain
- (CkoCertChain *)GetCertChain: (NSNumber *)index;
// method: GetPrivateKey
- (CkoPrivateKey *)GetPrivateKey: (NSString *)password 
	index: (NSNumber *)index;
// method: GetPrivateKeyAlias
- (NSString *)GetPrivateKeyAlias: (NSNumber *)index;
// method: GetSecretKey
- (NSString *)GetSecretKey: (NSString *)password 
	index: (NSNumber *)index 
	encoding: (NSString *)encoding;
// method: GetSecretKeyAlias
- (NSString *)GetSecretKeyAlias: (NSNumber *)index;
// method: GetTrustedCert
- (CkoCert *)GetTrustedCert: (NSNumber *)index;
// method: GetTrustedCertAlias
- (NSString *)GetTrustedCertAlias: (NSNumber *)index;
// method: LoadBd
- (BOOL)LoadBd: (NSString *)password 
	bd: (CkoBinData *)bd;
// method: LoadBinary
- (BOOL)LoadBinary: (NSString *)password 
	jksData: (NSData *)jksData;
// method: LoadEncoded
- (BOOL)LoadEncoded: (NSString *)password 
	jksEncData: (NSString *)jksEncData 
	encoding: (NSString *)encoding;
// method: LoadFile
- (BOOL)LoadFile: (NSString *)password 
	path: (NSString *)path;
// method: LoadJwkSet
- (BOOL)LoadJwkSet: (NSString *)password 
	jwkSet: (CkoJsonObject *)jwkSet;
// method: RemoveEntry
- (BOOL)RemoveEntry: (NSNumber *)entryType 
	index: (NSNumber *)index;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetAlias
- (BOOL)SetAlias: (NSNumber *)entryType 
	index: (NSNumber *)index 
	alias: (NSString *)alias;
// method: ToBinary
- (NSData *)ToBinary: (NSString *)password;
// method: ToEncodedString
- (NSString *)ToEncodedString: (NSString *)password 
	encoding: (NSString *)encoding;
// method: ToFile
- (BOOL)ToFile: (NSString *)password 
	path: (NSString *)path;
// method: ToJwkSet
- (BOOL)ToJwkSet: (NSString *)password 
	sbJwkSet: (CkoStringBuilder *)sbJwkSet;
// method: ToPem
- (CkoPem *)ToPem: (NSString *)password;
// method: ToPfx
- (CkoPfx *)ToPfx: (NSString *)password;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: UseCertVault
- (BOOL)UseCertVault: (CkoXmlCertVault *)vault;

@end
