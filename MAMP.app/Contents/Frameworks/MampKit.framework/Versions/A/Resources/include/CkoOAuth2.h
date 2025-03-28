// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.93

// Generic/internal class name =  OAuth2
// Wrapped Chilkat C++ class name =  CkOAuth2

@class CkoTask;
@class CkoSocket;


@class CkoBaseProgress;

@interface CkoOAuth2 : NSObject {

	@private
		void *m_eventCallback;
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

// property setter: EventCallbackObject
- (void)setEventCallbackObject: (CkoBaseProgress *)eventObj;

@property (nonatomic, copy) NSString *AccessToken;
@property (nonatomic, readonly, copy) NSString *AccessTokenResponse;
@property (nonatomic, copy) NSString *AppCallbackUrl;
@property (nonatomic, readonly, copy) NSNumber *AuthFlowState;
@property (nonatomic, copy) NSString *AuthorizationEndpoint;
@property (nonatomic, copy) NSString *ClientId;
@property (nonatomic, copy) NSString *ClientSecret;
@property (nonatomic) BOOL CodeChallenge;
@property (nonatomic, copy) NSString *CodeChallengeMethod;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *FailureInfo;
@property (nonatomic) BOOL IncludeNonce;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSNumber *ListenPort;
@property (nonatomic, copy) NSNumber *ListenPortRangeEnd;
@property (nonatomic, copy) NSString *LocalHost;
@property (nonatomic, copy) NSNumber *NonceLength;
@property (nonatomic, copy) NSString *RedirectAllowHtml;
@property (nonatomic, copy) NSString *RedirectDenyHtml;
@property (nonatomic, readonly, copy) NSString *RedirectReqReceived;
@property (nonatomic, copy) NSString *RefreshToken;
@property (nonatomic, copy) NSString *Resource;
@property (nonatomic, copy) NSString *ResponseMode;
@property (nonatomic, copy) NSString *ResponseType;
@property (nonatomic, copy) NSString *Scope;
@property (nonatomic, copy) NSString *TokenEndpoint;
@property (nonatomic, copy) NSString *TokenType;
@property (nonatomic, copy) NSString *UncommonOptions;
@property (nonatomic) BOOL UseBasicAuth;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AddAuthQueryParam
- (BOOL)AddAuthQueryParam: (NSString *)name 
	value: (NSString *)value;
// method: AddTokenQueryParam
- (BOOL)AddTokenQueryParam: (NSString *)name 
	value: (NSString *)value;
// method: Cancel
- (BOOL)Cancel;
// method: GetRedirectRequestParam
- (NSString *)GetRedirectRequestParam: (NSString *)paramName;
// method: LoadTaskCaller
- (BOOL)LoadTaskCaller: (CkoTask *)task;
// method: Monitor
- (BOOL)Monitor;
// method: MonitorAsync
- (CkoTask *)MonitorAsync;
// method: RefreshAccessToken
- (BOOL)RefreshAccessToken;
// method: RefreshAccessTokenAsync
- (CkoTask *)RefreshAccessTokenAsync;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetRefreshHeader
- (BOOL)SetRefreshHeader: (NSString *)name 
	value: (NSString *)value;
// method: SetRefreshHeaderAsync
- (CkoTask *)SetRefreshHeaderAsync: (NSString *)name 
	value: (NSString *)value;
// method: SleepMs
- (void)SleepMs: (NSNumber *)millisec;
// method: StartAuth
- (NSString *)StartAuth;
// method: UseConnection
- (BOOL)UseConnection: (CkoSocket *)sock;

@end
