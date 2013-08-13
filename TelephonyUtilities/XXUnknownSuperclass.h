/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface XXUnknownSuperclass (QueryParameters)
-(id)URLByDeletingQueryParameterWithKey:(id)key;
-(id)URLBySettingQueryParameterValue:(id)value forKey:(id)key;
-(id)URLWithNewQueryParameterDictionary:(id)newQueryParameterDictionary;
-(id)queryParameters;
@end

@interface XXUnknownSuperclass (QueryParameterSupport)
-(id)asQueryParameterString;
@end

@interface XXUnknownSuperclass (FaceTime)
+(id)faceTimeAcceptURLWithURL:(id)url conferenceID:(id)anId;
+(id)faceTimeAcceptURLWithURL:(id)url;
+(id)faceTimePromptURLWithURL:(id)url;
+(id)faceTimeURLWithURL:(id)url;
+(id)_applyFaceTimeScheme:(id)scheme toFaceTimeURL:(id)faceTimeURL;
+(id)faceTimeURLWithDestinationID:(id)destinationID addressBookUID:(int)uid;
+(id)faceTimeURLWithDestinationID:(id)destinationID;
+(id)_faceTimeURLWithDestinationID:(id)destinationID addressBookUID:(int)uid;
-(BOOL)isFaceTimeAcceptURL;
-(BOOL)isFaceTimePromptURL;
-(BOOL)isValidFaceTimeURL;
-(BOOL)isFaceTimeURL;
-(BOOL)_isPhoneNumberID:(id)anId;
-(id)faceTimeDestinationAccount;
@end

@interface XXUnknownSuperclass (FaceTime_PhoneNumber)
+(id)faceTimeURLWithPhoneNumber:(id)phoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;
@end

@interface XXUnknownSuperclass (FaceTime)
-(BOOL)destinationIdIsPhoneNumber;
-(BOOL)destinationIdIsEmailAddress;
@end

@interface XXUnknownSuperclass (Telephony)
@property(readonly, assign) BOOL wasAlreadyAssisted;
@property(readonly, assign) BOOL suppressAssist;
@property(readonly, assign) BOOL forceAssist;
@property(readonly, assign) int addressBookUID;
@property(readonly, assign) NSString* phoneNumber;
+(id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;
+(id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid;
+(id)URLWithTelephoneNumber:(id)telephoneNumber promptUser:(BOOL)user;
+(id)URLWithTelephoneNumber:(id)telephoneNumber;
-(id)_mobilePhoneQueryParameters;
-(id)_mobilePhonePathParameters;
-(id)telephonyParameterDictionary;
-(id)webSafeTelephoneURL;
-(BOOL)isWebSafeTelephoneURL;
-(id)numberQualifiedForAddressBook;
-(id)formattedPhoneNumber;
-(BOOL)hasTelephonyScheme;
// declared property getter: -(BOOL)wasAlreadyAssisted;
// declared property getter: -(BOOL)suppressAssist;
// declared property getter: -(BOOL)forceAssist;
// declared property getter: -(int)addressBookUID;
// declared property getter: -(id)phoneNumber;
@end

