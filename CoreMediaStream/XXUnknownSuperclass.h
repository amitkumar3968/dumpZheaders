/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (MSErrorUtilities)
+(id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description underlyingError:(id)error additionalUserInfo:(id)info;
+(id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description underlyingError:(id)error;
+(id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description suggestion:(id)suggestion;
+(id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description;
-(id)MSMMCSRetryAfterDate;
-(BOOL)MSIsQuotaError;
-(BOOL)MSContainsErrorWithDomain:(id)domain code:(int)code;
-(BOOL)MSIsBadTokenError;
-(BOOL)MSIsAuthError;
-(BOOL)MSIsFatal;
-(BOOL)MSIsCounted;
-(BOOL)MSNeedsBackoff;
-(BOOL)MSCanBeIgnored;
-(BOOL)MSASStateMachineIsCanceledError;
-(BOOL)MSIsTemporaryNetworkError;
-(void)_MSApplyBlock:(id)block;
-(id)MSFindPrimaryError;
-(id)MSMakePrimaryError;
-(id)MSVerboseDescription;
-(id)_MSVerboseDescriptionRecursionCount:(int)count;
@end

@interface XXUnknownSuperclass (MCDictionaryUtilities)
-(id)MSDeepCopy;
-(id)MSDeepCopyWithZone:(NSZone*)zone;
-(id)MSMutableDeepCopy;
-(id)MSMutableDeepCopyWithZone:(NSZone*)zone;
@end

@interface XXUnknownSuperclass (MSArrayUtilities)
-(id)MSDeepCopy;
-(id)MSDeepCopyWithZone:(NSZone*)zone;
-(id)MSMutableDeepCopy;
-(id)MSMutableDeepCopyWithZone:(NSZone*)zone;
@end

@interface XXUnknownSuperclass (MSArrayUtilities)
-(void)MSRemoveOneObjectByPointerComparison:(id)comparison;
-(void)MSRemoveOneObject:(id)object;
@end

@interface XXUnknownSuperclass (MSStringUtilities)
+(id)MSStringWithBool:(BOOL)aBool;
+(id)MSTempFilePath;
+(id)MSMakeUUID;
-(unsigned long long)MSUniqueID;
-(id)MSHexData;
@end

@interface XXUnknownSuperclass (MSDataUtilities)
-(id)MSHexString;
-(id)MSBase64Encoding;
-(id)MSInitWithBase64Encoding:(id)base64Encoding;
@end

@interface XXUnknownSuperclass (MSDeleteStreamsProtocol)
-(id)MSDSPAssetCollectionWithMasterFileHash:(id)masterFileHash;
@end

@interface XXUnknownSuperclass (MSASServerSideModel)
+(id)MSASDictionaryWithCopyOfDictionary:(id)dictionary;
-(id)MSASAddIsErrorRecovery;
-(id)MSASAddNotInterestingKey;
-(id)MSASAddEventIsDueToAssetCollectionDeletionAssetCollectionGUID:(id)assetCollectionDeletionAssetCollectionGUID;
-(id)MSASAddEventIsDueToAlbumDeletionAlbumGUID:(id)albumDeletionAlbumGUID;
-(id)MSASAddIsLocalChange;
-(id)MSASAddIsAlbumResetSyncAlbumGUID:(id)guid;
-(id)MSASAddIsGlobalResetSync;
-(id)MSASAddDictionary:(id)dictionary;
@end

@interface XXUnknownSuperclass (MSASDefinitions)
-(BOOL)MSASIsErrorRecovery;
-(BOOL)MSASIsNotInteresting;
-(id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
-(id)MSASEventIsDueToAlbumDeletionAlbumGUID;
-(BOOL)MSASIsLocalChange;
-(id)MSASAlbumResetSyncAlbumGUID;
-(BOOL)MSASIsGlobalResetSync;
@end

@interface XXUnknownSuperclass (MMCSKit)
+(id)MMCSErrorWithDomain:(id)domain code:(int)code description:(id)description;
-(id)MMCSRetryAfterDate;
-(BOOL)MMCSIsFatalError;
-(BOOL)MMCSIsAuthorizationError;
-(BOOL)MMCSIsNetworkConditionsError;
-(BOOL)MMCSIsCancelError;
-(void)_MMCSApplyBlock:(id)block;
-(int)MMCSErrorType;
@end

@interface XXUnknownSuperclass (MSUtilities)
+(id)MSSafeUnarchiveObjectWithFile:(id)file outError:(id*)error;
+(id)MSSafeUnarchiveObjectWithFile:(id)file;
+(id)MSSafeUnarchiveObjectWithData:(id)data outError:(id*)error;
+(id)MSSafeUnarchiveObjectWithData:(id)data;
@end

