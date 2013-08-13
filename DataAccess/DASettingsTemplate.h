/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface DASettingsTemplate : XXUnknownSuperclass {
	NSString* _name;
	int _order;
	NSString* _primaryDomain;
	NSArray* _domainAliasPatterns;
	NSString* _primaryUsernameDomain;
	int _httpPort;
	int _httpsPort;
	int _port;
	NSString* _pathFormat;
	BOOL _isDefaultTemplate;
	BOOL _defaultUseSSL;
}
@property(assign) BOOL isDefaultTemplate;	// @synthesize=_isDefaultTemplate
@property(readonly, assign, nonatomic) NSString* defaultScheme;
@property(readonly, assign, nonatomic) int defaultPort;
@property(assign, nonatomic) BOOL defaultUseSSL;	// @synthesize=_defaultUseSSL
@property(retain, nonatomic) NSString* pathFormat;	// @synthesize=_pathFormat
@property(assign, nonatomic) int httpsPort;	// @synthesize=_httpsPort
@property(assign, nonatomic) int httpPort;	// @synthesize=_httpPort
@property(retain, nonatomic) NSString* primaryUsernameDomain;	// @synthesize=_primaryUsernameDomain
@property(retain, nonatomic) NSArray* domainAliasPatterns;	// @synthesize=_domainAliasPatterns
@property(retain, nonatomic) NSString* primaryDomain;	// @synthesize=_primaryDomain
@property(assign, nonatomic) int order;	// @synthesize=_order
@property(retain, nonatomic) NSString* name;	// @synthesize=_name
+(BOOL)_isValidPort:(int)port;
+(id)templateWithDomain:(id)domain;
+(BOOL)requiresPorts;
+(BOOL)requiresPathFormat;
+(id)defaultTemplate;
+(id)knownTemplates;
// declared property setter: -(void)setDefaultUseSSL:(BOOL)ssl;
// declared property getter: -(BOOL)defaultUseSSL;
// declared property setter: -(void)setIsDefaultTemplate:(BOOL)aTemplate;
// declared property getter: -(BOOL)isDefaultTemplate;
// declared property setter: -(void)setPathFormat:(id)format;
// declared property getter: -(id)pathFormat;
// declared property setter: -(void)setHttpsPort:(int)port;
// declared property getter: -(int)httpsPort;
// declared property setter: -(void)setHttpPort:(int)port;
// declared property getter: -(int)httpPort;
// declared property setter: -(void)setPrimaryUsernameDomain:(id)domain;
// declared property getter: -(id)primaryUsernameDomain;
// declared property setter: -(void)setDomainAliasPatterns:(id)patterns;
// declared property getter: -(id)domainAliasPatterns;
// declared property setter: -(void)setPrimaryDomain:(id)domain;
// declared property getter: -(id)primaryDomain;
// declared property setter: -(void)setOrder:(int)order;
// declared property getter: -(int)order;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
-(id)description;
-(id)_principalPathForAccount:(id)account;
-(BOOL)_isPrincipalPathCustomForAccount:(id)account;
-(id)descriptionForAccount:(id)account;
-(void)_appendPrimarySuffixToUsernameIfNeeded:(id)usernameIfNeeded;
-(void)_setPrincipalURLForAccount:(id)account;
-(void)setPrincipalURLForAccount:(id)account toURL:(id)url;
-(void)setURL:(id)url forAccount:(id)account;
-(void)setPort:(int)port forAccount:(id)account;
-(void)setUseSSL:(BOOL)ssl forAccount:(id)account;
-(void)setUsername:(id)username forAccount:(id)account;
-(void)setDomain:(id)domain forAccount:(id)account;
-(void)initAccount:(id)account;
-(BOOL)_isDomainInAliases:(id)aliases;
// declared property getter: -(int)defaultPort;
// declared property getter: -(id)defaultScheme;
-(int)compare:(id)compare;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(void)dealloc;
-(id)_initWithName:(id)name plist:(id)plist;
@end
