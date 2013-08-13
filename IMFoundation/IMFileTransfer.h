/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSDate, NSData, NSString, NSURL;

@interface IMFileTransfer : XXUnknownSuperclass {
	NSURL* _localURL;
	NSData* _localBookmark;
	double _lastUpdatedInterval;
	double _lastAveragedInterval;
	unsigned long long _lastAveragedBytes;
	NSString* _guid;
	NSString* _messageGUID;
	NSDate* _startDate;
	NSDate* _createdDate;
	int _transferState;
	BOOL _isIncoming;
	NSString* _filename;
	NSURL* _transferDataURL;
	NSString* _utiType;
	NSString* _mimeType;
	unsigned long _hfsType;
	unsigned short _hfsFlags;
	unsigned long _hfsCreator;
	NSString* _accountID;
	NSString* _otherPerson;
	unsigned long long _currentBytes;
	unsigned long long _totalBytes;
	unsigned long long _averageTransferRate;
	BOOL _isDirectory;
	BOOL _shouldAttemptToResume;
	int _error;
	NSString* _errorDescription;
	BOOL _wasRegisteredAsStandalone;
	BOOL _shouldForceArchive;
	NSDictionary* _localUserInfo;
	NSString* _transferredFilename;
	NSDictionary* _transcoderUserInfo;
}
@property(readonly, assign, nonatomic) unsigned long long _lastAveragedBytes;	// @synthesize
@property(assign, nonatomic, setter=_setLastAveragedInterval:) double _lastAveragedInterval;	// @synthesize
@property(assign, nonatomic, setter=_setLastUpdatedInterval:) double _lastUpdatedInterval;	// @synthesize
@property(assign, nonatomic, setter=setRegisteredAsStandalone:) BOOL wasRegisteredAsStandalone;	// @synthesize=_wasRegisteredAsStandalone
@property(retain, nonatomic) NSDictionary* userInfo;	// @synthesize=_localUserInfo
@property(retain, nonatomic) NSDictionary* transcoderUserInfo;	// @synthesize=_transcoderUserInfo
@property(retain, nonatomic) NSString* errorDescription;	// @synthesize=_errorDescription
@property(assign, nonatomic) int error;	// @synthesize=_error
@property(assign, nonatomic) BOOL shouldForceArchive;	// @synthesize=_shouldForceArchive
@property(assign, nonatomic) BOOL shouldAttemptToResume;	// @synthesize=_shouldAttemptToResume
@property(assign, nonatomic) BOOL isDirectory;	// @synthesize=_isDirectory
@property(assign, nonatomic) unsigned long long averageTransferRate;	// @synthesize=_averageTransferRate
@property(assign, nonatomic) unsigned long long totalBytes;	// @synthesize=_totalBytes
@property(assign, nonatomic) unsigned long long currentBytes;	// @synthesize=_currentBytes
@property(retain, nonatomic) NSString* otherPerson;	// @synthesize=_otherPerson
@property(retain, nonatomic) NSString* accountID;	// @synthesize=_accountID
@property(assign, nonatomic) unsigned short hfsFlags;	// @synthesize=_hfsFlags
@property(assign, nonatomic) unsigned long hfsCreator;	// @synthesize=_hfsCreator
@property(assign, nonatomic) unsigned long hfsType;	// @synthesize=_hfsType
@property(retain, nonatomic) NSData* localBookmark;	// @synthesize=_localBookmark
@property(readonly, assign, nonatomic) NSURL* localURLWithoutBookmarkResolution;	// @synthesize=_localURL
@property(retain, nonatomic) NSURL* transferDataURL;	// @synthesize=_transferDataURL
@property(retain, nonatomic) NSURL* localURL;
@property(readonly, assign, nonatomic) NSString* mimeType;	// @synthesize=_mimeType
@property(retain, nonatomic) NSString* type;	// @synthesize=_utiType
@property(retain, nonatomic) NSString* localPath;
@property(retain, nonatomic) NSString* transferredFilename;	// @synthesize=_transferredFilename
@property(retain, nonatomic) NSString* filename;	// @synthesize=_filename
@property(assign, nonatomic) BOOL isIncoming;	// @synthesize=_isIncoming
@property(assign, nonatomic) int transferState;	// @synthesize=_transferState
@property(retain, nonatomic) NSDate* startDate;	// @synthesize=_startDate
@property(retain, nonatomic) NSDate* createdDate;	// @synthesize=_createdDate
@property(retain, nonatomic) NSString* messageGUID;	// @synthesize=_messageGUID
@property(retain, nonatomic) NSString* guid;	// @synthesize=_guid
@property(readonly, assign, nonatomic) BOOL existsAtLocalPath;
@property(readonly, assign, nonatomic) NSString* displayName;
@property(readonly, assign, nonatomic) BOOL canBeAccepted;
+(BOOL)_doesLocalURLRequireArchiving:(id)archiving;
+(id)_invalidCharactersForFileTransferName;
// declared property setter: -(void)setTranscoderUserInfo:(id)info;
// declared property getter: -(id)transcoderUserInfo;
// declared property setter: -(void)setTransferredFilename:(id)filename;
// declared property getter: -(id)transferredFilename;
// declared property setter: -(void)setUserInfo:(id)info;
// declared property getter: -(id)userInfo;
-(void)_setForceArchive:(BOOL)archive;
// declared property getter: -(BOOL)shouldForceArchive;
// declared property setter: -(void)setRegisteredAsStandalone:(BOOL)standalone;
// declared property getter: -(BOOL)wasRegisteredAsStandalone;
-(void)_setErrorDescription:(id)description;
// declared property getter: -(id)errorDescription;
-(void)_setError:(int)error;
// declared property getter: -(int)error;
// declared property setter: -(void)setShouldAttemptToResume:(BOOL)attemptToResume;
// declared property getter: -(BOOL)shouldAttemptToResume;
// declared property setter: -(void)setIsDirectory:(BOOL)directory;
// declared property getter: -(BOOL)isDirectory;
// declared property setter: -(void)setAverageTransferRate:(unsigned long long)rate;
// declared property getter: -(unsigned long long)averageTransferRate;
// declared property setter: -(void)setTotalBytes:(unsigned long long)bytes;
// declared property getter: -(unsigned long long)totalBytes;
// declared property setter: -(void)setCurrentBytes:(unsigned long long)bytes;
// declared property getter: -(unsigned long long)currentBytes;
// declared property setter: -(void)setOtherPerson:(id)person;
// declared property getter: -(id)otherPerson;
// declared property setter: -(void)setAccountID:(id)anId;
// declared property getter: -(id)accountID;
// declared property setter: -(void)setHfsCreator:(unsigned long)creator;
// declared property getter: -(unsigned long)hfsCreator;
// declared property setter: -(void)setHfsFlags:(unsigned short)flags;
// declared property getter: -(unsigned short)hfsFlags;
// declared property setter: -(void)setHfsType:(unsigned long)type;
// declared property setter: -(void)setType:(id)type;
// declared property getter: -(id)transferDataURL;
// declared property setter: -(void)setFilename:(id)filename;
// declared property getter: -(id)filename;
// declared property setter: -(void)setIsIncoming:(BOOL)incoming;
// declared property getter: -(BOOL)isIncoming;
-(void)_setTransferState:(int)state;
// declared property getter: -(int)transferState;
// declared property setter: -(void)setCreatedDate:(id)date;
// declared property getter: -(id)createdDate;
// declared property getter: -(id)startDate;
// declared property setter: -(void)setMessageGUID:(id)guid;
// declared property getter: -(id)messageGUID;
// declared property setter: -(void)setGuid:(id)guid;
// declared property getter: -(id)guid;
// declared property getter: -(unsigned long long)_lastAveragedBytes;
// declared property setter: -(void)_setLastAveragedInterval:(double)interval;
// declared property getter: -(double)_lastAveragedInterval;
// declared property setter: -(void)_setLastUpdatedInterval:(double)interval;
// declared property getter: -(double)_lastUpdatedInterval;
// declared property setter: -(void)setLocalBookmark:(id)bookmark;
// declared property getter: -(id)localBookmark;
// declared property getter: -(id)localURLWithoutBookmarkResolution;
-(id)description;
// declared property getter: -(unsigned long)hfsType;
// declared property getter: -(id)type;
// declared property getter: -(id)mimeType;
-(void)_setLocalURL:(id)url;
-(void)_setLocalPath:(id)path;
// declared property getter: -(id)localURL;
// declared property getter: -(id)localPath;
-(void)_setTransferDataURL:(id)url;
// declared property getter: -(BOOL)existsAtLocalPath;
// declared property getter: -(id)displayName;
// declared property getter: -(BOOL)canBeAccepted;
-(void)_calculateTypeInformation;
-(id)_dictionaryRepresentation;
-(BOOL)_updateWithDictionaryRepresentation:(id)dictionaryRepresentation;
-(void)_clear;
-(void)_setDirectory:(BOOL)directory hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags;
-(void)_setAveragedTransferRate:(unsigned long long)rate lastAveragedInterval:(double)interval lastAveragedBytes:(unsigned long long)bytes;
-(void)_setCurrentBytes:(unsigned long long)bytes totalBytes:(unsigned long long)bytes2;
-(void)_setStartDate:(id)date;
-(void)_setAccount:(id)account otherPerson:(id)person;
-(id)_initWithGUID:(id)guid filename:(id)filename isDirectory:(BOOL)directory localURL:(id)url account:(id)account otherPerson:(id)person totalBytes:(unsigned long long)bytes hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags isIncoming:(BOOL)incoming;
-(void)dealloc;
@end
