// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.93

// Generic/internal class name =  Rsa
// Wrapped Chilkat C++ class name =  CkRsa

@class CkoBinData;
@class CkoPrivateKey;
@class CkoPublicKey;
@class CkoCert;


@interface CkoRsa : NSObject {

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

@property (nonatomic, copy) NSString *Charset;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSString *EncodingMode;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL LittleEndian;
@property (nonatomic) BOOL NoUnpad;
@property (nonatomic, readonly, copy) NSNumber *NumBits;
@property (nonatomic, copy) NSString *OaepHash;
@property (nonatomic, copy) NSString *OaepMgfHash;
@property (nonatomic) BOOL OaepPadding;
@property (nonatomic, copy) NSNumber *PssSaltLen;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: DecryptBd
- (BOOL)DecryptBd: (CkoBinData *)bd 
	usePrivateKey: (BOOL)usePrivateKey;
// method: DecryptBytes
- (NSData *)DecryptBytes: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: DecryptBytesENC
- (NSData *)DecryptBytesENC: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: DecryptString
- (NSString *)DecryptString: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: DecryptStringENC
- (NSString *)DecryptStringENC: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: EncryptBd
- (BOOL)EncryptBd: (CkoBinData *)bd 
	usePrivateKey: (BOOL)usePrivateKey;
// method: EncryptBytes
- (NSData *)EncryptBytes: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: EncryptBytesENC
- (NSString *)EncryptBytesENC: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: EncryptString
- (NSData *)EncryptString: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: EncryptStringENC
- (NSString *)EncryptStringENC: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: ExportPrivateKey
- (NSString *)ExportPrivateKey;
// method: ExportPrivateKeyObj
- (CkoPrivateKey *)ExportPrivateKeyObj;
// method: ExportPublicKey
- (NSString *)ExportPublicKey;
// method: ExportPublicKeyObj
- (CkoPublicKey *)ExportPublicKeyObj;
// method: GenerateKey
- (BOOL)GenerateKey: (NSNumber *)numBits;
// method: ImportPrivateKey
- (BOOL)ImportPrivateKey: (NSString *)strXml;
// method: ImportPrivateKeyObj
- (BOOL)ImportPrivateKeyObj: (CkoPrivateKey *)key;
// method: ImportPublicKey
- (BOOL)ImportPublicKey: (NSString *)strXml;
// method: ImportPublicKeyObj
- (BOOL)ImportPublicKeyObj: (CkoPublicKey *)key;
// method: OpenSslSignBd
- (BOOL)OpenSslSignBd: (CkoBinData *)bd;
// method: OpenSslSignBytes
- (NSData *)OpenSslSignBytes: (NSData *)data;
// method: OpenSslSignBytesENC
- (NSString *)OpenSslSignBytesENC: (NSData *)data;
// method: OpenSslSignString
- (NSData *)OpenSslSignString: (NSString *)str;
// method: OpenSslSignStringENC
- (NSString *)OpenSslSignStringENC: (NSString *)str;
// method: OpenSslVerifyBd
- (BOOL)OpenSslVerifyBd: (CkoBinData *)bd;
// method: OpenSslVerifyBytes
- (NSData *)OpenSslVerifyBytes: (NSData *)signature;
// method: OpenSslVerifyBytesENC
- (NSData *)OpenSslVerifyBytesENC: (NSString *)str;
// method: OpenSslVerifyString
- (NSString *)OpenSslVerifyString: (NSData *)data;
// method: OpenSslVerifyStringENC
- (NSString *)OpenSslVerifyStringENC: (NSString *)str;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetX509Cert
- (BOOL)SetX509Cert: (CkoCert *)cert 
	usePrivateKey: (BOOL)usePrivateKey;
// method: SignBd
- (BOOL)SignBd: (CkoBinData *)bdData 
	hashAlgorithm: (NSString *)hashAlgorithm 
	bdSig: (CkoBinData *)bdSig;
// method: SignBytes
- (NSData *)SignBytes: (NSData *)bData 
	hashAlg: (NSString *)hashAlg;
// method: SignBytesENC
- (NSString *)SignBytesENC: (NSData *)bData 
	hashAlg: (NSString *)hashAlg;
// method: SignHash
- (NSData *)SignHash: (NSData *)hashBytes 
	hashAlg: (NSString *)hashAlg;
// method: SignHashENC
- (NSString *)SignHashENC: (NSString *)encodedHash 
	hashAlg: (NSString *)hashAlg;
// method: SignString
- (NSData *)SignString: (NSString *)str 
	hashAlg: (NSString *)hashAlg;
// method: SignStringENC
- (NSString *)SignStringENC: (NSString *)str 
	hashAlg: (NSString *)hashAlg;
// method: SnkToXml
- (NSString *)SnkToXml: (NSString *)snkPath;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: VerifyBd
- (BOOL)VerifyBd: (CkoBinData *)bdData 
	hashAlgorithm: (NSString *)hashAlgorithm 
	bdSig: (CkoBinData *)bdSig;
// method: VerifyBytes
- (BOOL)VerifyBytes: (NSData *)bData 
	hashAlg: (NSString *)hashAlg 
	sigData: (NSData *)sigData;
// method: VerifyBytesENC
- (BOOL)VerifyBytesENC: (NSData *)bData 
	hashAlg: (NSString *)hashAlg 
	encodedSig: (NSString *)encodedSig;
// method: VerifyHash
- (BOOL)VerifyHash: (NSData *)hashBytes 
	hashAlg: (NSString *)hashAlg 
	sigBytes: (NSData *)sigBytes;
// method: VerifyHashENC
- (BOOL)VerifyHashENC: (NSString *)encodedHash 
	hashAlg: (NSString *)hashAlg 
	encodedSig: (NSString *)encodedSig;
// method: VerifyPrivateKey
- (BOOL)VerifyPrivateKey: (NSString *)xml;
// method: VerifyString
- (BOOL)VerifyString: (NSString *)str 
	hashAlg: (NSString *)hashAlg 
	sigData: (NSData *)sigData;
// method: VerifyStringENC
- (BOOL)VerifyStringENC: (NSString *)str 
	hashAlg: (NSString *)hashAlg 
	sig: (NSString *)sig;

@end
